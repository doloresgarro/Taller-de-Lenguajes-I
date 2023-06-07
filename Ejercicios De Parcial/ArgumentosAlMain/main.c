#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 100

int main(int argc, char * argv[])
{
    if (!argv[1])
        printf("Error, no se recibio ningun argumento\n");
    else {
        int i;
        char resultado[DIM];
        for (i = 1; i < argc; i++){
            strcat(resultado, argv[i]);
            strcat(resultado, " ");
        }
        printf("%s ", resultado);
    }

    return 0;
}
