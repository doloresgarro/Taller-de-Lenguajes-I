/*Escriba un programa que genere 50 números enteros en forma pseudoaleatoria y que los almacene en un arreglo unidimensional.
 Luego de realizada la carga, informar la cantidad de números pares que se encuentran en posiciones impares del arreglo y también
 la cantidad de números impares que se encuentran en posiciones pares. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50


int main()
{
    int v [N];
    int i;
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        v[i] = rand();
    }
    for (i = 0; i < N; i++) {
        printf(" %d \n", v[i]);
    }

    int cantPares = 0;
    int cantImpares = 0;
    for (i = 0; i < N; i++) {
        if (i % 2) { //entra cuando sea impar (= 0)
            if (! (v[i] % 2))
                cantPares ++; }
        else {
            if (v[i] % 2) //entra cuando es impar (da 0, es falso)
                cantImpares ++;
        }
    }
    printf("La cantidad de pares en posiciones impares es %d \n", cantPares);
    printf("La cantidad de impares en posiciones pares es %d ", cantImpares);

    return 0;
}

