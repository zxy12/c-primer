#include <stdio.h>
int main(void)
{
    char a = '\a';
    printf("%c %c %c", a, a, a);
    getchar();
    printf("%c %c %c", a, a, a);
    return 0;
}
