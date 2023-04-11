#include <stdio.h>
#include <stdlib.h>
#define DIMF 3

struct direccion {
    char calle[50];
    char ciudad[30];
    int codP;
    char pais [40];
}direccion ;


struct alu {
    char apellido[50];
    char nombre [50];
    char legajo[8];
    float promedio;
    struct direccion domicilio;
};


typedef struct alu alumno;


void InicializarAlumno(alumno *);
void InicializarVector(alumno [], int);
alumno MejorPromedio(alumno [], int);
int main()
{
    //alumno a;
    //IniciliazarAlumno(&a);

    alumno arregloAlumnos[DIMF]; //arreglo de alumnos

    InicializarVector(arregloAlumnos, DIMF);

    alumno aMax = MejorPromedio(arregloAlumnos, DIMF);
    printf("El nombre y apellido del alumno con mejor promedio es: %s %s", aMax.nombre, aMax.apellido);

    return 0;
}

void InicializarAlumno(alumno a[]){

    printf("Ingrese apellido: \n ");
    scanf("%s", (a->apellido));

    printf("Ingrese nombre: \n");
    scanf("%s", (a->nombre));

    printf("Ingrese legajo: \n");
    scanf("%s", (a->legajo));

    printf("Ingrese promedio: \n");
    scanf("%f", &(a->promedio));

    printf("Ingrese domicilio: \n");

    printf("Ingrese calle: \n");
    scanf("%s", a->domicilio.calle);

    printf("Ingrese ciudad: \n");
    scanf("%s", a->domicilio.ciudad);

    printf("Ingrese codigo postal: \n");
    scanf("%d", &(a->domicilio.codP));

    printf("Ingrese pais: \n");
    scanf("%s", a->domicilio.pais);

}

void InicializarVector(alumno a[], int cant) {
    for (int i = 0; i < cant; i++)
        InicializarAlumno(&a[i]);
}

/*
void ImprimirAlumno(alumno a){
    printf("Ingrese apellido: ", a->apellido);

    printf("Ingrese nombre: \n", a->nombre);

    printf("Ingrese legajo: \n", a->legajo);

    printf("Ingrese promedio: \n", a->promedio);

    printf("Ingrese domicilio: \n");

    printf("Ingrese calle: \n", a->domicilio.calle);

    printf("Ingrese ciudad: \n",  a->domicilio.ciudad);

    printf("Ingrese codigo postal: \n", a->domicilio.codP);

    printf("Ingrese pais: \n", a->domicilio.pais);
}


void ImprimirVector (alumno a[], int cant) {
    for (int i = 0; i < cant; i++)
        ImprimirAlumno(a[i]);

}
*/

alumno MejorPromedio(alumno a[], int cant){
    int max = -1;
    alumno alumnoMax;
    for (int i = 0; i < cant; i++) {
        if (a[i].promedio > max) {
            max = a[i].promedio;
            alumnoMax = a[i];
        }
    }
    return alumnoMax;
}

