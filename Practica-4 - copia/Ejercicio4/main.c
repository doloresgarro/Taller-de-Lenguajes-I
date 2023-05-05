/*Escriba un programa que lea un número entero n desde teclado y luego reserve memoria en forma
dinámica para un arreglo de n float. Inicialícelo con valores ingresados por teclado y a continuación
calcule e imprima el promedio de todos ellos. Por último, libere la memoria reservada dinámicamente.
Nota: Modularice la reserva de memoria, la inicialización y el cálculo del promedio*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f (float **p, int);
void ImprimirContenido(float *, int);
float calcularPromedio(float *, int);
int main(){

    srand(time(NULL));

    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    float * ptr = NULL; //calloc porq le asigno 0 con null
    f(&ptr, num);

    ImprimirContenido(ptr, num);

    printf("El promedio es: %.3f ",calcularPromedio(ptr, num));

    free(ptr);

    return 0;
}

void f (float ** ptr, int N) {
    *ptr = (float *) malloc(N*sizeof(float));

    for (int i = 0; i < N; i ++)
        (*ptr)[i] = rand() % 51;
}

void ImprimirContenido(float *ptr, int N){
    for (int i = 0; i < N; i ++)
        printf("%.3f\n", ptr[i]);
}

float calcularPromedio(float *ptr, int N) {
    float suma = 0;
    for (int i = 0; i < N; i ++){
        suma += ptr[i];
    }
    float promedio = (suma / N);
    return promedio;
}

