#include <stdio.h>
#include <stdlib.h>
#define N 50
int main() {

    //codigo 1
    int arreglo1[N]; //declara arreglo estatico

    /*
    b) en compilacion
    c) n * 4
    d) No se puede cambiar el tama�o
    e) No se puede liberar la memoria
    f) El nombre del arreglo no puede apuntar a otra direcci�n
    */

    //codigo 2
    int n;
    scanf("%d",&n);
    /* el usuario ingresa 50 */
    int arreglo3[n]; //declara arreglo de long variable
    /*
    b) en ejecuci�n
    c) N * 4
    d) No se puede cambiar el tama�o
    e) No se puede liberar la memoria
    f) El nombre del arreglo no puede apuntar a otra direcci�n

    */

    //codigo 3
    int * arreglo2 = (int *) malloc (N*sizeof(int)); //declara arreglo dinamico
    /*
    b) en ejecuci�n
    c) N * 4
    d) Se puede cambiar el tama�o con el realloc
    e) Se puede liberar la memoria
    f) El nombre del arreglo puede apuntar a otra direcci�n

    */



    return 0;
}
