#include <stdio.h>
int main( void )
{
    int count;

    for(count = 14; count < 255; )
        putchar(count++);

    return 0;
}
