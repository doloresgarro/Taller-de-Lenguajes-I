/*
8)Escriba un programa que lea desde teclado números enteros de una cifra (del 0 al 9) y que cree dos
archivos, los cuales almacenen los números leídos. El primer archivo debe llamarse “numeros.txt” y
contener en formato texto todos los números leídos en forma consecutiva. El segundo archivo debe
llamarse “numeros.dat” y contener todos los números leídos en formato binario.

▪ Una vez ejecutado el programa, utilice un editor de texto (como por ejemplo: el Bloc de notas
en MS Windows, o Gedit en GNU/Linux) para abrir el archivo de texto y corroborar que la
información almacenada sea la correcta. Usando el mismo editor, intente abrir el archivo
binario. ¿Es posible visualizar los números? ¿Por qué cree que no es posible?
▪ Compare los tamaños que ocupan cada archivo. ¿Cuál es más grande? ¿En qué ocasiones
cree usted que sería mejor utilizar cada tipo de archivos?

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMF 5

int main()
{
    srand(time(NULL));
    FILE *f, *fbinario;

    f = fopen("numeros.txt", "w"); //para que lo cree y escriba los numeros enteros

    if (f == NULL){
        printf ("\nError al abrir archivo fuente\n");
        return 1;
    }

    fbinario = fopen("numeros.dat", "w");  // para que lo cree y escriba los numeros binarios

    if (fbinario == NULL){
        printf ("\nError al abrir archivo fuente\n");
        return 1;
    }

    // fprintf(fcreado, "%s \t", a[i]);
    int v[DIMF], grabados = 0;
    //printf("Ingrese %d digitos: \n", DIMF);
    for (int i = 0; i < DIMF; i++){
        v[i] = rand() % 21;
        fprintf(f, "%d ", v[i]); //al archivo de enteros le escribo el elemento del vector
    }
    grabados = fwrite(v, sizeof(int), DIMF, fbinario);


    printf("Se escribieron correctamente %d numeros enteros \n", grabados);


    printf("Elementos que debe contener el archivo: \n");
    for (int i = 0; i < DIMF; i++)
        printf("%d ", v[i]);

    fclose(f);
    fclose(fbinario);



    return 0;
}


