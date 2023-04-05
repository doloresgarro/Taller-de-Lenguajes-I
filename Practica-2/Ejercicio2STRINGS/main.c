/*Escriba un programa que lea palabras desde teclado hasta leer la palabra "XXX". Se requiere
informar la cantidad de palabras ingresadas que terminan con la letra ‘o’.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para que compare caracteres
#define CONST 20

int main()
{
    char FIN[] = "XXX";
    char palabra[CONST]= {0} ;

    printf("Ingrese una cadena: \n");
    scanf("%s", palabra);

    int cantO = 0;
    while (strcmp(palabra, FIN)) { //compara dos palabras
        char aux;
        for (int i = 0; palabra[i] != '\0'; i++) //mientras no se termine la palabra
            aux = palabra[i];

        printf("aux: %c \n", aux);
        if (aux == 'o')
            cantO ++;

        printf("Ingrese un caracter: \n");
        scanf("%s", palabra); // lee palabra
    }

    printf("La cantidad de palabras que terminan con la letra 'o' es 5 es: %d", cantO);

    return 0;
}
