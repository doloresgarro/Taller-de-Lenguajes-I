#include <stdio.h>
#include <stdlib.h>

typedef struct { //ocupa 16 bits
    unsigned int hora: 5; // 2^5 - 1 = 31
    unsigned int minutos: 6; // 2^6 - 1 = 63
    unsigned int segundos: 5; // lo que sobra de lo q no necesitan la hora y los min.
} horario;

void LeerHora(horario *);
void ImprimirHora(horario *);

int main()
{
    horario h;
    LeerHora(&h);
    ImprimirHora(&h);


    return 0;
}

void LeerHora(horario *h) {

    int aux;
    printf("Ingrese hora: ");
    scanf("%d", &aux);
    h->hora = aux;

    printf("Ingrese minutos: ");
    scanf("%d", &aux);
    h->minutos = aux;

    printf("Ingrese segundos: ");
    scanf("%d", &aux);
    h->segundos = aux;
}

void ImprimirHora(horario *h) {
    printf("%d horas - %d minutos - %d segundos\n", h->hora, h->minutos, h->segundos);
    //imprime hasta 27 porq minutos tiene 5 bits y si le ingresas 59 imprime 59-32 = 27
}
