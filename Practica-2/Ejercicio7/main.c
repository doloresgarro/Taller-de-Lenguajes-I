/*Se dispone de un arreglo con informaci�n de las precipitaciones de todos los d�as de todos los meses
de los �ltimos 10 a�os. Se desea conocer para cada a�o el mes en que menos llovi� y tambi�n cual es
el a�o que tuvo menor precipitaci�n promedio.
Nota: por simplicidad asuma que todos los meses tienen 30 d�as*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define A 4
#define M 6
void cargarMatriz(int [][A]);
void imprimirMatriz(int [][A]);
void recorrerMatriz(int[][A]);
int main()
{
    srand(time(NULL));
    int matriz[A][M] = {{0},{0}}; // matriz con 12 filas y 10 columnas
    cargarMatriz(matriz);
    imprimirMatriz(matriz);
    recorrerMatriz(matriz);

    return 0;
}


/*Se desea conocer para cada a�o el mes en que menos llovi� y tambi�n cual es
el a�o que tuvo menor precipitaci�n promedio.*/


void recorrerMatriz(int matriz[][A]) {
    int i, j;
    int minM, minA;
    double min2 = 999999;
    double prom;
    int min;


    for (i = 0; i < A; i++) {
        min = 999999999;
        int sumaPrecipitaciones = 0;
        for (j = 0; j < M; j++) {
            sumaPrecipitaciones += matriz[i][j];
            if (matriz[i][j] < min){
                min = matriz[i][j] ;
                minM = j; // mes minimo
            }
        }
        printf("El mes que menos llovio en el anio %d fue: %d \n", i, minM); /*i -> a�o, j -> mes*/
        prom = (double) sumaPrecipitaciones / 12;
        if (prom < min2){
            min2 = prom;
            minA = i; // mes o promedio minimo
        }
    }


    printf("El anio que tuvo menor precipitaci�n promedio fue %d\n", minA);
}


void cargarMatriz (int m [][A]){
    int i, j;
    for (i = 0; i < M; i++) {
            for (j = 0; j < A; j++) {
                m[i][j] = rand() % 11;
            }
    }
}

void imprimirMatriz (int m [][A]){
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < A; j++) {
            printf(" %d -", m[i][j]);
        }
    printf("\n");
    }
}
