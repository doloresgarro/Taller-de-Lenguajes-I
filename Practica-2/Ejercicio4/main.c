/*Sea A una matriz con m filas y n columnas. La matriz transpuesta, denotada con At está dada por:
𝐴𝑖𝑗 𝑡 = 𝐴𝑗𝑖
En donde el elemento aji de la matriz original A se convertirá en el elemento aij de la matriz
transpuesta At
. Por ejemplo:

Escriba una función que reciba una matriz cuadrada A e imprima en pantalla su matriz transpuesta.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 3

void cargarMatriz(int [][N]);
void imprimirMatriz(int [][N]);
void Transpuesta(int[][N]);
int main()
{
    srand(time(NULL));

    int matriz [M][N] = {{0},{0}}; //declaro matriz
    cargarMatriz(matriz);
    imprimirMatriz (matriz);



    printf("Transpuesta: \n");
    Transpuesta(matriz);
    //imprimirMatriz (matriz);

    return 0;
}

void cargarMatriz (int m [][N]){
    int i, j;
    for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                m[i][j] = rand() % 51;
            }
    }

}

void imprimirMatriz (int m [][N]){
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf(" %d -", m[i][j]);
        }
    printf("\n");
    }
}

void Transpuesta(int matriz[][N]){
    int i, j;

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++)
            printf("%d - ", matriz[j][i]);
        printf("\n");
    }

    printf("\n");
}



