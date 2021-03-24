#include <stdio.h>




int main(void)
{
    int count = 0;

    printf("\nOutside the block, count = %d", count);

    {
        int count = 999;

        printf("\nInside the block, count = %d", count);
    }


    printf("\nOutside the block, count = %d", count);

    return 0;
}
