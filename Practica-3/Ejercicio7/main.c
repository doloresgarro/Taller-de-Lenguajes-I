#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //libreria para el isdigit

typedef union DocPasaporte {
    char DNI[15];           // lo uso como string para poder identificar si es arg o no
    char pasaporte[15];

}ident;

typedef struct estudiante {
    char apellido[20];
    char nombre[20];
    char Legajo[15];
    ident ID;
} est;



int ComprobarDP(char []);
void LeerEstudiante(est *e);
void ImprimirEstudiante(est e);
int main()
{
    //declaro el estudiante
    est e;

    LeerEstudiante(&e);
    ImprimirEstudiante(e);


    return 0;
}

int ComprobarDP(char *id) {
     for (; *id != '\0'; ++id) { //recorro hasta la dimL
        if (!isdigit(*id)) //le manda el valor y verifica si no es un num
            return 0;
     }
     return 1;
}


void LeerEstudiante(est *e) {

    printf("Ingrese apellido: ");
    scanf("%s", e->apellido);

    printf("Ingrese nombre: ");
    scanf("%s", e->nombre);

    printf("Ingrese legajo: ");
    scanf("%s", e->Legajo);


    printf("Ingrese ID: ");
    char id[15];
    scanf("%s", id);


    //funcion que identifica si es pasaporte o documento
    if (ComprobarDP(id) == 0)  //devuelve "booleano"
        strcpy(e->ID.pasaporte, id);
    else
        strcpy(e->ID.DNI, id);

}

void ImprimirEstudiante(est e) {

    printf("Apellido: %s \n", e.apellido);

    printf("Nombre: %s \n", e.nombre);

    printf("Legajo: %s \n", e.Legajo);

/*    if (ComprobarDP(e.ID.DNI) == 0) //PREGUNGAR, porq siempre le paso el DNI. Si le paso e.ID me tira error
        printf("Es pasaporte: %s", e.ID.pasaporte);
    else
        printf("Es docuemento: %s", e.ID.DNI);*/

}
