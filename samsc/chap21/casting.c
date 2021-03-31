#include <stdio.h>

int main( void )
{
    int i1 = 100, i2 = 40;
    float f1;

    f1 = i1/i2;
    printf("Without cast 100/40 %lf\n", f1);

    f1 = (float)i1/i2;
    printf("With cast (float)100/40 %lf\n", f1);
    return 0;
}
