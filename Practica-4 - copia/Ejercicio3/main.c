/*Escriba un programa que lea un n�mero entero n desde teclado y luego reserve memoria en forma
din�mica para un arreglo de n enteros. Inicial�celo con valores aleatorios y a continuaci�n calcule e
imprima el m�ximo n�mero almacenado. Por �ltimo, libere la memoria reservada din�micamente.
Nota: Modularice la reserva de memoria, la inicializaci�n y el c�lculo del m�ximo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f (int **p, int);
void ImprimirContenido(int *, int);
int calcularMaximo(int *, int);
int main(){

    srand(time(NULL));

    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    int * ptr = NULL; //calloc porq le asigno 0 con null
    f(&ptr, num);

    ImprimirContenido(ptr, num);

    printf("El maximo numero almacenado es: %d ",calcularMaximo(ptr, num));

    free(ptr);

    return 0;
}

void f (int ** ptr, int N) {
    *ptr = (int *) malloc(N*sizeof(int));

    for (int i = 0; i < N; i ++)
        (*ptr)[i] = rand() % 51;
}

void ImprimirContenido(int *ptr, int N){
    for (int i = 0; i < N; i ++)
        printf("%d\n", ptr[i]);
}

int calcularMaximo(int *ptr, int N) {
    int max = -1;
    for (int i = 0; i < N; i ++){
        if (max < ptr[i])
            max = ptr[i];
    }
    return max;
}

