#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, dig, suma;
    printf("Ingrese un numero: ");
    scanf("%d", &num); //280

    while (num >= 10) {
        suma = 0;
        while (num != 0) {
            dig = num % 10;
            suma = suma + dig;
            num /= 10;
        }
        num = suma;
        printf("La suma es: %d \n", suma);
    }
    printf("El numero convertido es: %d", suma);
    return 0;
}
