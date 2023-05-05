/*Utilizando la estructura y funciones del ejercicio anterior escriba un programa que lea números
enteros positivos desde teclado hasta ingresar el número 0. Los números leídos deben ser almacenados
en orden ingresado por teclado. Generar una nueva lista con el orden invertido. Imprimir los
elementos de cada lista junto con la cantidad de elementos de cada una. Por último, libere la memoria
reservada dinámicamente.*/

#include <stdio.h>
#include <stdlib.h>

struct lista{
    int dato;
    struct lista *sig;
};

typedef struct lista nodo; //le mando la direccion a la direccion

void Inicializar(nodo **);
void Eliminar(nodo **);
void AgregarAdelante(nodo **, int);
void AgregarAlFinal(nodo **, int);
int cantidadNodos(nodo *);
void Imprimir(nodo *);

int main() {

    nodo *l;
    Inicializar(&l);

    int num;
    printf("Ingrese un numero para agregar al final de la lista: ");
    scanf("%d", &num);
    while (num != 0) {
        AgregarAlFinal(&l, num);
        printf("Ingrese un numero para agregar al final de la lista: ");
        scanf("%d", &num);
    }

    nodo *listaInv;
    Inicializar(&listaInv);
    nodo *aux = l;

    while (aux != NULL) {
        AgregarAdelante(&listaInv, aux->dato);
        aux = aux->sig;
    }


    printf("La cantidad de nodos de la lista 1 es: %d \n", cantidadNodos(l));
    printf("La cantidad de nodos de la lista invertida es: %d \n", cantidadNodos(listaInv));

    printf("Imprime lista 1: \n");
    Imprimir(l);
    printf("\n");
    printf("Imprime lista invertida: \n");
    Imprimir(listaInv);

    Eliminar(&l);
    Eliminar(&listaInv);
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

void AgregarAdelante(nodo **l, int dato) {
    nodo *aux = (nodo *) malloc(1*sizeof(nodo)); // 1 --> porq reservo espacio para un nodo
    aux->sig = *l;
    aux->dato = dato;
    *l = aux;
}

void AgregarAlFinal(nodo **l, int dato) {
    nodo *nuevo = (nodo *) malloc(sizeof(nodo)); // 1 --> porq reservo espacio para un nodo
    nuevo->dato = dato;
    nuevo->sig = NULL;

    if (*l == NULL)
        *l = nuevo;
    else {
        nodo *aux = *l;
        while (aux->sig != NULL) {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}


int cantidadNodos(nodo *l) {
    int cantNodos = 0;
    while (l != NULL) {
        cantNodos ++;
        l = l->sig;
    }
    return cantNodos;
}

void Imprimir(nodo * l) {
    while (l != NULL) {
        printf("%d  ", l->dato);
        l = l->sig;
    }
}


