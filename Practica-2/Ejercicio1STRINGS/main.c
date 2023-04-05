/* Escriba un programa que lea palabras desde teclado hasta leer la palabra "ZZZ". Informe la cantidad
de palabras de longitud 5.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para que compare caracteres
#define CONST 20

int main()
{
    char FIN[] = "ZZZ";
    char palabra[CONST]= {0} ;

    printf("Ingrese una cadena: \n");
    scanf("%s", palabra);

    int cant5 = 0;
    while (strcmp(palabra, FIN)) { //compara dos palabras
        int cantCar = 0;
        for (int i = 0; palabra[i] != '\0'; i++)
            cantCar ++;
        if (cantCar == 5) {
            cant5 ++;
            printf("tiene 5 letras \n");
        }

        printf("Ingrese un cadena: \n");
        scanf("%s", palabra); // lee palabra
    }

    printf("La cantidad de palabras de longitud 5 es: %d", cant5);

    return 0;
}
