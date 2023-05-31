/*
a) ¿El código compila? Lea detenidamente el primer error que se detecta. ¿Cómo se explica? No se puede utilizar el nombre
del define en el método imprimir

b) Identifique las etapas de precompilación y compilación. ¿Qué es lo que está ocurriendo en cada
una?
precompilación --> el compilador reemplaza todas las instancias de las "ctes" definidas en el define
compilación --> reemplaza por el define donde aparece su identificador

c) ¿Cómo podría solucionarse este problema? cambiando el nombre del parámetro en el método imprimir.

*/

#include <stdio.h>
#include <stdlib.h>
#define size 25

void imprimir(int * v, int cant){
    int i;
    for (i = 0; i < cant; i++){
        printf("v[%d]= %d", i, v[i]);
    }
}

int main(){

    int v[size];
    imprimir(v, size);

    return 0;
}

