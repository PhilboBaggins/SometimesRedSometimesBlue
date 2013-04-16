#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int counts = 0;
    int red = 0;
    int blue = 0;
    while(counts < 100 * 1000)
    {
        srand(time(NULL));
        if ((rand() % 2) == 0)
        {
            ++red;
        }
        else
        {
            ++blue;
        }
        counts++;
    }
    printf("red  = %i, %2.2f percent\n", red, (double)red / counts * 100);
    printf("blue = %i, %2.2f percent\n", blue, (double)blue / counts * 100);
    return 0;
}
