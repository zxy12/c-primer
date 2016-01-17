#include <stdio.h>
int main(void)
{
    float n1 = 3.0;
    double n2 = 0.0;
    long n3 = 20000001;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
    printf("%lu %lu %lu %lu \n", sizeof n2, sizeof n2, sizeof n3, sizeof n4);
    return 0;
}
