#include <stdio.h>
int main(void)
{
    char c1 = '\1';
    printf("%d\n", 0x0101);
    int i = c1 << 8;
    i = i + c1;
    printf("%d\n", i);
    return 0;
}
