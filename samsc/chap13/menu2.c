#include <stdio.h>
#include <stdlib.h>
#define DELAY 150000000

int menu(void);
void delay(void);


int main(void)
{
    int command = 0;

    while(command != 5)
    {

        switch(command)
        {
                case 1:
                {
                    puts("\nExecuting task A.");
                    delay();
                    break;
                }
                case 2:
                {
                    puts("\nExecuting task B.");
                    delay();
                    break;
                }
                case 3:
                {
                    puts("\nExecuting task C.");
                    delay();
                    break;
                }
                case 4:
                {
                    puts("\nExecuting task D.");
                    delay();
                    break;
                }
                case 5:
                {
                    puts("\nExiting Program now...\n");
                    delay();
                    break;
                }
                default:
                {
                    puts("\nInvalid command, try again.");
                    delay();
                }
        }
        command = menu();
    }
    return 0;
}

int menu(void)
{
    int reply;

    puts("\nEnter 1 for task A.");
    puts("\nEnter 2 for task B.");
    puts("\nEnter 3 for task C.");
    puts("\nEnter 4 for task D.");
    puts("\nEnter 5 to exit program.");

    scanf("%d", &reply);

    return reply;
}

void delay( void )
{
    long x;
    for (x = 0; x< DELAY; x++)
        ;

}
