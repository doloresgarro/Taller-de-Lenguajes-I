/*12. Escriba un programa que trabaje con una matriz de enteros utilizando las declaraciones
anteriores sin importar el orden de acceso a cada dimensión (fila y columna o columna y fila).
Cargue a m con valores leídos desde teclado y luego imprima sus valores en pantalla para
verificar que se cargó correctamente. Por último, libere la memoria reservada.
*/

#include <stdio.h>
#include <stdlib.h>
int * reservarMemoria(int, int);
int * cargarMatriz(int *, int, int);
void imprimir(int *, int, int);
int main()
{

    int n = 2, m = 3;
    //reservar memoria
    int * matriz = reservarMemoria(n, m);
    matriz = cargarMatriz(matriz, n, m);
    imprimir(matriz, n, m);

    free(matriz);

    return 0;
}


int * reservarMemoria(int filas, int colum) {
    int *aux;
    aux = (int *) malloc(filas * (sizeof(int *)));
    /*for (int i = 0; i < filas; i ++)
        aux [i] = (int *) malloc (colum * (sizeof(int)));
    */
    return (aux);
}


int * cargarMatriz(int *aux, int filas, int colum) {
    int i, j, num;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < colum; j++) {
            printf("Ingrese un numero para fila %d columna %d: ", i, j);
            scanf("%d", &num);
            aux[i*colum+j] = num; // filaAct * numColumnas + columAct
        }
    }
    return aux;
}

/*
1 2 3 4
2 2 3 4
3 6 7 8
*/

void imprimir(int * MD, int FIL, int COL) {
    int f, c;
    for (f = 0; f < FIL; f++){
        for (c = 0; c < COL; c++)
            printf("%2d ", MD[f*COL + c]);
        printf("\n");
    }
}
