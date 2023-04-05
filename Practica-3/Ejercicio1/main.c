/*Resuelva:
a. Defina una estructura rectangulo que contenga los siguientes campos: base (float) y altura
(float).
b. Escriba una función que reciba una estructura rectangulo y la inicialice a partir de valores
ingresados por teclado.
c. Escriba una función que dada una estructura rectangulo, calcule el área.
d. Escriba un programa que defina un arreglo de 10 rectángulos (struct rectangulo) y lo
inicialice utilizando la función definida en el inciso anterior. Luego, informe el número de
rectángulo que tiene menor área.

*/
#include <stdio.h>
#include <stdlib.h>
#define DIML 3

struct rectangulo {
float base;
float altura;
};

void InicializarRectangulo(struct rectangulo *r);
void ImprimirEstructura(struct rectangulo r);
float calcularArea(struct rectangulo r);
void InicializarVector(struct rectangulo [], int);
int menorArea(struct rectangulo [], int);

int main()
{
    //struct rectangulo r; //declaramos el rectangulo
   // InicializarRectangulo(&r);


    //printf("El area del rectangulo es %f \n ", calcularArea(r));

    struct rectangulo v[DIML];
    InicializarVector(v, DIML);
    //ImprimirEstructura();

    //printf("El area del rectangulo es %f \n ", calcularArea(r));
    printf("El numero de rectangulo con menor area es: %d \n", menorArea(v, DIML));

    return 0;
}


void InicializarRectangulo(struct rectangulo *r) {
    printf("Ingrese base: ");
    scanf("%f", &(r->base)); //(r->base) --> me da el contenido, &(r->base) --> me da la direccion
    printf("Ingrese altura: ");
    scanf("%f", &(r->altura));
}

void ImprimirEstructura(struct rectangulo r) {
    printf("La base es %f \n", r.base);
    printf("La altura es %f \n", r.altura);
}

float calcularArea(struct rectangulo r) {
    float area = ((r.base) * (r.altura));
    return area;
}

void InicializarVector(struct rectangulo v[], int cant) {
    for (int i = 0; i < cant; i++) {
        InicializarRectangulo(&v[i]);
    }
}

int menorArea(struct rectangulo v[], int cant){
    int min = 99999;
    int recMin = 0;
    float area;
    for (int i = 0; i < cant; i++) {
        area = calcularArea(v[i]);
        printf("El area del rectangulo es %f \n ", area);
        if (area < min) {
            min = area;
            recMin = i;
        }
    }
    return recMin;
}
