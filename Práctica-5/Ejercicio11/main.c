/* Escriba un programa que abra el archivo binario del ejercicio anterior y que imprima en pantalla el
tamaño en bytes de dicho archivo. ¿Por qué cree Ud. que tiene ese tamaño?*/

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
