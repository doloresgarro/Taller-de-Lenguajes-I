//no se si esta bien incluir estas librerias y el struct pero sino no me compila
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "diccionario.h"


//Crear un diccionario: inicializa la estructura del diccionario.
void crearDiccionario(nodo **l) {
     *l = NULL;
}

//Existe palabra: determina si una palabra está en el diccionario o no.
int existePalabra(nodo *l, char dato[]) {
    while ((l != NULL) && (strcmp(dato, l->dato))){ // tira 0 cuando encontre la palabra, entonces cuando strcmp = 1 ENTRA
       // printf("%s\n", l->dato);
        l = l->sig;
    }

    if (l == NULL) //si es NULL termino de recorrer y no la encontro
        return 0;
    else           //sino la encontro :)
        return 1;
}

//Agrega una nueva palabra al diccionario siempre y cuando no exista. Retorna si la agregó o no.
int agregarPalabra(nodo **l, char dato[]) {

    if (existePalabra(*l, dato)) //si existe devuelve 1
        return 0;
    else { // si no existe la agrego
        nodo *aux = (nodo *) malloc(1*sizeof(nodo)); // 1 --> porq reservo espacio para un nodo
        aux->sig = *l;
        strcpy(aux->dato, dato);
        *l = aux;
        return 1;
    }
}



//Elimina una palabra del diccionario. Retorna si la palabra fue eliminada o no.
int eliminarPalabra(nodo **l, char dato[]) {
    if (existePalabra(*l, dato)) { //si existe la palabra entra

        nodo *aux, *act = *l, *ant = NULL;

        while (act != NULL) {

            if (!(strcmp(dato, act->dato))) {
                if (ant == NULL) //si es el primero
                    *l = act->sig;
                else //si es un nodo del medio
                    ant->sig = act->sig;
                aux = act;
                act = act->sig;
                free(aux);
            }
            else {
                ant = act;
                act = act->sig;
            }
        }
        return 1;
    }
    else // si no existe
        return 0;
}

//Cargar desde un archivo: carga un diccionario desde un archivo de texto.
void cargarDesdeArchivo(nodo **l, FILE *f ) {
    FILE *fcreado = fopen("diccionario.txt", "r");

    if (fcreado == NULL)
        printf("Error al abrir el archivo");

    char palabra[50];
    fscanf(fcreado, "%s\n", palabra); //copio palabra del diccionario
    printf("%s\n", palabra);
    while (!feof(fcreado)) {
        agregarPalabra(&(*l), palabra); // agrego la palabra al diccionario
        fscanf(fcreado, "%s\n", palabra); //copio palabra del diccionario
        printf("%s\n", palabra);
    }
     if (palabra != NULL)
        agregarPalabra(&(*l), palabra);

    fclose(fcreado);
}

//Guarda un diccionario en un archivo de texto.
void guardarEnArchivo(nodo **l, FILE *f){
    FILE *fcreado = fopen("diccionarioNuevo.txt", "w");

    if (fcreado == NULL)
        printf("Error al abrir el archivo");

    while (*l != NULL) {
        fprintf(f, "%s ", (*l)->dato);
        *l = (*l)->sig;
    }
    if ((*l)->dato != NULL)
        fprintf(f, "%s ", (*l)->dato);



    fclose(fcreado);
}

void liberarDiccionario(nodo **l) { //Libera los recursos del diccionario.
    nodo *aux;
    while (*l != NULL) {
        aux = *l;
        *l = (*l)->sig;
        free(aux);
    }
}

void Imprimir(nodo * l) {
    while (l != NULL) {
        printf("%s  ", l->dato);
        l = l->sig;
    }
}

