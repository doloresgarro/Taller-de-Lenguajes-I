/*
Escriba una función que reciba un puntero a una cadena de caracteres y dos caracteres individuales,
y que reemplace en la cadena todas las ocurrencias del primer carácter con el segundo. Además, la
función debe retornar la cadena. ¿Retornar la cadena tiene alguna utilidad o no tiene sentido?
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para que compare caracteres
#define CONST 20


void Cambiar(char *, char *, char *);
int main()
{

    char cadena[] = "holaaa mi nombre es valentina"; //declaro cadena
    printf(cadena);
    printf("\n");
    char car1 = 'a';
    char car2 = 'b';
   // char *Ptr1 = &car1;
   // char *Ptr2 = &car2;


    Cambiar(cadena, &car1 , &car2); //le estoy mandando puntero al primer elemento de la cadena
    printf("sale");
    printf("\n");
    printf(cadena);

    return 0;
}

void Cambiar(char *cadena, char * a, char * b) {
    printf("entra al cambiar");
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == *a)
            cadena[i] = *b;
    }
}
