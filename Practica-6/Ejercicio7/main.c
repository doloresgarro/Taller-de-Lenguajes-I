/*
El siguiente código debe imprimir el máximo entre las variables a y b. Complete la definición de la macro
para lograr el objetivo.
*/


#include <stdio.h>
#include <stdlib.h>
// si a es mayor devuelve a
#define MAX(a,b) (a > b ? a : b)


int main () {
    int a, b;

    printf("Ingrese dos numeros\n");
    scanf("%d%d", &a, &b);
    printf("\n MAX(%d, %d) = %d", a, b, MAX(a,b));

    return 0;
}
