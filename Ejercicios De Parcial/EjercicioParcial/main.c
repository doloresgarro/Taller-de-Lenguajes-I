#include <stdio.h>
#include <stdlib.h>
#define CANT 50

struct destino {
 int codProv;
 int codLoc;
 char nomLoc[30];
 int nHab;
};

int main()
{
    FILE *f, *fbinario;
    f = fopen("Habitantes.txt", "r");
    fbinario = fopen("Habitantes.dat", "wb");

    if (f == NULL){
        printf("Error al abrir el archivo \n");
        return 0;
    }

    if (fbinario == NULL){
        printf("Error al abrir el archivo \n");
        return 0;
    }

    char *ptr;
    char linea[CANT];
    while (!feof(f)){
        ptr = fgets(linea, CANT, f);
        fwrite(linea, sizeof(struct destino), 1, fbinario);
    }

    if (ptr != NULL){
        fgets(linea, CANT, f);
        fwrite(linea, sizeof(struct destino), 1, fbinario);
    }






    return 0;
}
