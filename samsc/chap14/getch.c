#include <stdio.h>
#include <conio.h>

int main( void )
{
    int ch;

    while ((ch=getch()) != '\r') // getch() does not echo
        putchar(ch);

    return 0;
}
