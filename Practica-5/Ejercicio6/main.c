/*Un archivo csv (Comma Separated Values) contiene información separada por comas. Cada renglón
(fila) contiene un registro de información. Cada columna contiene un campo particular de
información. La primera fila es especial ya que contiene los nombres de los campos.

Se desea obtener información a partir del archivo llamado vinos.csv (el cual se encuentra en la
Sección “Ing. Gral. y Contenidos” del curso de la cátedra en WebUNLP).

El programa debe generar un archivo de texto con un resumen que indique el valor máximo, mínimo y promedio para cada
uno de los campos del archivo. Este archivo debe llamarse reporte_vinos.txt y debe guardarse en la
misma ruta que el archivo vinos.csv. El formato del archivo debe ser similar al del siguiente
ejemplo:*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIML 8

// estructura para guardar prom max y min
typedef struct {
    float promedio;
    float min;
    float max;
}info;


void cargarAtributos(char [][50], int, FILE **);
void imprimirAtributos(char [][50], int);
void inicializar(info [], int);
void imprimirInfo(info [] , int);
void calcular(info[], int, FILE **);
void imprimirEnArchivo(info [], int, FILE *, char [][50]);

int main()
{
    //abro el archivo
    FILE *f;
    f = fopen("vinos.csv", "r");

    if (f == NULL){
        printf ("\nError al abrir archivo fuente\n");
        return 1;
    }


    //vector para guardar nombres
    char atributos[DIML][50];
    cargarAtributos(atributos, DIML, &f);
    imprimirAtributos(atributos, DIML);
    printf("\n");

    //vector para guardar prom, min y max
    info vector[DIML];
    inicializar(vector, DIML);
   // imprimirInfo(vector, DIML);

    calcular(vector, DIML, &f);

    imprimirInfo(vector, DIML);

    fclose(f);

    FILE *fcreado;
    fcreado = fopen("reporte_vinos.txt", "w");

    imprimirEnArchivo(vector, DIML, fcreado, atributos);



    return 0;
}
void cargarAtributos(char a[][50], int dimL, FILE **f){
    char atributo[50];
    for (int i = 0; i < dimL; i ++){
        fscanf(*f, "%[^;];", atributo); //mascara para escribir dos
        strcpy(a[i], atributo);
    }
}

void imprimirAtributos(char a[][50], int dimL) {
    for (int i = 0; i < dimL; i ++)
        printf(" %s ", a[i]);
}

//void inicializar(float[], int, FILE **);
void inicializar(info v[], int dimL){
    for (int i = 0; i < dimL; i ++){
        v[i].promedio = 0;
        v[i].max = -1;
        v[i].min = 9999;
    }
}

void imprimirInfo(info v[], int dimL){
    for (int i = 0; i < dimL; i ++)
        printf("% 2.2f ", v[i].promedio);
    printf("\n");
    for (int i = 0; i < dimL; i ++)
        printf("% 2.2f ", v[i].max);
    printf("\n");
    for (int i = 0; i < dimL; i ++)
        printf("% 2.2f ", v[i].min);
    printf("\n");
}

void imprimirEnArchivo(info v[], int dimL, FILE *fcreado, char a[DIML][50]){
    for (int i = 0; i < dimL; i++)
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

}

void calcular(info v[], int dimL, FILE **f) {
    float valor;
    int cont = 0, cond = 1;
    char undef[20]; //para el tinto/blanco --> que no los voy a usar
    while (!feof(*f)){
        cont++;
        for (int i = 0; i < dimL; i ++){
            cond = fscanf(*f, "%f;", &valor); //me guardo en valor de la columna y sabe hasta donde guardar por el ";"
            if (cond != 0){ // para que no me lea dos veces
                v[i].promedio += valor; // lo guardo en la pos
                if (valor >  v[i].max)
                    v[i].max = valor;
                if (valor <  v[i].min)
                    v[i].min = valor;
            }
        }

        fscanf(*f, "%s\n", undef); // para saltear  tinto/blanco/etc y saltar a proxima linea
    }

    for (int i = 0; i < dimL; i++)
        v[i].promedio = (v[i].promedio)/cont;
}

