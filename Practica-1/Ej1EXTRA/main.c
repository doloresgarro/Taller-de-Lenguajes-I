/*Escriba un programa que lea información relativa a la cantidad de especies de aves de 14 países
 de América. De cada país se lee el código de país y la cantidad de especies. Informar los 2 países
 con menor cantidad de especies. Además, se desea saber qué porcentaje de países tienen más de 40 especies. */

#include <stdio.h>
#include <stdlib.h>
#define CANT 5
void Minimos(int, int, int*, int*);
int main()
{
    int i, cod, cant, min1, min2;
    int contador = 0;

    for (i = 0; i < CANT; i++) {
        printf("Ingrese codigo de pais: ");
        scanf("%d", &cod);
        printf("Ingrese cantidad de aves: ");
        scanf("%d", &cant);

        Minimos(cod, cant, &min1, &min2);

        // Para sacar porcentaje
        if (cant > 40)
            contador ++;

    }
    printf("El primer minimo es: %d \n", min1);
    printf("El segundo minimo es: %d \n", min2);

    float porcentaje;
    porcentaje = ((float)contador / CANT * 100);

    printf("El porcentaje de paises con mas de 40 aves %5.3f: ", porcentaje);

 /*.5f --> imprime 5 decimales
  .3f --> imprime 3 decimales*/

    return 0;
}
void Minimos(int cod, int cant, int *min1, int *min2){
    static int cantMin1 = 999;
    static int cantMin2 = 999;
    if (cant < cantMin1) {
        *min2 = *min2;
        cantMin2 = cantMin1;
        *min1 = cod;
        cantMin1 = cant; // a la variable estatica cantMin1 le guardo la cantidad minima de aves
    }
    else
        if (cant < cantMin2) {
            *min2 = cod;
            cantMin2 = cant;
        }
}
