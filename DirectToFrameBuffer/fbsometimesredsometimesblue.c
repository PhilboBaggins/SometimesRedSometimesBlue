#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <time.h>

int main(int argc, char** argv)
{
    int fbfd = 0;
    struct fb_var_screeninfo vinfo;
    struct fb_fix_screeninfo finfo;
    long int screensize = 0;
    char* fbp = 0;
    int x = 0, y = 0;
    long int location = 0;

    unsigned char RED  = 0;
    unsigned char BLUE = 0;

    // Red or blue?
    srand((unsigned int)time(NULL));
    if ((rand() % 2) == 0)
    {
        RED  = 255;
        BLUE = 0;
    }
    else
    {
        RED  = 0;
        BLUE = 255;
    }

    if (argc >= 2)
    {
        fbfd = open(argv[1], O_RDWR);
    }
    else
    {
        fbfd = open("/dev/fb0", O_RDWR);
    }

    if (fbfd == -1)
    {
        perror("Error: cannot open framebuffer device");
        exit(1);
    }
    printf("The framebuffer device was opened successfully.\n");

    // Get fixed screen information
    if (ioctl(fbfd, FBIOGET_FSCREENINFO, &finfo) == -1)
    {
        perror("Error reading fixed information");
        exit(2);
    }

    // Get variable screen information
    if (ioctl(fbfd, FBIOGET_VSCREENINFO, &vinfo) == -1)
    {
        perror("Error reading variable information");
        exit(3);
    }

    printf("%dx%d, %dbpp\n", vinfo.xres, vinfo.yres, vinfo.bits_per_pixel);

    // Figure out the size of the screen in bytes
    screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;

    // Map the device to memory
    fbp = (char*)mmap(0, screensize, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);
    if ((int)fbp == -1)
    {
        perror("Error: failed to map framebuffer device to memory");
        exit(4);
    }
    printf("The framebuffer device was mapped to memory successfully.\n");

    // Colour each pixel on the screen
    for (y = 0; y < vinfo.yres; y++)
    {
        for (x = 0; x < vinfo.xres; x++)
        {
            location = (x+vinfo.xoffset) * (vinfo.bits_per_pixel/8)
                     + (y+vinfo.yoffset) * finfo.line_length;

            if (vinfo.bits_per_pixel == 32)
            {
                *(fbp + location + 0) = BLUE;
                *(fbp + location + 1) = 0; // Green
                *(fbp + location + 2) = RED;
                *(fbp + location + 3) = 0; // No transparency
            }
            else if (vinfo.bits_per_pixel == 16)
            {
                int g = 0; // Green
                unsigned short int t = RED << 11 | g << 5 | BLUE;
                *((unsigned short int*)(fbp + location)) = t;
            }
            else
            {
                perror("Don't know how to do anything but 32 and 16 bit\n");
                exit(1);
            }
        }
    }
    munmap(fbp, screensize);
    close(fbfd);
    return 0;
}
