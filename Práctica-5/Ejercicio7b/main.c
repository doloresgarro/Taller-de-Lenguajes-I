//b) Utilizando las funciones fgets y fputs.
#include <stdio.h>
#include <stdlib.h>
#define LONG 200

int main()
{
    FILE *f, *copia; //f--> archivo del que voy a copiar el contenido
    f = fopen("Ejercicio7b.txt", "r");
    copia = fopen("Copia.txt", "w");

    if (f == NULL) {
        printf("\nError al abrir el archivo\n");
        return 1;
    }

    char *ptr;
    char linea[20];
    ptr = fgets(linea, LONG, f);
    while(!feof(f)){
       fputs(linea, copia);
       ptr = fgets(linea, LONG, f);
    }
    if (ptr != NULL){
        fprintf(copia, "%s", linea);
    }


    return 0;
}
