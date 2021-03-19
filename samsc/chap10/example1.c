#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char *str;
    str = (char *) malloc(10000000000); //10 gig?
    if (str == NULL)
    {
        printf("Not enough memory to allocate buffer\n");
        exit(1);
    }
    printf("String was allocated!\n");
    return 0;
}
