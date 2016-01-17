#include <stdio.h>
int main(void)
{
    int i = 0x41;
    char *cp;
    int *ip;
    ip = &i;
    //printf("%p\n", ip);
    cp = (char *)ip;
    //printf("%p\n", cp);
    printf("%p\n", cp);
    printf("%c\n", *cp);
    cp+=1;
    printf("%p\n", cp);
    printf("%c\n", *cp);
    cp+=1;
    printf("%p\n", cp);
    printf("%c\n", *cp);
    cp+=1;
    printf("%p\n", cp);
    printf("%c\n", *cp);
    printf("%d\n", *ip);
    printf("%lu\n", sizeof(*ip));
    printf("%lu\n", sizeof(i));
    printf("%lu\n", sizeof(*cp));
    return 0;
}
