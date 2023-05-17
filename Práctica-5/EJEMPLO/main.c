#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * arch;

    //arch = fopen("texto.txt", "r"); // tira error porq no existe
    arch = fopen("texto.txt", "w");

    if (arch == NULL) {
        fprintf(stdout,"ERROR!!!");
        return 1;
    }

    //escribo en el archivo
    /*
    fprintf(arch, "Primer ejemplo\n");
    fprintf(arch, "segunda linea");
    */
    int cant;
    cant = fprintf(arch, "Primer ejemplo\n");
    printf("%d \n", cant); //imprime cant de caracteres que tiene cant
    fprintf(arch, "segunda linea");


    if (!fclose(arch)) // si no es nulo
        printf("Todo okkkkkkkkkkkkk");


    return 0;
}
