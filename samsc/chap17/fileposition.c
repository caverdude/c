#include <stdlib.h>
#include <stdio.h>

#define BUFLEN 6

char msg[] = "abcdefghijklmnopqrstuvwxyz";

int main( void )
{
    FILE *fp;
    char buf[BUFLEN];

    if ( (fp = fopen("fileposition.txt", "w"))==NULL)
    {
        fprintf(stderr, "Error opening file for writing.");
        exit(1);
    }

    if (fputs(msg, fp) == EOF)
    {
        fprintf(stderr, "Error writing to file.");
        exit(1);
    }

    fclose(fp);

    if ( (fp, fopen("fileposition.txt", "r"))==NULL)
    {
        fprintf(stderr, "Error opening file for reading.");
        exit(1);
    }
    printf("\nImmediately after opening, position = %ld", ftell(fp));

    fgets(buf, BUFLEN, fp);
    printf("\nAfter reading in %s, position = %ld", buf, ftell(fp));

    fgets(buf, BUFLEN, fp);
    printf("\n\nThe next 5 characters are %s, position now = %ld", buf, ftell(fp));

    rewind(fp);

    printf("\n\nAfter rewinding, position is back at= %ld", ftell(fp));

    fgets(buf, BUFLEN, fp);
    printf("\n\nand reading starts at the beginning again: %s\n", buf);
    fclose(fp);
    return 0;
}
