/*

Realice un programa que genere un vector de 1000 enteros al azar y utilice una función para localizar un
elemento.
Se pide:
a) Implementar la función de búsqueda que, dado un entero, retorne la posición donde se encuentra.
En caso de no existir el número retorne -1.

b) Modificar a) para agregar información de depuración que permita imprimir en consola la cantidad
de veces que se debió acceder al arreglo para encontrar (o no) el elemento en cada llamado a la
función. Utilice las directivas del procesador para activar/desactivar la depuración e imprimir/no
imprimir la información en la consola.

c) Verifique el tamaño del programa compilando con la depuración y sin la depuración. Explique
porque difieren

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMF 5
#define DEBUG


void cargarVector(int [], int);
void imprimirVector(int [], int);
int buscarPosicion(int [], int, int);
int main()
{
    srand(time(NULL));

    int vector[DIMF];
    cargarVector(vector, DIMF);
    imprimirVector(vector, DIMF);

    int num;
    printf("Ingrese un numero: \n");
    scanf("%d", &num);
    printf("El numero %d se encontro en la pos %d \n", num, buscarPosicion(vector, DIMF, num));


    return 0;
}


void cargarVector(int v[], int cant) {
    for (int i = 0; i < cant; i++)
        v[i] = rand() % 21;
}

void imprimirVector(int v[], int cant) {
    printf("Imprime vector: \n");
    for (int i = 0; i < cant; i++)
        printf("%d ", v[i]);
}

/*
a) Implementar la función de búsqueda que, dado un entero, retorne la posición donde se encuentra.
En caso de no existir el número retorne -1.
*/

int buscarPosicion(int v[], int cant, int num) {
    int i;
    for (i = 0; i < cant ; i++){
        if (v[i] == num) {
            break;
        }
    }

    #ifdef DEBUG
        printf("Se accedio %d veces \n", i == cant ? cant : i+1);
    #endif // DEBUG

    return (i == cant ? -1 : i);
}




