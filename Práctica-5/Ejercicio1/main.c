/*¿El código funciona correctamente? Si no es así, corríjalo para que lo haga.
Nota: Preste atención al formato del archivo. La función fgets() procesa hasta encontrar un salto de
línea (el cual es retenido). Si luego del último renglón no hubiese un salto de línea, el archivo no
tendría un formato válido para procesar.*/

#include <stdio.h>
#include <stdlib.h>
#define LONG 300
int main(){
    FILE *f;
    char linea[LONG];

    // Abrir el archivo
    // Imprime "Error al abrir archivo fuente" porque estamos leyendo un archivo que no existe
    // El programa es para leer, por lo tanto creo un txt y ahi si voy a poder leerlo
    f = fopen("prueba.txt", "r");
    if (f == NULL){
        printf ("\nError al abrir archivo fuente\n");
        return 1;
    }
    char *ptr;
    // leer una linea del archivo
    fgets(linea,LONG,f);
    while (!feof(f)){

        // imprimir la linea en la pantalla
        //puts(linea); --> imprime un salto de linea
        printf("%s", linea);
        // leer una linea del archivo
        ptr = fgets(linea,LONG,f); //lee el ult caracter pero no imprime ultima linea
    }
    // para que no me imprima 2 veces la ult linea, el ptr tiene un puntero a un char
    if (ptr != NULL)
        printf("%s", linea);

    fclose(f);

    return 0;
}
