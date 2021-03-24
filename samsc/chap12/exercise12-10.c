#include <stdio.h>
void print_letter2(void);

int ctr; // used by both for loops and keeps resetting it to 0
int ctr2;
char letter1 = 'X';
char letter2 = '=';

int main(void)
{
    for( ctr = 0; ctr < 10; ctr++)
    {
        printf("%c", letter1);
        print_letter2();
    }
    return 0;
}

void print_letter2(void)
{
    for( ctr2 = 0; ctr2 < 2; ctr2++)
        printf("%c", letter2);
}
