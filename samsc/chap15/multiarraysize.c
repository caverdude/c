#include <stdio.h>

int multi[2][4];

int main( void )
{
    printf("\nThe Size of multi       = %p", sizeof(multi));
    printf("\nThe Size of multi[0]    = %p", sizeof(multi[0]));
    printf("\nThe Size of multi[0][0] = %p\n", sizeof(multi[0][0]));

    return 0;
}
