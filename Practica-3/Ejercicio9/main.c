/*Resuelva:
a. Defina un enumerativo que permita representar los días de la semana (domingo a sábado).
b. Realice dos implementaciones diferentes de una función que imprima el texto asociado a un día
de la semana del enumerativo.
Nota: si bien una función para la impresión no es necesaria, favorece la reutilización,
encapsulamiento, validación del rango del dato y minimiza la posibilidad de errores futuros
*/

#include <stdio.h>
#include <stdlib.h>
#define CONST 7

typedef enum { DOMINGO, SABADO, LUNES, MARTES , MIERCOLES, JUEVES, VIERNES } dias;

void Imprimir(dias);
void Imprimir2(dias);
int main()
{
    printf("Imprimir 1: ");
    Imprimir(VIERNES);

    printf("Imprimir 2: ");
    Imprimir2(SABADO);

    return 0;
}

void Imprimir2(dias dia) {
    const char *vectorDia[] = {"DOMINGO", "SABADO", "LUNES", "MARTES" , "MIERCOLES", "JUEVES", "VIERNES"};

    if ((dia >= DOMINGO) && (dia <= VIERNES))
        printf("%s \n", vectorDia[dia]);
    else
        printf("Dia no valido \n");
}


void Imprimir(dias dia) {
        switch (dia) {
            case DOMINGO:
                 printf("DOMINGO \n");
                 break;
            case LUNES:
                 printf("LUNES\n");
                 break;
            case MARTES:
                 printf("MARTES\n");
                 break;
            case MIERCOLES:
                 printf("MIERCOLES\n");
                 break;
            case JUEVES:
                 printf("JUEVES\n");
                 break;
            case VIERNES:
                 printf("VIERNES\n");
                 break;
            case SABADO:
                 printf("SABADO\n");
                 break;
        }
}
