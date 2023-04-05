/*Escriba un programa que, a partir de un número flotante leído desde teclado, el cual representa
una distancia en kilómetros, imprima su equivalente en millas.
Nota: 1,61 Km ≈ 1 milla
*/

#include <stdio.h>

int main()
{
    float num;
    printf("Ingrese distancia en km: ");
    scanf("%f", &num);
    printf("num = %f \n", num);

    int millas;
    millas = (num / 1.61);
    printf("El equivalente en millas es = %d \n", millas);

    return 0;
}
