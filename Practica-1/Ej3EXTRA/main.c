/*Implemente un programa que aproxime los primeros 6 dígitos del número PI (3.141592). Utiliza
la serie de Nilakantha que permite calcular de forma iterativa los números de PI. La forma de la
serie es:*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float pi = 3;
    int n = 2;

    for (int i = 0; i < 6; i++) {
      pi = pi + (( (pow(-1, i)) * 4) / (n * (n+1)*(n+2)));
      n += 2;
    }
    printf("El numero pi es (float): %f \n", pi);

    double pi2 = 3;
    int n2 = 2;

    for (int j = 0; j < 6; j++) {
      pi2 = pi2 + (( (pow(-1, j)) * 4) / (n2 * (n2+1)*(n2+2)));
      n2 += 2;
    }
    printf("El numero pi es (double): %lf", pi2);

    return 0;
}
