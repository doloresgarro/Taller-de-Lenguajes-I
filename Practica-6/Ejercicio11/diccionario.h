#ifndef DICCIONARIO_H_INCLUDED
#define DICCIONARIO_H_INCLUDED


struct lista{
    char dato[20];
    struct lista *sig;
};

typedef struct lista nodo; //le mando la direccion a la direccion


void crearDiccionario(nodo **);           //Crear un diccionario: inicializa la estructura del diccionario.
int agregarPalabra(nodo **, char []);     //Agrega una nueva palabra al diccionario siempre y cuando no exista. Retorna si la agregó o no.
int existePalabra(nodo *, char []);       //Existe palabra: determina si una palabra está en el diccionario o no.
int eliminarPalabra(nodo **, char[]);     //Elimina una palabra del diccionario. Retorna si la palabra fue eliminada o no.
void cargarDesdeArchivo(nodo **, FILE *); //Cargar desde un archivo: carga un diccionario desde un archivo de texto.
void guardarEnArchivo(nodo **, FILE *);   //Guarda un diccionario en un archivo de texto.
void liberarDiccionario(nodo**);          //Libera los recursos del diccionario.


void Imprimir(nodo * l);              //lo agregue yo para ir chequeando

#endif // DICCIONARIO_H_INCLUDED
