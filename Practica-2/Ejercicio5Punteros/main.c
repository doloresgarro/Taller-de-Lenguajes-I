/*Escriba una función que reciba un arreglo unidimensional e invierta el orden de sus valores. Por
ejemplo: */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CONST 4


void cargarVector(int[], int);
void imprimirVector(int [], int);
void Swap(int [], int);

//---------MAIN---------
int main()
{
    srand(time(NULL));

    int vector [CONST];

    cargarVector(vector, CONST);
    imprimirVector(vector, CONST);


    Swap(vector, CONST);
    imprimirVector(vector, CONST);


    printf(" \n");
    return 0;
}

//---------MÉTODOS---------

void cargarVector (int vector [], int cant){ // le mando la dimF asi me sirve para todos los vectores
    int i;
    for (i = 0; i < cant; i++)
        vector[i] = rand() % 51;
}

void imprimirVector(int vector [], int cant){
    int i;
    for (i = 0; i < cant; i++)
            printf(" %d -", vector[i]);
    printf("\n");
}

void swapChiquito(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void Swap(int vector[], int cant) {
    for (int i = 0; i < cant / 2; i ++)
        swapChiquito(&vector[i], &vector[cant - i -1]); // i = 1, vector [cant - 1] =
}

