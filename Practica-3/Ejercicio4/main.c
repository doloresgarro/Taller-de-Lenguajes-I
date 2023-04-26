/* Implemente una estructura y las funciones para implementar un mazo de 50 cartas españolas.
Implemente las siguientes funciones y realice un programa para probarlas:
a. Barajar el mazo de cartas.
b. Sacar una carta: dado un mazo, sacar la carta del mazo y devolverla.
c. Imprimir una carta (número/figura con su palo).
Nota: utilice constantes (define o const) para definir los palos de las cartas, modelice las cartas y el
mazo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ESPADA = 1;
#define BASTO = 2;
#define  COPA = 3;
#define ORO = 4;
/*
struct Palo {
    int espada = 1;
    int basto = 2;
    int copa = 3;
    int oro = 4;
};*/

struct carta {
    int palo;
    int num;
};


void Barajar(struct carta [], int);
void ImprimirMazo(struct carta [], int);
void SacarUnaCarta(struct carta [], int *, struct carta *);
void ImprimirCarta(struct carta);

int main()
{
    int DIMF = 5;
    srand(time(NULL));

    struct carta mazo[DIMF]; //defino mazo

    Barajar(mazo, DIMF);

    ImprimirMazo(mazo, DIMF);

    struct carta c; //declaro carta para sacar
    SacarUnaCarta(mazo, &DIMF, &c);

    printf("Saco una carta:");
    ImprimirCarta(c);

    return 0;
}

void Barajar(struct carta mazo[], int cant) {
    for (int i = 0; i < cant; i++) {
        mazo[i].num = 1 + (rand() % 12);
        mazo[i].palo = 1 + (rand()% 4);

        //!!!!!!!!!!!!!!!! usar el swap para que no se repita
        //tiro =(1 + (rand() % 6));
       // printf("CARTA: %d de %d \n",mazo[i].num,mazo[i].palo); //ver si se puede con otra estructura
    }

}

void ImprimirMazo(struct carta mazo[], int cant) {
    for (int i = 0; i < cant; i++) {
         printf("CARTA: %d de %d \n",mazo[i].num,mazo[i].palo);
    }
}

void SacarUnaCarta(struct carta mazo[], int *cant, struct carta *c) {
    int pos = 1 + (rand() % (*cant));
    c = &(mazo[pos]); //posicion random del mazo
    printf("%d \n", mazo[pos].num);
    printf("%d \n", mazo[pos].palo);

    printf("HOLISSSSSSSSSSSS \n");
   printf("%d \n",c->num);
   printf("%d \n",c->palo);

   //eliminar carta                         1
    for (int i = pos; i < *cant; i++)  // 1 2 3 4
        mazo[i] = mazo [i + 1];
    (*cant) --;
    printf("&d\n", cant);

}

void ImprimirCarta(struct carta c){
    printf("CARTA: %d de %d \n",c.num, c.palo);
}
