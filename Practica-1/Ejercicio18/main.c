/*Escriba un programa que imprima 15 n�meros generados pseudo-aleatoriamente. �La secuencia
generada es siempre la misma? �Por qu�? �Qu� se puede hacer para generar secuencias pseudoaleatorias diferentes?
Nota: para generar n�meros en forma pseudo-aleatoria investigue las funciones rand() y
srand(), las cuales se encuentran definidas en la biblioteca <stdlib.h>.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    srand(time(NULL));
    printf("Numeros aleatorios: ");
    for (i = 0; i < 15; i++)
        printf("%d - ", rand());
    return 0;
}
