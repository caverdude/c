#include <stdio.h>
#include <string.h>

int main(void){

    char buffer[256];

    printf("Enter your name and press <ENTER>.\n");
    fgets(buffer, 256, stdin);
    printf("\nYour name has %d characters and spaces!", strlen(buffer));

    return 0;
}

