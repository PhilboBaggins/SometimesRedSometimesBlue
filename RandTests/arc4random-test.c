/*
 * Comparing arc4random() to rand()
 *
 * Build it like this:
 *
 *    $ gcc -o arc4random-test arc4random-test.c -lbsd
 *
 */

#include <stdio.h>
#include <bsd/stdlib.h>

int main()
{
    //u_int32_t arc4random(void);
    //void arc4random_buf(void *buf, size_t nbytes);
    //u_int32_t arc4random_uniform(u_int32_t upper_bound);
    //void arc4random_stir(void);
    //void arc4random_addrandom(unsigned char *dat, int datlen);

    u_int32_t a = arc4random();
    printf("arc4random() = 0x%x, %u\n", a, a);

    int r = rand();
    printf("rand() = 0x%x, %i\n", r, r);

    char* arc4Colour = (arc4random_uniform(2) == 0) ? "Red" : "Blue";
    char* randColour = (rand() % 2 == 0) ? "Red" : "Blue";

    printf("arc4Colour = %s\n", arc4Colour);
    printf("randColour = %s\n", randColour);

    return 0;
}
