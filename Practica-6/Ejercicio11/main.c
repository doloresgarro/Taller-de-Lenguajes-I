/*
11. Implemente una biblioteca diccionario.h que permita manejar un diccionario de palabras. Determine
las estructuras de datos necesarias para implementar la biblioteca.

Las operaciones que debe implementar son las siguientes:
a) Crear un diccionario: inicializa la estructura del diccionario.
b) Agregar palabra: agrega una nueva palabra al diccionario siempre y cuando no exista. Retorna si
la agregó o no.
c) Existe palabra: determina si una palabra está en el diccionario o no.
d) Eliminar palabra: elimina una palabra del diccionario. Retorna si la palabra fue eliminada o no.
e) Cargar desde un archivo: carga un diccionario desde un archivo de texto.
f) Guardar a un archivo: guarda un diccionario en un archivo de texto.
g) Destruir el diccionario: libera los recursos del diccionario.

Una vez implementadas todas las funciones de biblioteca, escriba un programa que permita probarla
*/

//no funcan cargarDesdeArchivo y guardarEnArchivo


#include <stdio.h>
#include <stdlib.h>
#include "diccionario.h"


int main() {

    nodo *l;
    crearDiccionario(&l);

    char palabra[20];
    for (int i = 0; i < 4; i ++) {
        printf("Ingrese una palabra para agregar al diccionario: ");
        scanf("%s", palabra);
        agregarPalabra(&l, palabra);
    }


    printf("Imprime diccionario: \n");
    Imprimir(l);
    printf("\n");

    //------------------------------------------------------------
    printf("Ingrese una palabra para buscar en el diccionario: ");
    scanf("%s", palabra);
    if (existePalabra(l, palabra))
        printf("La palabra %s esta en el diccionario\n", palabra);
    else
        printf("No se encontro la palabra\n");


    //------------------------------------------------------------
    char palabra2[20];
    printf("Ingrese una palabra para eliminar del diccionario: ");
    scanf("%s", palabra2);
    if (eliminarPalabra(&l, palabra2)) {
        printf("Se elimino la palabra %s\n", palabra2);
        printf("Imprime diccionario sin la palabra %s:\n", palabra2);
        Imprimir(l);
        printf("\n");
    }
    else
        printf("No se elimino la palabra\n");


    //------------------------------------------------------------
    FILE *f = fopen("diccionario.txt", "w");

    if (f == NULL)
        printf("Error al abrir el archivo\n");
    else {
        cargarDesdeArchivo(l,&f);
        //guardarEnArchivo(&l, f);
        Imprimir(l);
        printf("\n");
    }

    liberarDiccionario(&l);

    printf("Imprime diccionario despues de liberar: \n");
    Imprimir(l);

    return 0;
}
