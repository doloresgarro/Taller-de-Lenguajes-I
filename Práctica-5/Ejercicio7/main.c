/*Escriba un programa que copie el contenido de un archivo de texto en otro nuevo.
a) Utilizando las funciones fgetc y fputc.
b) Utilizando las funciones fgets y fputs.
c) Utilizando las funciones fread y fwrite
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f, *copia; //f--> archivo del que voy a copiar el contenido
    f = fopen("Ejercicio7.txt", "r");
    copia = fopen("Copia.txt", "w");

    if (f == NULL) {
        printf("\nError al abrir el archivo\n");
        return 1;
    }

    /*for (int i = 0; i < dimL; i++)
        fprintf(fcreado, "%s \t", a[i]);
    fprintf(fcreado, "\n");
    for (int i = 0; i < dimL; i ++)
        fprintf(fcreado,"% 2.2f \t\t", v[i].promedio);
    fprintf(fcreado, "\n");
    for (int i = 0; i < dimL; i ++)
        fprintf(fcreado,"% 2.2f \t\t", v[i].max);
    fprintf(fcreado,"\n");
    for (int i = 0; i < dimL; i ++)
        fprintf(fcreado,"% 2.2f \t\t", v[i].min);
    fprintf(fcreado,"\n");
*/

    char c;
    c = fgetc(f);
    while(!feof(f)){
       fprintf(copia, "%c", c);
       c = fgetc(f);
    }



    return 0;
}
