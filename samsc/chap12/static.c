#include <stdio.h>

void func1(void);
int main(void){
    int count;

    for (count=0; count<20; count++)
    {
        printf("At iteration %d: ", count);
        func1();
    }

}

void func1()
{
    static int x;
    int y;

    printf("x = %d, y = %d\n", x++, y++);
}

