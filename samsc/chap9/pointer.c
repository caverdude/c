#include <stdio.h>

int var = 1;

int *ptr;

int main(void){
    ptr = &var;

    printf("\nDirect access, var = %d", var);
    printf("\nIndirect access, ptr to var = %d", *ptr);

    printf("\n\nThe address of var = %p", &var);
    printf("\nThe address of ptr = %p\n", ptr);

    ptr=NULL;
    printf("\nThe value of a Null pointer is = %p\n", ptr);
    return 0;



}
