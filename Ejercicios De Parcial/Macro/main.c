#include <stdio.h>
#include <stdlib.h>

//retorna el mayor
#define MAX(a,b) a > b ? a : b
//#define MAX2(a,b,c,d)  (MAX(a,b)) > (MAX(c,d)) ?  MAX(a,b) : MAX(c,d)
#define MAX2(a,b,c,d)  MAX(MAX(a,b),(MAX(c,d)))

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Cual es mayor entre %d, %d, %d, %d? %d", a, b, c, d, MAX2(a, b, c, d));
    return 0;
}
