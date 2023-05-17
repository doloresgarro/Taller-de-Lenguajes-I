/*2) Escriba un programa que procese un archivo de texto e informe la cantidad de caracteres
minúsculas, mayúsculas y dígitos que posee*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arch;
    //leo el archivo
    arch = fopen("../textos/Ejercicio2.txt", "r");

    int minus = 0, mayus = 0, digitos = 0;;
    char c;
    c = fgetc(arch);
    while (!feof(arch)){
        if ((c >= 'a') && (c <= 'z'))
            minus++;
        else {
            if ((c >= 'A') && (c <= 'Z'))
                mayus++;
            else
                if ((c >= '0') && (c <= '9'))
                    digitos++;
        }
        c = fgetc(arch);
    }

    printf("Minusculas: %d, mayusculas %d, digitos %d ", minus, mayus, digitos);

    fclose(arch);


    return 0;
}
