/*Defina una macro que reciba tres valores o
expresiones numéricas y retorne el menor
valor.
 Utilizando una única instrucción #define
 Definiendo primero una macro que halle el
mínimo entre dos valores o expresiones
numéricas y luego una segunda macro que
la utilice para hallar el mínimo de tres.
*/

#include <stdio.h>
#include <stdlib.h>

//MACRO
#define MIN2(a,b) (a < b ? a : b)
#define MIN3(a,b,c) MIN2(MIN2(34, 56), 24))


int main()
{
    // no es lo que pide pero podria haber hecho
    //printf("%d\n", MIN2(MIN2(34, 56), 24));
    printf("%d\n",MIN3(34, 56, 24));



    return 0;
}
