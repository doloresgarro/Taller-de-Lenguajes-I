/*
Escriba un programa que lea desde teclado un valor entero n y reserve memoria para una matriz
triangular inferior de orden n de enteros. Como se desea ahorrar espacio de almacenamiento, no se
deben almacenar los elementos cuyo valor es 0, es decir, sólo se reservará memoria para los valores
del triángulo inferior de la matriz. Luego, inicialice la estructura con valores aleatorios entre 0 y 20
e imprímala en pantalla. Por último, libere la memoria reservada.
Nota: modularice la reserva de memoria, la inicialización, la impresión y la liberación de memori*/

//no se como se hace

#include <stdio.h>
#include <stdlib.h>

int ** reservarMemoria(int);
int ** cargarMatriz(int **, int, int);
void imprimir(int **, int);
void liberar (int **, int, int);
int main()
{

    int orden, n; //filas y columnas
    printf("Ingrese orden de la matriz: ");
    scanf("%d", &orden); //2x2
    printf("Ingrese : ");
    scanf("%d", &n); //2x2

    int **matriz;
    matriz = reservarMemoria(orden);
    matriz = cargarMatriz(matriz, orden, n);

    imprimir(matriz, n);


    free(matriz);

    imprimir(matriz, n);
    return 0;
}

int ** reservarMemoria(int n) {
    int **aux = (int **) calloc((((n*n)+n)/ 2), (sizeof(int)));
    return aux;
}

int * cargarMatriz(int **aux, int orden, int n) {

    srand(time(NULL));
    int i, num;
    for (i = 0; i < orden; i++) {
        printf("Ingrese un numero para columna %d: ", i);
        scanf("%d", &num);
        aux[i] = rand() % 21;
    }

    return aux;
}

void imprimir(int ** MD, int FIL, int COL) {
    int f, c;
    for (f = 0; f < FIL; f++){
        for (c = 0; c < COL; c++)
            printf("%2d ", MD[f][c]);
        printf("\n");
    }
}

void liberar (int **MD, int FIL, int COL){
    int f;
    for (f = 0; f < FIL; f++)
        free(MD[f]);
    free(MD);
}

