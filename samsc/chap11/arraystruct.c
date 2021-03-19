#include <stdio.h>
#define NAMESIZE 30

struct data{
    float amount;
    char fname[NAMESIZE];
    char lname[NAMESIZE];
} rec;

int main( void )
{

    printf("Enter the donor's first and last names, \n");
    printf("separated by a space: ");
    scanf("%30s %30s", rec.fname, rec.lname);

    printf("\nEnter the donation amount: ");
    scanf("%f", &rec.amount);

    printf("\nDonor %s %s gave $%.2f.\n", rec.fname, rec.lname, rec.amount);

    return 0;
}
