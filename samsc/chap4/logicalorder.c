#include <stdio.h>

int a = 5, b = 6, c = 5, d =1;
int x;

int main(void)
{
    x = a < b || a < c && c < d;
    printf("\nWithout parentheses the expression evaluates as %d", x);

    x = (a < b || a < c) && c < d;
    printf("\nWith parentheses the expression evaluates as %d\n", x);
    return 0;
}
