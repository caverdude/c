#include <stdio.h>

int a,b;

int main(void)
{

    a=b=0;
    printf("Count up:\n");
    printf("Post      Pre\n");
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);

    printf("Count down:\n");
    printf("Post      Pre\n");
    printf("%d      %d\n", a--, --b);
    printf("%d      %d\n", a--, --b);
    printf("%d      %d\n", a--, --b);
    printf("%d      %d\n", a--, --b);
    printf("%d      %d\n", a--, --b);

    return 0;
}
