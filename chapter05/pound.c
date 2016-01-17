#include <stdio.h>
void pound(int n);
int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0;
    pound(times); /* int 参数 */
    pound(ch); /* char 参数自动转换为int类型 */
    pound((int) f); /* 指派运算符把f强制转换为int类型 */
    return 0;
}

void pound(int n)
{
    while (n-- > 0) {
        printf("#");
    }
    printf("\n");
}
