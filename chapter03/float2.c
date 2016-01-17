#include <stdio.h>
int main(void)
{
    int *l;
    float f = 1.0f;
    *l = (long)&f;
    printf("%d\n", *l);
    printf("%lu\n", sizeof(*l));
    printf("%lu\n", sizeof(float));

    return 0;
}
