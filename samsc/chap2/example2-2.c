#include <stdio.h>

void display_line(void);

int main(void)
{
    display_line();
    printf("\n Teach Yourself C In One Hour a Day:\n");
    display_line();
    return 0;
}

void display_line(void){
    int counter;

    for(counter = 0; counter < 30; counter++)
        printf("*");
}
