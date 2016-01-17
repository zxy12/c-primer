#include <stdio.h>
int main(void)
{
    float f1 = 1.0f;
    int tmp;
    for (int i = 0; i < 16; i++) {
        tmp = f1 & 0x1;
        printf("%d", tmp);
        f1 = f1 >> 1;
    }
}
