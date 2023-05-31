/*
Realice un programa que defina una macro AREA_CIRCULO(r) que permita calcular el área de un círculo
para un radio r. El cuerpo del programa debe generar aleatoriamente 10 valores diferentes que
representan radios e imprimir el área correspondiente.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANT 10

#define SQUAREOF(x) (x)*(x)
#define AREA_CIRCULO(r) 3.14 * (SQUAREOF(r))

int main()
{

    srand(time(NULL));
    int r;
    for (int i = 0; i < CANT; i++) {
        r = rand() % 21;
        printf("El area del circulo con radio %d es %.2f \n",r, AREA_CIRCULO(r));

    }

    return 0;
}
