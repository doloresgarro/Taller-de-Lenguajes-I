/*Analice las siguientes declaraciones de enumerativos e indique los valores que adopta cada miembro y
si las declaraciones son correctas (compilan) o no:*/

#include <stdio.h>
#include <stdlib.h>

typedef enum { IZQUIERDA, CENTRO_H, DERECHA } AlineacionHorizontal; // le pone 1 izq, 2 a centro_h, 3 a der
typedef enum { ARRIBA=1, CENTRO_V, ABAJO } AlineacionVertical; // arriba 1 , centro_V 2, abajo 3
typedef enum { DOS=2, CERO=0, UNO, MENOS_UNO=-1, OTRO } Numeros; // dos es 2, cero es 0, uno es 1, menos 1 es -1, otro es 0
typedef enum { LET_A = "A", LET_B, LET_Z = "Z" } Letras; // esta mal xq A es un string y el enum guarda enteros
typedef enum { LETRA_A = 'A', LETRA_B, LETRA_Z = 'Z' } Letras2; // trabaja con hexa --> en A pone 41H (es un num)

int main()
{
    printf("Hello world!\n");
    return 0;
}
