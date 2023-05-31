/*
9. Implemente la biblioteca imath.h, la cual contiene funciones matem�ticas para enteros. La misma debe
contener las siguientes funciones:
a. int potencia(int x, int y) � Eleva x a la y-�sima potencia.
b. int cuadrado(int x) � Eleva x al cuadrado.
c. int cubo(int x) � Eleva x al cubo.
d. int absoluto(int i) � Retorna el valor absoluto entero de i.
e. int factorial (int i) � Retorna el factorial de i.
f. int sumatoria (int i) � Retorna la sumatoria de 0 hasta i.
g. int multiplo (int x, int y) � Retorna 1 si y es divisor de x, 0 en otro
caso.
h. int divisor (int x, int y) � Retorna 1 si y es m�ltiplo de x, 0 en otro
caso.
i. int par (int i) � Retorna 1 si i es par, 0 en otro caso.
j. int impar (int i) � Retorna 1 si i es impar, 0 en otro caso.
Una vez implementadas todas las funciones de biblioteca, escriba un programa que lea n�meros enteros e
imprima el cuadrado y el cubo de aquellos n�meros que son pares y el factorial de aquellos que son
impares. La lectura finaliza con el ingreso del 0.
*/

#include <stdio.h>
#include <stdlib.h>
#include "imath.h"

int main()
{
    int x, y;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &x, &y);
    printf("%d^%d = %d \n",x, y, potencia(x, y));
    printf("El numero %d al cuadrado es %d\n", x, cuadrado(x));
    printf("El numero %d al cubo es %d\n", x, cubo(x));
    printf("El valor absoluto de %d es %d\n", x, absoluto(x));
    printf("El factorial de %d es %d\n", x, factorial(x));
    printf("La sumatoria de 0 hasta %d es %d\n", x, sumatoria(x));
    printf("%d es multiplo de %d? %d\n", y, x, multiplo(x,y));
    printf("%d es multiplo de %d? %d\n", x, y, multiplo(x,y));
    printf("%d par? %d\n", x, par(x));
    printf("%d impar? %d\n", x, impar(x));

    return 0;
}
