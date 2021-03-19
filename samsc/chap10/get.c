#include <stdio.h>

char input[257];

int main(void)
{
    puts("Enter some text, then press Enter: ");
    gets(input);
    printf("You entered: %s\n", input);
}
