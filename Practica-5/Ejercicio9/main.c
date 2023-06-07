/*
9) Escriba un programa que lea información de 20 jugadores de tenis. De cada jugador se lee nombre y
apellido, edad, cantidad de títulos, ranking actual y fortuna acumulada.
Defina una estructura de datos adecuada para la información y almacene la misma en un archivo binario. Finalizada la
lectura, procese los datos almacenados en el archivo e informe:
a) Nombre y apellido del jugador con mejor ranking.
b) Nombre y apellido del jugador que más títulos ha ganado.
*/


//me tira EMOJIS cuando deberia imprimir los nombres del q tiene mas titulos y ranking si alguien ve el error porfis avise :)
//no termine el 10

/*10)
a) Escriba una función que permita actualizar el ranking de un jugador. Dicha función recibe como
parámetros nombre, apellido y nuevo ranking del jugador y retorna 1 si pudo realizar la
modificación y 0 en caso contrario

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 3

typedef struct {
    char nombre[20];
    char apellido[20];
    int edad;
    int titulos;
    int ranking;
    int fortuna;
} jugadores;


void cargarArchivo(FILE **,  FILE **, int);
void mejorRankingTitulos(FILE **, int);
int actualizarRanking(FILE *, char *, char *, int);

int main()
{
    FILE *f, *fbinario;  //lo cargo también en un archivo no binario para ver si esta bien
   /* f = fopen("jugadores.txt", "w");

    if (f == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    fbinario = fopen("jugadoresBinario.dat", "wb");

    if (fbinario == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    cargarArchivo(&f, &fbinario, CANT);

    fclose(f);
    fclose(fbinario);
*/
    fbinario = fopen("jugadoresbinario.dat", "rb");
    mejorRankingTitulos(&fbinario, CANT);

    //Ejercicio 10
    /*Escriba una función que permita actualizar el ranking de un jugador. Dicha función recibe como
parámetros nombre, apellido y nuevo ranking del jugador y retorna 1 si pudo realizar la
modificación y 0 en caso contrario*/
    int nuevoRank = 2;
    char nombre[20] = "dolores" , apellido[20] = "garro";
    if (actualizarRanking(fbinario, nombre, apellido, nuevoRank)) {
        printf("Se actualizó el ranking del jugador\n");
    }
    else
        printf("No se actualizo el ranking del jugador\n");




    return 0;
}


void cargarArchivo(FILE **f, FILE **fb, int DIMF){
    jugadores j;
    for (int i = 0; i < DIMF; i++) {
        printf("Ingrese nombre: \n");
        scanf("%s", j.nombre);

        printf("Ingrese apellido: \n");
        scanf("%s", j.apellido);

        printf("Ingrese edad: \n");
        scanf("%d", &j.edad); // & --> porque los num son ptrs, los strings son como vectores

        printf("Ingrese titulos: \n");
        scanf("%d", &j.titulos);

        printf("Ingrese ranking: \n");
        scanf("%d", &j.ranking);

        printf("Ingrese fortuna: \n");
        scanf("%d", &j.fortuna);

        fprintf(*f, "%s %s %d %d %d %d;", j.nombre, j.apellido, j.edad, j.titulos, j.ranking, j.fortuna);
        fwrite(&j, sizeof(jugadores), 1, *fb);
    }

}

void mejorRankingTitulos(FILE **fb, int cant) {
    jugadores j;
    jugadores jMaxTitulos;
    jugadores jMaxRank;
    int rankMax = 9999, titulosMax = -1;
    for (int i = 0; i < cant; i++){
        fread(&j, sizeof(jugadores), 1, *fb);
        if (j.ranking < rankMax)
            jMaxRank = j;

        if (j.titulos > titulosMax)
            jMaxTitulos = j;

    }
    printf("El jugador con mayor ranking es: %s %s \n", jMaxRank.nombre, jMaxRank.apellido);
    printf("El jugador con mas titulos es: %s %s \n", jMaxTitulos.nombre, jMaxTitulos.apellido);
}

int actualizarRanking(FILE *f, char *nombre, char *apellido, int nuevoRank){
    jugadores j;

    //NO SE

    printf("ENTRAAAAAAAAAAAAA\n");
    //int n = 1;
    fseek(f, sizeof(jugadores), SEEK_SET);
    while ((!feof(f)) && ((strcmp(nombre, j.nombre)) && (strcmp(apellido, j.apellido)))){ // strcmp = 1 si no son iguales
        printf("ENTRAAAAAAAAAAAAA2\n");
        fseek(f, sizeof(jugadores), SEEK_CUR); //que se posicione al principio
        fread(&j, sizeof(jugadores), 1, f);
       // n++;
    }

    if ((strcmp(nombre, j.nombre)) && (strcmp(apellido, j.apellido))) { //lo encontro
          j.ranking = nuevoRank;
          return 1;
    }
    else
        return 0;
}
