/*Rehaga el ejercicio 2 de la sección Arreglos Estáticos, pero en este caso escribiendo una única función
que retorne los 3 valores pedidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CONST 5

void cargarVector(float[], int);
void imprimirVector(float [], int);
void PromMaxMin(float [], float *, float *, float *, int);
int main()
{
    srand(time(NULL));

    //declaro vector. prom max y min los declaro para enviarlos por ref
    float vector [CONST];
    float prom, min, max;
    //int cant = CONST;

    cargarVector(vector, CONST);
    imprimirVector(vector, CONST);

    PromMaxMin(vector, &prom, &max, &min, CONST); // esta bien mandarle const como integer??
    printf("El promedio de los valores del vector es: %f \n", prom);

    printf("El minimo de los valores del vector es: %f \n", min);

    printf("El maximo de los valores del vector es: %f \n", max);


    printf(" \n");
    return 0;
}

void cargarVector (float vector [],int cant){ // le mando la dimF asi me sirve para todos los vectores
    int i;
    for (i = 0; i < cant; i++)
        vector[i] = rand() % 51;
}

void imprimirVector (float vector [], int cant){
    int i;
    for (i = 0; i < cant; i++)
            printf(" %f -", vector[i]);
    printf("\n");
}


void PromMaxMin (float v[], float *prom, float *max, float *min, int cant) {
    int i;
    float suma = 0;
    *max = -1;
    *min = 9999999;
    for (i = 0; i < cant; i++) {
        if (v[i] > *max)
            *max = v[i];
        if (v[i] < *min)
            *min = v[i];
        suma += v[i];
    }
    *prom = suma/cant;
}

