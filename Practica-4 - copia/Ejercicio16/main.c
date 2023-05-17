/*Escriba un programa que permita conocer todos los divisores de un número entero n leído desde
teclado. Los números deben almacenarse en un arreglo unidimensional. Como se desea optimizar el
espacio a ocupar, la memoria debe reservarse a medida que se la va necesitando. Una vez que se
almacenaron todos los divisores, imprímalos junto al número n. Por último, libere la memoria
reservada.
*/

#include <stdio.h>
#include <stdlib.h>

void reservarMemoria(int **, int , int);
void imprimir(int *, int);
int main()
{
    int n;
    printf("Ingrese numero para imprimir sus divisores: ");
    scanf("%d", &n);

    int dimL = 0;
    int *vector = NULL;


    for (int i = 1; i < n; i++) {
        if (n % i == 0){
            dimL++;
            reservarMemoria(&vector, dimL, i);
        }
    }

    imprimir(vector,dimL);

    free(vector);


    return 0;
}

void reservarMemoria(int **vector, int dimL,int num) {
    *vector = realloc(*vector, dimL * sizeof(int)); //reservo espacio para 1
    (*vector)[dimL - 1] = num;
}

void imprimir(int * v, int dimL) {
    int i;
    for (i = 0; i < dimL; i++)
        printf("%d ", v[i]);

    printf("\n");
}


