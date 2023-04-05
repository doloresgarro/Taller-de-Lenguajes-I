/*Sea A una matriz con m filas y n columnas y c un número. La multiplicación de una matriz A por un escalar c está
 dada por multiplicar cada entrada de A por c: 𝐴′ 𝑖𝑗 = 𝑐 . 𝐴𝑖𝑗
 Por ejemplo: 2 • [ 1 8 −3 4 −2 5 ] = [ 2 • 1 2 • 8 2 • −3 2 • 4 2 • −2 2 • 5 ] = [ 2 16 −6 8 −4 10]
 Escriba una función que reciba una matriz A y un número c, y que retorne en A la multiplicación escalar cA.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 3

void MultEscalar(int, int[][N]);

int main()
{
    srand(time(NULL));
    int matriz[3][N] = {{0},{0}};
    int c;
    printf("Ingrese un numero: ");
    scanf("%d",&c);

    int i, j;
    for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {

                matriz[i][j] = rand() % 51;
                printf(" %d -", matriz[i][j]);
            }
            printf("\n");
    }
    printf("La multiplicacion c*A: ");
    MultEscalar(c, matriz);
    for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                printf(" %d -", matriz[i][j]);
            }
            printf("\n");
    }

    return 0;
}
// 2 • [ 1 8 −3 4 −2 5 ] = [ 2 • 1 2 • 8 2 • −3 2 • 4 2 • −2 2 • 5 ] = [ 2 16 −6 8 −4 10]
void MultEscalar(int c, int m[][N]) {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            m[i][j] *= c;
        }
    }
}

