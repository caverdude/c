#include <stdio.h>

int x,y;

int main(void)
{
    for( x=0;x<10;x++ , printf("\n"))
        for(y = 0; y< 10; y++)
            // printf("x");   // xxxxxxx
            printf("%c", 57); // 999999
    return 0;
}
