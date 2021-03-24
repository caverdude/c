#include <stdio.h>

int main( void )
{
    char buffer[81];
    int ctr;

    puts("Enter a line of test:");

    gets(buffer);

    for(ctr = 0; buffer[ctr] !='\0'; ctr++)
    {
        if (buffer[ctr]=='a' || buffer[ctr]=='e'
            || buffer[ctr]== 'i' || buffer[ctr]=='o'
            || buffer[ctr]== 'u')
                continue;
        putchar(buffer[ctr]);
    }
    return 0;
}
