#include <stdio.h>
#define MINUS 10
int main(void)
{
    double total = 100;
    double icre = 0.08;
    int year;

    for (year = 1; total > 0; year ++) {
        total += total * icre;
        if (total > MINUS) {
            total -= MINUS;
        } else {
            printf("have $%3.2f at end of %d year\n", total, year);
            printf("this year will be empty");
            total -= MINUS;
        }
    }

    return 0;
}
