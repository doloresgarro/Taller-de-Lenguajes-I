#include <stdio.h>
#include <stdlib.h>

//(Toda la expresion > o): Toda la expresion : -Toda la expresion
//#define ABS(a,b) (a > 0) ? ((a) - (b)) : (-((a) - (b))
//#define ABS(a,b) ((a) - (b)) > 0  ? ((a) - (b)) : (-((a) - (b)))

#define ABS(a,b) ((a) > 0) ? ((a) - (b)) : -1 * ((a) - (b))
#define MANH(Px, Py, Qx, Qy) (ABS(Px, Qx) + ABS(Py, Qy))

int main()
{
    // MANH(-6,-2, -4,2)
    //printf("valor absoluto de a y b %d\n",ABS(-4,2));
    printf("valor absoluto de a y b %d", ABS(-4,2));
    return 0;
}

