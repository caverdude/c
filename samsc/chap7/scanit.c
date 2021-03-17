#include <stdio.h>

#define QUIT 4

int get_menu_choice(void);



int main(void)
{
    int choice  =0;
    int int_var =0;
    float float_var = 0.0;
    unsigned unsigned_var = 0;

    while(choice != QUIT)
    {
        choice = get_menu_choice();

        if(choice == 1)
        {
            printf("\nEnter a signed decimal integer (i.e. -123)");
            scanf("%d", &int_var);
        }
        if(choice == 2)
        {
            printf("\nEnter a decimal floating-point number \
(e.g. 1.23) ");
            scanf("%f", &float_var);
        }
        if(choice == 3)
        {
            printf("\nEnter an unsigned decimal integer \
(e.g. 123) ");
            scanf("%u", &unsigned_var);
        }

    }
    printf("\nYour values are: int: %d  float: %f  unsigned: %u \n",
           int_var, float_var, unsigned_var);

    return 0;
}

int get_menu_choice( void)
{
    int selection = 0;

    do
    {
        printf("\n");
        printf("\n1 - Get a signed decimal integer  ");
        printf("2 - Get a decimal floating point number  ");
        printf("3 - Get an unsigned decimal integer  ");
        printf("4 - Quit");
        printf("\n");
        printf("\nEnter a Selection: ");
        scanf("%d", &selection);

    } while( selection < 1 || selection > 4);

    return selection;

}


