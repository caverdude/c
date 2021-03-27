#include <stdio.h>

oid print_strings(char *p[], int n);

int main( void ){
    char *message[8] = { "Four", "score", "and", "seven",
                        "years", "ago.", "our","forefathers" };
    print_strings(message, 8);
    return 0;
}
