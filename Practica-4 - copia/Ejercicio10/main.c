/*10. Escriba un programa que lea un número entero n y luego reserve memoria en forma dinámica para
un arreglo de n elementos double.
Inicialice las posiciones del arreglo a partir de valores ingresados
por teclado y a continuación imprima el promedio de todos ellos.
a. Empleando notación de arreglos.
b. Empleando notación de punteros.
Por último, libere la memoria reservada.
Nota: modularice la reserva de memoria, la inicialización, el cálculo del promedio y la liberación de
memoria.*/

#include <stdio.h>
#include <stdlib.h>

double * reservarMemoria(int);
void Inicializar1(double *, int);
void Inicializar2(double * ,int);
void Imprimir1(double *, int);
void Imprimir2(double *, int);
int main()
{
    int N;
    printf("Ingrese dimL del vector: ");
    scanf("%d", &N);


    //Notacion de arreglos
    double *vector1 = reservarMemoria(N);
    Inicializar1(vector1, N); //inicializo con notacion de arreglos

    //Notacion punteros
    double *vector2 = reservarMemoria(N);
    Inicializar2(vector2, N); //inicializo con notacion de punteros

    printf("Imprime vector con notacion de vectores: \n");
    Imprimir1(vector1, N);

    printf("\n");

    printf("Imprime vector con notacion de punteros: \n");
    Imprimir2(vector2, N);

    return 0;
}


double * reservarMemoria(int dimF) {
    double *arreglo = (double *) malloc(dimF * sizeof(double));

    return arreglo;
}

//notacion de vectores
void Inicializar1(double *v, int N) {
    for (int i = 0; i < N; i++) {
        printf("Ingrese un numero: ");
        scanf("%lf", &(v[i]));
    }
}

//notacion de punteros
void Inicializar2(double *v, int N) {
    double num;
    for (int i = 0; i < N; i++) {
        printf("Ingrese un numero: ");
        scanf("%lf", &num);
        *(v+i) = num;
    }
}

void Imprimir1(double *v, int N) {
    for (int i = 0; i < N; i++){
        printf("%.2lf ", v[i]);
    }
}

void Imprimir2(double *v, int N) {
    for (int i = 0; i < N; i++){
        printf("%.2lf ", v[i]);
    }
}
