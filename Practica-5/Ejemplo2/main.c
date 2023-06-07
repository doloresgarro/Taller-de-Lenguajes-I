#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * arch;
    char c;
    arch = fopen("main.c", "r");

    if (arch == NULL) {
        fprintf(stdout,"ERROR!!!");
        return 1;
    }


   // me imprime este programa
    c = fgetc(arch);
    while(!feof(arch)) {
        printf("%c", c);
        c = fgetc(arch); //el ult falla y se pasa por eso tira error cuando termina de ejecutar
    }

    /*//para leer por linea
    char linea[250];
    fscanf(arch, "%s", linea);
     while(!feof(arch)) {
        printf("%s", linea);
        fscanf(arch, "%s", linea);
    }
    */


    /*  //pasarse del archivo
    c = fgetc(arch);
    for (int i = 0; i < 20000; i++) {
        printf("%c", c);
        c = fgetc(arch); //el ult falla y se pasa por eso tira error cuando termina de ejecutar
    }
    */

    fclose(arch);

    return 0;
}
