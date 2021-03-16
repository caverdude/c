#include <stdio.h>

void print_msg(char *message);
int main(void)
{
    print_msg("This is a message to print");
    return 0;
}
void print_msg(char *message){
    puts(message);

}
