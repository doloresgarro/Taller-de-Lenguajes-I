/* Escriba un programa que abra el archivo binario del ejercicio anterior y que imprima en pantalla el
tama�o en bytes de dicho archivo. �Por qu� cree Ud. que tiene ese tama�o?*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("../Ejercicio9/jugadoresBinario.dat", "rb");
    if (f == NULL) {
        printf("No se pudo abrir el archivo");
        return 1;
    }

    fseek(f, 0, SEEK_END);
    printf("El tamanio del archivo es: %ld", ftell(f));

    fclose(f);


    return 0;
}
