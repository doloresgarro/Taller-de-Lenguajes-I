/*Se desea leer y procesar información de precipitaciones del mes de enero. Para ello se dispone de un
archivo de texto (llamado precipitaciones.txt) con el siguiente formato:
0-2-0-0-7-22-11-0- . . . -0-
Por cada de los 31 días se tiene un número entero indicando los milímetros llovidos, seguido de un
guión medio (-) como delimitador. Escriba un programa que lea la información del archivo y
derermine el día con mayor precipitación. Para evaluar el programa, genere un archivo con el
formato establecido utilizando un editor de texto plano (por ejemplo: Bloc de notas o Notepad++).
Nota: puede utilizar la función fscanf para procesar cada valor de precipitación.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arch;
    //leo el archivo
    arch = fopen("../textos/Ej3Precipitaciones.txt", "r");

    int x, max = -1, diaMax, i = 0;
    fscanf(arch, "%d-", &x); //lee lo que tiene el archivo
    while (!feof(arch)){

        if (x > max) {
            max = x;
            diaMax = i;
        }
        i++;
        fscanf(arch, "%d-", &x); //lee lo que tiene el archivo
    }

    printf("El dia con mayor cantidad de precipitaciones es %d", diaMax);


    return 0;
}
