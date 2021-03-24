#include <stdio.h>

int main(void){
    int x;
    printf("Printing only even numbers from 1 to 10\n");
    for(x=1;x<=10;x++)
    {
        if(x%2!=0)
            continue;
        printf("\n%d",x);
    }
}
