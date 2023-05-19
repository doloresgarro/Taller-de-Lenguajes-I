/*
*Escriba un programa que permita a un usuario consultar si un conjunto de palabras existe o no en
un diccionario. El usuario ingresa de a una palabra y la consulta finaliza cuando ingresa la palabra
“ZZZ”. Para cada palabra ingresada se debe informar si la misma pertenece o no al diccionario.

El diccionario consiste en un archivo de texto y las palabras se encuentran ordenadas en forma
ascendente (una por línea). Se desea generar una estructura de datos dinámica (memoria RAM) en
la cual se almacenen las palabras de todo el diccionario. Luego, verifique la pertenencia de las
palabras ingresadas por el usuario utilizando dicha estructura en lugar del archivo.
*/

//otra forma de hacerlo es guardar las palabras ordenadas por abc en el diccionario (lo mas logico)
//e ir comparando si la palabra es mayor o menor y que si es mayor ya salga y no siga recorriendo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 15

struct lista{
    char dato[CANT];
    struct lista *sig;
};

typedef struct lista nodo; //le mando la direccion a la direccion

void Inicializar(nodo **);
void Eliminar(nodo **);
void AgregarAdelante(nodo **, char [], int);
int cantidadNodos(nodo *);
void Imprimir(nodo *);

int main() {

    //abro archivo y voy guardando las palabras en el diccionario
    FILE *f;
    f = fopen("../textos/Ej5Diccionario.txt", "r");
    if (f == NULL){
        printf ("\nError al abrir archivo fuente\n");
        return 1;
    }
    //inicializo lista --> diccionario
    nodo *diccionario;
    Inicializar(&diccionario);

    // me traigo la palabra del archivo
    char linea[CANT];
    fgets(linea,CANT,f);
    char *ptr;
    //mientras no se termine el archivo
    // LEER CON FSCANF
    while (!feof(f)){
       // printf("%s\n", linea);
        AgregarAdelante(&diccionario, linea, CANT);
        ptr = fgets(linea,CANT,f); //lee el ult caracter pero no imprime ultima linea
        linea[strlen(linea)-1] = '\0';
    }
    // para que no me imprima 2 veces la ult linea, el ptr tiene un puntero a un char
    if (ptr != NULL) {
        AgregarAdelante(&diccionario, linea, CANT);
    }

    printf("------------------------------\n");

   /* printf("Imprime diccionario: \n");
    Imprimir(diccionario);
    printf("\n");
*/


    char palabra[CANT];
    printf("Ingrese una palabra para buscar en el diccionario: ");
    scanf("%s", palabra);
    while (strcmp(palabra,"FIN")) {
        //recorro el diccionario hasta encontrar la palabra
       /* if (strcmp(palabra, diccionario->dato))
            printf("La palabra %s pertenece al diccionario (%s)", palabra, diccionario->dato);
        else {*/
        while ((diccionario != NULL) && (strcmp(palabra, diccionario->dato))) { // tira 0 cuando encontre la palabra, entonces cuando strcmp = 1 ENTRA
                printf("%s\n", diccionario->dato);
                diccionario = diccionario->sig;
        }


        if (diccionario == NULL) {
            printf("ENTRA\n");
            printf("No se encontro la palabra\n");
        }
        else {
            printf("ENTRA AL ELSE DE ENCONTRO\n");
            printf("La palabra %s pertenece al diccionario --> %s\n", palabra, diccionario->dato);
        }
        /*
        if (!(strcmp(palabra, diccionario->dato)))
            printf("La palabra %s pertenece al diccionario --> %s", palabra, diccionario->dato);
        else
            printf("No se encontro la palabra");
        */
        printf("Ingrese una palabra para buscar en el diccionario: ");
        scanf("%s", palabra);
    }



    Eliminar(&diccionario);

    return 0;
}

void Inicializar(nodo **l) {
     *l = NULL;
}

void Eliminar(nodo **l) {
    nodo *aux;
    while (*l != NULL) {
        aux = *l;
        *l = (*l)->sig;
        free(aux);
    }
}

void AgregarAdelante(nodo **l, char dato[], int dimL) {
    nodo *aux = (nodo *) malloc(15*sizeof(nodo)); // 1 --> porq reservo espacio para un nodo
    aux->sig = *l;
    strcpy(aux->dato, dato);
    //aux->dato = dato;
    *l = aux;
}


void Imprimir(nodo * l) {
    while (l != NULL) {
        printf("%s", l->dato);
        l = l->sig;
    }
}

