/*Se desea leer y procesar informaci�n de precipitaciones del mes de enero. Para ello se dispone de un
archivo de texto (llamado precipitaciones.txt) con el siguiente formato:
0-2-0-0-7-22-11-0- . . . -0-
Por cada de los 31 d�as se tiene un n�mero entero indicando los mil�metros llovidos, seguido de un
gui�n medio (-) como delimitador. Escriba un programa que lea la informaci�n del archivo y
derermine el d�a con mayor precipitaci�n. Para evaluar el programa, genere un archivo con el
formato establecido utilizando un editor de texto plano (por ejemplo: Bloc de notas o Notepad++).
Nota: puede utilizar la funci�n fscanf para procesar cada valor de precipitaci�n.
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
