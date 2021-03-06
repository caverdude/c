#include <stdio.h>

#define MAX 4

struct part {
    short number;
    char name[12];
} data[MAX] = { { 1, "Thomas"},
                { 2, "Christopher"},
                { 3, "Andrew"},
                { 4, "Benjamin"}};

struct part *p_part;
int count;

int main( void )
{
    p_part = data;

    for (count = 0; count < MAX; count++){
        printf("At address %p: %d %s\n", p_part, p_part->number,
               p_part->name);
        p_part++;
    }

    return 0;
}




