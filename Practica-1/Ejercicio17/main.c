#include <stdio.h>
#include <stdlib.h>

void minMax (int, float *, float *);
int main()
{   int num;
    float min, max;

    min = 999;
    max = -1;

    printf("Ingrese un numero: ");
    scanf ("%d" , &num);

    minMax(num, &min, &max);
    printf ("El maximo ingresado es %f y el minimo es %f", max, min);

    return 0;
}

void minMax (int num, float *min, float *max)
{
    float numF;

    while (num != 0) {
        printf ("Ingrese un numero flotante: ");
        scanf ("%f" , &numF);

        if (numF > *max)
            *max = numF;
        if (numF < *min)
            *min = numF;

        num--;
    }

}
