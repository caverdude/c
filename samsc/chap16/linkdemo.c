#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct data {
    char name[20];
    struct data *next;
};

typedef struct data PERSON;
typedef PERSON *LINK;

int main( void )
{
    LINK head = NULL;
    LINK new = NULL;
    LINK current = NULL;


    new = (LINK)malloc(sizeof(PERSON));
    new->next = head;
    head = new;
    strcpy(new->name, "Abigail");

    current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }

    new = (LINK)malloc(sizeof(PERSON));
    current->next = new;
    new->next = NULL;
    strcpy(new->name, "Carolyn");

    new = (LINK)malloc(sizeof(PERSON));
    new->next = head->next;
    head->next=new;
    strcpy(new->name, "Beatrice");

    current = head;
    while (current != NULL)
    {
        printf("\n%s", current->name);
        current = current->next;
    }

    printf("\n");
    return 0;

}
