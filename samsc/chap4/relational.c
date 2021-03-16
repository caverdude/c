#include <stdio.h>

int a;

int main()
{
    a = (5==5);
    printf("\na = (5==5)\na = %d",a);

    a = (5!=5);
    printf("\na = (5!=5)\na = %d",a);

    a = (12 == 12)+(5!=1);
    printf("\na = (12 == 12)+(5!=1)\na = %d",a);

    return 0;

}
