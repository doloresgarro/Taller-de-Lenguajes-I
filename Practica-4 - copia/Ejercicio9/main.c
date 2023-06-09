#include <stdio.h>
#include <stdlib.h>
#define N 50
int main() {

    //codigo 1
    int arreglo1[N]; //declara arreglo estatico

    /*
    b) en compilacion
    c) n * 4
    d) No se puede cambiar el tamaño
    e) No se puede liberar la memoria
    f) El nombre del arreglo no puede apuntar a otra dirección
    */

    //codigo 2
    int n;
    scanf("%d",&n);
    /* el usuario ingresa 50 */
    int arreglo3[n]; //declara arreglo de long variable
    /*
    b) en ejecución
    c) N * 4
    d) No se puede cambiar el tamaño
    e) No se puede liberar la memoria
    f) El nombre del arreglo no puede apuntar a otra dirección

    */

    //codigo 3
    int * arreglo2 = (int *) malloc (N*sizeof(int)); //declara arreglo dinamico
    /*
    b) en ejecución
    c) N * 4
    d) Se puede cambiar el tamaño con el realloc
    e) Se puede liberar la memoria
    f) El nombre del arreglo puede apuntar a otra dirección

    */



    return 0;
}
