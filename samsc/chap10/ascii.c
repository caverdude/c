#include <stdio.h>

unsigned char mychar;

int main(void)
{
    for (mychar = 124; mychar < 255; mychar++)
    {
        printf("ASCII code %d is character %c\n", mychar, mychar);
    }
    return 0;
}
