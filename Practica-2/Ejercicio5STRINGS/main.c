/*La funci�n strcpy recibe dos punteros a cadenas de caracteres y copia la cadena apuntada por el
segundo (incluyendo el car�cter nulo) en la cadena apuntada por el primero. Adem�s, la funci�n
retorna el primer puntero. Implemente su propia versi�n de la funci�n strcpy.
Nota: asuma que la primera cadena de caracteres tiene espacio suficiente para almacenar a la
segunda*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// anda pero no se si esta bien
//me esta copiando el \0 de la cadena 2 en la 1??????????????????????

char ImplemStrcpy(char *, char *);
int main()
{
    char cadena1[] = "hola Valentina"; //declaro cadena
    char cadena2[] = "hola Dolores"; //declaro cadena
    printf("Imprime cadena 1 \n");
    printf(cadena1);
    printf("\n");
    printf("Imprime cadena 2 \n");
    printf(cadena2);
    printf("\n");

    ImplemStrcpy(cadena1, cadena2);

    printf("Imprime cadena 1 modificada\n");
    printf(cadena1);
    printf("\n");
    printf("Imprime cadena 2 \n");
    printf(cadena2);
    printf("\n");


    return 0;
}

char ImplemStrcpy(char *cadena1, char *cadena2) {
    int i;
    for (i = 0; cadena1[i] != '\0'; i++) //mientras no se termine la palabra
        cadena1[i] = cadena2[i];
    i = 0; //pongo i en 0 asi me devuelve el puntero al primer elem
    return (cadena1[i]);
}
