#include <stdio.h>
#include <stdlib.h>

struct lista{
    int dato;
    struct lista *sig;
};

typedef struct lista nodo; //le mando la direccion a la direccion

void Inicializar(nodo **);
void Eliminar(nodo **, int dato);
void AgregarAdelante(nodo **, int);
void AgregarAlFinal(nodo **, int);
int cantidadNodos(nodo *);
void Imprimir(nodo *);

int main() {

    nodo *l;
    Inicializar(&l);

    int num;
    /*for (int i = 0; i < 4; i ++) {
        printf("Ingrese un numero para agregar al principio de la lista: ");
        scanf("%d", &num);
        AgregarAdelante(&l, num);
    }*/

    for (int i = 0; i < 4; i ++) {
        printf("Ingrese un numero para agregar al final de la lista: ");
        scanf("%d", &num);
        AgregarAlFinal(&l, num);

    }
    printf("La cantidad de nodos de la lista es: %d \n", cantidadNodos(l));
    printf("Eliminar el numero %d \n", 5);
    Eliminar(&l, 5);

    printf("Imprime lista: \n");
    Imprimir(l);

   // Eliminar(&l);
    return 0;
}

void Inicializar(nodo **l) {
     *l = NULL;
}

void Eliminar(nodo **l, int num) {
    nodo *aux, *ant=NULL, *act = *l;

    while (act != NULL) {

        if (act->dato == num){ //si el dato es igual al que quiero eliminar
            if (ant == NULL) //si es el primer elem de la lista
                *l = act->sig;
            else
                //si es uno del medio
                ant->sig = act->sig;
            aux = act;
            act = act->sig;
           // printf("aux ant act %d %d %d", aux->dato, ant->dato, act->dato);
            free(aux);


        }
        else {
            ant = act;
            act = act->sig;
        }
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

