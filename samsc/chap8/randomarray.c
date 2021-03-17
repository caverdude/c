#include <stdio.h>
#include <stdlib.h>

int random_array[10][10][10];
int a, b, c;
char ch;
int main(void)
{
    printf("Making Random Array...");
    for(a =0; a < 10; a++)
    {
        for(b = 0; b < 10; b++){
            for (c = 0; c < 10; c++)
            {
                random_array[a][b][c]=rand();
            }
        }
    }
    printf("Made Random Array...");
    for (a=0;a<10;a++)
    {
        for(b = 0; b<10;b++)
        {
            for(c =0;c<10;c++)
            {
                printf("\nrandom_array[%d][%d][%d]",a,b,c);
                printf("%d", random_array[a][b][c]);
            }
            printf("\nPress Enter to Continue, CTRL-C to quit.");

            ch=getchar();
            if(ch==EOF)goto end;
        }
    }
    end:
    return 0;
}
