#include <stdio.h>

int main( void )
{
    unsigned int y, x = 255;
    int count;

    printf("Decimal\t\tshift left by\tresult\n");

    for(count = 1; count < 8; count++)
    {
        y = x << count;
        printf("%d\t\t%d\t\t%d\n", x, count, y);

    }
    printf("%d\t\t%d\t\t%d\n", x, count, y);

    for( count = 1; count < 8; count ++)
    {
        y = x >> count;
        printf("%d\t\t%d\t\t%d\n", x, count, y);

    }
    return 0;
}
