/*Escriba 3 funciones que reciban un arreglo unidimensional de float y que:
a. retorne el promedio de sus valores.
b. retorne el mínimo de sus valores.
c. retorne la posición del máximo de sus valores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CONST 5

/*float Promedio(float []);
float Minimo(float []);
float Maximo (float []);
void PromMaxMin();*/
void cargarVector(float[], int);
void imprimirVector(float[], int);
int main()
{
    srand(time(NULL));

    //declaro vector. prom max y min los declaro para enviarlos por ref
    float vector [5];

    cargarVector(vector, CONST);
    imprimirVector(vector, CONST);
    //float prom, min, max;

    /*printf("El promedio de los valores del vector es: %f \n", Promedio(v) );

    printf("El minimo de los valores del vector es: %f \n", Minimo(v) );

    printf("El maximo de los valores del vector es: %f \n", Maximo(v) );
*/

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

float Promedio(float v[]) {
    float suma = 0;
    for (int i = 0; i < CONST; i++) {
        suma += v[i]; }
    return (suma/CONST);
}

float Minimo(float v[]){
    float min = 99999999999999;
    for (int i = 0; i < CONST; i++) {
        if (v[i] < min)
            min = v[i];
    }
    return min;
}

float Maximo(float v[]){
    float max = -1;
    for (int i = 0; i < CONST; i++) {
        if (v[i] > max)
            max = v[i];
    }
    return max;
}
