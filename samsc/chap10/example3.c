#include <stdio.h>
char line[256];
int main(void)
{
    printf("Enter a string:\n");
    gets(line);
    printf("\nYou entered the following string:\n");
    printf("%s\n", line);
}
