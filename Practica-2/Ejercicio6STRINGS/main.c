/*Escriba un programa que lea una palabra desde teclado y luego informe la cantidad de veces que
aparece cada letra de la palabra leída en ella misma.
Nota: asuma que la palabra está formada sólo por letras minúsculas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIMF 27

void cantidad(char *, int *, char);
void imprimirVector(char *, int);
int main()
{
    char palabra[DIMF];
    printf("Ingrese una cadena: \n");
    scanf("%s", palabra);
    printf("La palabra es: %s \n", palabra);

    char letras[DIMF] = "abcdefghijklmnopqrstuvwxyz";
    int contLetras[DIMF] =  {0};

    for (int i = 0; palabra[i] != '\0'; i++) {
        contLetras[palabra[i] - 'a']++;
    }

    printf(letras);
    printf("\n");
    for (int i = 0; i < DIMF; i ++){
        printf("%d", contLetras[i]);
    }

    return 0;
}



