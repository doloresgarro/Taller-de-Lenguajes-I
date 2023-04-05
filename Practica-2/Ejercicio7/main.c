/*Se dispone de un arreglo con información de las precipitaciones de todos los días de todos los meses
de los últimos 10 años. Se desea conocer para cada año el mes en que menos llovió y también cual es
el año que tuvo menor precipitación promedio.
Nota: por simplicidad asuma que todos los meses tienen 30 días*/

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


/*Se desea conocer para cada año el mes en que menos llovió y también cual es
el año que tuvo menor precipitación promedio.*/


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
        printf("El mes que menos llovio en el anio %d fue: %d \n", i, minM); /*i -> año, j -> mes*/
        prom = (double) sumaPrecipitaciones / 12;
        if (prom < min2){
            min2 = prom;
            minA = i; // mes o promedio minimo
        }
    }


    printf("El anio que tuvo menor precipitación promedio fue %d\n", minA);
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
