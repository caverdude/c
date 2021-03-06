#include <stdio.h>

void half(void *pval, char type);

int main( void){
    int i = 20;
    long l = 100000;
    float f = 12.456;
    double d = 123.044444;

    printf("\n%d", i);
    printf("\n%ld", l);
    printf("\n%f", f);
    printf("\n%lf\n\n", d);

    half(&i, 'i');
    half(&l, 'l');
    half(&d, 'd');
    half(&f, 'f');

    printf("\n%d", i);
    printf("\n%ld", l);
    printf("\n%f", f);
    printf("\n%lf\n", d);

    return 0;

}

void half(void *pval, char type)
{
    switch(type)
    {
    case 'i':
        {
            *((int *)pval)/=2;
            break;
        }
    case 'l':
        {
            *((long *)pval)/=2;
            break;
        }
    case 'f':
        {
            *((float *)pval)/=2;
            break;
        }
    case 'd':
        {
            *((double *)pval)/=2;
            break;
        }


    }
}
