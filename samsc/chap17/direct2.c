#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main( void)
{
    int count, array1[SIZE], array2[SIZE];
    FILE *fp;

    for (count=0; count<SIZE; count++)
        array1[count] = 2 * count;

    if ((fp = fopen("direct.dat", "wb"))== NULL)
    {
        fprintf(stderr, "Error opening file.");
        exit(1);
    }

    if (fwrite(array1, sizeof(int), SIZE, fp)!= SIZE)
    {
        fprintf(stderr, "Error writing to file.");
    }

    fclose(fp);



    if ( (fp = fopen("direct.dat", "rb"))==NULL)
    {
        fprintf(stderr,"Error opening file.");
        exit(1);
    }

    if (fread(array2, sizeof(int), SIZE, fp)!= SIZE)
    {
        fprintf(stderr, "Error reading file.");
        exit(1);
    }
    fclose(fp);

    for (count = 0; count <SIZE; count++)
        printf("%d\t%d\n", array1[count], array2[count]);
    return 0;


}
