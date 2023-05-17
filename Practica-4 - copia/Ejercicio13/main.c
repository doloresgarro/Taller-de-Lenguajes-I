/*Rehaga el ejercicio anterior utilizando un arreglo unidimensional en lugar de uno bidimensional*/

#include <stdio.h>
#include <stdlib.h>

int * reservarMemoria(int);
int * cargarVector(int *, int);
void imprimir(int *, int);
void Multiplo(int *, int);
int main()
{
    int n;
    printf("Ingrese dimension logica: ");
    scanf("%d", &n);

    int *vector = reservarMemoria(n);
    vector = cargarVector(vector, n);

    imprimir(vector, n);

    Multiplo(vector, n);

    free(vector);

    imprimir(vector, n);
    return 0;
}

int * reservarMemoria(int n) {
    int *aux;
    aux = (int *) malloc(n * (sizeof(int *)));
    return (aux);
}

int * cargarVector(int *aux, int n) {
    int i, num;
    for (i = 0; i < n; i++) {
        printf("Ingrese un numero para la posicion %d: ", i);
        scanf("%d", &num);
        aux[i] = num;
    }
    return aux;
}

void imprimir(int * v, int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);

    printf("\n");
}

void Multiplo(int * v, int n) {
    int i;
    for (i = 0; i < n; i++){
        if (v[i] % 3 == 0)
            printf("El num en la posicion %d es multiplo de 3\n", i);
    }
}

