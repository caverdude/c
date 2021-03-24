#include <stdio.h>

int main(void){
    int x;
    printf("Counting from 1 to 10\n");
    for(x=1;;x++)
    {
        if(x==10)
            break;
        printf("\n%d",x);
    }


}
