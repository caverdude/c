#include <stdio.h>
#include <Windows.h>

int main(void)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY| BACKGROUND_GREEN);
    printf("\nA char                   is %d bytes", sizeof(char));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_BLUE);
    printf("\nAn int                   is %d bytes", sizeof(int));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_GREEN);
    printf("\nA short                  is %d bytes", sizeof(short));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_BLUE);
    printf("\nA long                   is %d bytes", sizeof(long));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_GREEN);
    printf("\nA long long              is %d bytes", sizeof(long long));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_BLUE);
    printf("\nA char unsigned          is %d bytes", sizeof(unsigned char));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_GREEN);
    printf("\nAn int unsigned          is %d bytes", sizeof(unsigned int));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_BLUE);
    printf("\nA short unsigned         is %d bytes", sizeof(unsigned short));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_GREEN);
    printf("\nA long unsigned          is %d bytes", sizeof(unsigned long));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_BLUE);
    printf("\nA long long unsigned     is %d bytes", sizeof(unsigned long long));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_GREEN);
    printf("\nA float                  is %d bytes", sizeof(float));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_BLUE);
    printf("\nA double                 is %d bytes", sizeof(double));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY|BACKGROUND_GREEN);
    printf("\nA long double            is %d bytes", sizeof(long double));
    return 0;
}
