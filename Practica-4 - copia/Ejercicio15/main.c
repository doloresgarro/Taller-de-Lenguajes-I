/*Escriba un programa que, dado un n�mero entero n ingresado por
teclado, construya una pir�mide de pascal de n filas.

  Un tri�ngulo de pascal es una serie de filas apiladas que comienza con un elemento y
agrega un elemento m�s en cada fila. El primer y �ltimo elemento de
cada fila es un 1.
  Los dem�s elementos se calculan sumando los 2
n�meros superiores de la fila anterior. Por ejemplo, para obtener el
segundo elemento de la cuarta fila (4) deben sumarse el primer (1) y
segundo (3) elemento de la tercera fila de forma que 1+3 = 4.

Tenga en
cuenta las siguientes condiciones:
a) Utilizar una estructura de datos eficiente. Contemple la informaci�n necesaria para recorrer
la pir�mide y liberar la memoria de forma correcta.
b) Implemente una funci�n que dado un entero n retorne una pir�mide de pascal de n filas.
c) Implemente una funci�n para imprimir la pir�mide.
d) Implemente una funci�n para destruir la pir�mide.*/

#include <stdio.h>
#include <stdlib.h>


int ** reservarMemoria(int);
int ** cargarMatriz(int **, int);
void imprimir(int **, int);
void liberar (int **, int);
int main()
{
    int n; //filas
    printf("Ingrese filas: ");
    scanf("%d", &n);

    int **matriz = reservarMemoria(n);
   // matriz = cargarMatriz(matriz, n);

    printf("\n");
    imprimir(matriz, n);

    liberar(matriz, n);

    imprimir(matriz, n);
    return 0;
}

/* Un tri�ngulo de pascal es una serie de filas apiladas que comienza con un elemento y
agrega un elemento m�s en cada fila. El primer y �ltimo elemento de
cada fila es un 1. */
int ** reservarMemoria(int filas) {
    int **aux;
    int i;
    for (i = 0; i < filas; i++)
        aux = calloc(filas, sizeof(int *));

    //por fila, agrego un elem mas en cada fila
    for (i = 0; i < filas; i ++)
        aux [i] = (int *) calloc ((i + 1),(sizeof(int)));

     imprimir(aux,filas);
     printf("--------------------------------------------\n");

     for (int i = 0; i < filas; i++) {
        for (int j = 0; j < i - 1; j++) {
            if ((j == 0)||(j == i)){
                aux[i][j] = 1;
                printf("i = %d, j = %d, aux = %d\n", i, j, aux[i][j]);
                printf("\n\n\n\n");
            }
            else {
                aux[i][j] = aux[i-1][j] + aux [i-1][j-1];
                printf("\n");
                printf("i = %d, j = %d, aux = %d\n", i, j, aux[i][j]);
            }
        }
    }

    return (aux);
}


void imprimir(int ** MD, int FIL) {
    int f, c;
    for (f = 0; f < FIL; f++){
        for (c = 0; c < FIL; c++)
            printf("%d ", MD[f][c]);
        printf("\n");
    }
}


void liberar (int **MD, int FIL){
    int i;
    for (i = 0; i < FIL; i++)
        free(MD[i]);
    free(MD);
}
