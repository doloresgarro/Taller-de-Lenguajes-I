/*. La función strlen recibe un puntero a una cadena de caracteres y retorna su longitud (sin incluir el
carácter nulo). Implemente su propia versión de la función strlen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ImplemStrlen(char *);
int main()
{
    char cadena[] = "hola Dolores"; //declaro cadena
    printf(cadena);
    printf("\n");

    int largo = ImplemStrlen(cadena);
    printf("El largo de la cadena es: %d", largo);


    return 0;
}

int ImplemStrlen(char *cadena) {
    int larg = 0;
    for (int i = 0; cadena[i] != '\0'; i++) //mientras no se termine la palabra
        larg ++;
    return larg;
}
