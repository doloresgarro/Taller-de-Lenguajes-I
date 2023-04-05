/*
Escriba una función que reciba un puntero a una secuencia de caracteres y que retorne 1 en caso de
que la palabra contenida sea palíndroma o 0 en caso contrario.
a. Utilizando índices numéricos.
b. Utilizando punteros.
Nota: una palabra palíndroma es aquella que se lee igual hacia izquierda a derecha que de derecha a
izquierda. Por ejemplo: arenera, radar, reconocer, rotor, salas, seres, sometemos
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIMF 50

int palindromo(char *);
int main()
{
    char cadena[] = "rottor" ;

    printf("La palabra es: %s \n", cadena);
    printf("La palabra es palindromo? (true: 1, false: 0): %d",palindromo(cadena));

    return 0;
}

//booleano 0 --> falso
int palindromo(char *cadena) {
    int i, boolean = 1; //inicializo en verdadero
    int largo;
    largo = strlen(cadena);
    printf("el largo de la cadena es: %d \n", largo);

    for (i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == cadena [largo - i - 1]) {
            boolean = 1;
        }
        else {
            boolean = 0;
            break;
        }
    }
    return boolean;
}
