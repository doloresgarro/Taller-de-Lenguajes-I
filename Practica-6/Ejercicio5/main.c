/*
a) �El c�digo compila? Lea detenidamente el primer error que se detecta. �C�mo se explica? No se puede utilizar el nombre
del define en el m�todo imprimir

b) Identifique las etapas de precompilaci�n y compilaci�n. �Qu� es lo que est� ocurriendo en cada
una?
precompilaci�n --> el compilador reemplaza todas las instancias de las "ctes" definidas en el define
compilaci�n --> reemplaza por el define donde aparece su identificador

c) �C�mo podr�a solucionarse este problema? cambiando el nombre del par�metro en el m�todo imprimir.

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

