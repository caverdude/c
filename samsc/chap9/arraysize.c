#include <stdio.h>

int ctr;
short array_s[10];
float array_f[10];
double array_d[10];

int main(void)
{
    printf("\t\tShort\t\tFloat\tDouble");

    printf("\n==========================");
    printf("======================");

    for(ctr = 0; ctr <10 ; ctr++){
        printf("\nElement %d:\t%p\t\t%p\t\t%p", ctr,
               &array_s[ctr], &array_f[ctr], &array_d[ctr]);

    }
    printf("\n==========================");
    printf("======================\n");
    return 0;
}
