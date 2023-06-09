/*11. Escriba un programa que lea desde teclado dos valores enteros n y m, y luego reserve memoria en
forma dinámica para una matriz de enteros de n filas por m columnas. Inicialice la matriz creada con
valores ingresados por teclado. Una vez inicializada, imprima las posiciones de todos aquellos valores
múltiplos de 3. Por último, libere la memoria reservada.
Nota: modularice la reserva de memoria, la inicialización, la impresión de las posiciones con valores
múltiplo de 3 y la liberación de memoria.*/

#include <stdio.h>
#include <stdlib.h>

int ** reservarMemoria(int, int);
int ** cargarMatriz(int **, int, int);
void imprimir(int **, int, int);
void Multiplo(int **, int, int);
void liberar (int **, int, int);
int main()
{
    int n, m; //filas y columnas
    printf("Ingrese filas: ");
    scanf("%d", &n);
    printf("Ingrese columnas: ");
    scanf("%d", &m);

    int **matriz = reservarMemoria(n, m);
    matriz = cargarMatriz(matriz, n, m);

    imprimir(matriz, n, m);

    Multiplo(matriz, n, m);

    liberar(matriz, n, m);

    imprimir(matriz, n, m);
    return 0;
}

int ** reservarMemoria(int filas, int colum) {
    int **aux;
    int i;
    aux = (int **) malloc(filas * (sizeof(int *)));
    for (i = 0; i < filas; i ++)
        aux [i] = (int *) malloc (colum * (sizeof(int)));

    return (aux);
}

int ** cargarMatriz(int **aux, int filas, int colum) {
    int i, j, num;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < colum; j++) {
            printf("Ingrese un numero para columna %d: ", i);
            scanf("%d", &num);
            aux[i][j] = num;
            //MD[f][c] = COL * f + c
        }
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

void Multiplo(int ** MD, int FIL, int COL) {
    int f, c;
    for (f = 0; f < FIL; f++){
        for (c = 0; c < COL; c++) {
            if (MD[f][c] % 3 == 0)
                printf("El num de la fila %d columa %d es multiplo de 3", f, c);
        }
        printf("\n");
    }
}

void liberar (int **MD, int FIL, int COL){
    int f;
    for (f = 0; f < FIL; f++)
        free(MD[f]);
    free(MD);
}

