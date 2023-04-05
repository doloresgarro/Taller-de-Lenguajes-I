/*Dadas dos matrices A y B de m x n, la suma (A+B) se calcula de la siguiente manera:
(A + B)i,j = Ai,j + Bi,j, donde 1 ≤ i ≤ m y 1 ≤ j ≤ n.

Escriba una función que reciba tres matrices A, B y C de mismas dimensiones, y calcule la suma de
A y B en C.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 2

void cargarMatriz(int [][N]);
void imprimirMatriz(int [][N]);
void Suma(int[][N], int[][N], int[][N]);
int main()
{
    int matrizA [M][N] = {{0},{0}}; //declaro matriz
    int matrizB [M][N] = {{0},{0}}; //declaro matriz
    int matrizC [M][N] = {{0},{0}};

    printf("Matriz A: \n");
    cargarMatriz(matrizA);
    imprimirMatriz (matrizA);
    printf("\n");

    printf("Matriz B: \n");
    cargarMatriz(matrizB);
    imprimirMatriz (matrizB);


    printf("Matriz C (resultado): \n");
    Suma(matrizA, matrizB, matrizC);
    imprimirMatriz (matrizC);
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

void Suma(int matrizA[][N] , int matrizB[][N] , int matrizC[][N] ){
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

}
