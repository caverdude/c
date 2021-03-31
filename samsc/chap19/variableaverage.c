#include <stdio.h>
#include <stdarg.h>

float average(int num, ...);

int main( void)
{
    float x;

    x = average(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    printf("\nThe first average is %.2f.", x);
    x = average(5, 121, 206, 76, 31, 5);
    printf("\nThe second average is %.2f.\n", x);
    return 0;
}

float average( int num, ...)
{

    va_list arg_ptr;
    int number, count, total = 0;

    va_start(arg_ptr, num);
    printf("\n");
    for (count = 0; count < num; count++){
        number = va_arg( arg_ptr, int );
        total += number;
        printf("Arg %d Number %d\n",count, number);
    }
    printf("\n");
    va_end(arg_ptr);

    return ((float)total/num);
}
