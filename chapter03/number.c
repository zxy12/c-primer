#include <stdio.h>
int main(void)
{
    short s = 1;
    int i = 2;
    long l = 3;
    unsigned short us = 4;
    unsigned u = 5;
    unsigned long ul = 6uL;
    unsigned long long ull = 7ull;

    printf("%hd %d %ld %hu %u %lu %llu", s, i, l, us, u, ul, ull);
    //printf("%d %d %d %u %u %u %u", s, i, l, us, u, ul, ull);
    return 0;
}
