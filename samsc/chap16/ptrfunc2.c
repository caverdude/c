#include <stdio.h>

void func1(int x);
void one(void);
void two(void);
void other(void);

int main( void )
{
    int nbr;

    for(;;)
    {
        puts("\nEnter an integer between 1 and 10, 0 to exit: ");
        scanf("%d", &nbr);

        if (nbr == 0)
            break;
        func1(nbr);
    }
    return 0;
}

void func1(int val)
{
    void (*ptr)(void);

    if (val==1)
        ptr = one;
    else if(val==2)
        ptr = two;
    else
        ptr = other;

    ptr();
}

void one(void)
{
    puts("You entered 1.");

}

void two(void)
{
    puts("You entered 2.");
}

void other(void)
{

}

