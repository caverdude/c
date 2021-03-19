#include <stdio.h>

int main( void )
{
    union shared_tag {
        char c;
        int i;
        long l;
        float f;
        double d;

    } shared;

    shared.c = '$';

    printf("\nchar c       = %c", shared.c);
    printf("\nint i        = %d", shared.i);
    printf("\nlong c       = %ld", shared.l);
    printf("\nfloat i      = %f", shared.f);
    printf("\ndouble c     = %f", shared.d);

    shared.d = 123456789.8765;

    printf("\n\nchar c       = %c", shared.c);
    printf("\nint i        = %d", shared.i);
    printf("\nlong c       = %ld", shared.l);
    printf("\nfloat i      = %f", shared.f);
    printf("\ndouble c     = %f", shared.d);

    return 0;
}
