#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main(void){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_WHITE);
    printf("Hello World!");

}
