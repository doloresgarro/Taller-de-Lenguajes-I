/*
Escriba un programa que calcule e imprima el promedio de 4 números que se pasan como argumentos a
la función main. En caso de no pasar la cantidad necesaria de parámetros, informar al usuario.
*/

#include <stdio.h>
#include <stdlib.h>


int main (int argc, char * argv[]) {
    int suma = 0;
    if (argc < 5) {
        printf("Se pasaron menos argumentos\n");
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        suma += atoi(argv[i]); // lo convierte de *char a int
    }

    float promedio = suma / (argc - 1);
    printf("El promedio de los numeros es: %.2f", promedio);

    return 0;
}
