#include <stdio.h>
int main(void)
{
    printf("Type short has a size or %lu bytes.\n", sizeof(short));
    printf("Type int has a size or %lu bytes.\n", sizeof(int));
    printf("Type float has a size or %lu bytes.\n", sizeof(float));
    printf("Type double has a size or %lu bytes.\n", sizeof(double));
    printf("Type long double has a size or %lu bytes.\n", sizeof(long double));
    return 0;
}
