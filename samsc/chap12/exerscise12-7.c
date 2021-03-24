#include <stdio.h>

int main( void )
{
    int x;
    int tally = 0;

    for(x = 0;x<101;x++)
    {
        if (x%2==0)
        tally++;
    }

    printf("There are %d even numbers.\n", tally);
}
