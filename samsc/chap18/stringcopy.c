#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char source[] = "The source string.";

int main( void )
{
    char dest1[80];
    char *dest2;

    printf("\nsource: %s", source);

    strcpy(dest1, source);
    printf("\ndest1: %s", dest1);

    dest2 = (char *)malloc(strlen(source)+1);
    strcpy(dest2, source);
    printf("\ndest2: %s\n", dest2);

    return 0;
}
