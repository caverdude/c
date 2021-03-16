#include <stdio.h>

// int a=5  a has value of 5 and is passed by value
// &a is the address for a
// int *p=&a; sets the pointer value of pointer p to address of a
// p is the address, and *p is the value

int main(void){
    int a=10;
    int *c=&a;
    //c=&a;
    foo(a);
    printHex(c);
    foo(*c);
    printf("\n\n");

    foo(a);
    foo(a);

    bar(c);
    bar(c);
    bar(&a);
}

int foo(int b){
    printf("%d ", b);
    b=0;
}
int printHex(int b){
    printf("%08x ",b);
}

int bar(int* b){
    printf("%d ", *b);
    *b=0;
}
