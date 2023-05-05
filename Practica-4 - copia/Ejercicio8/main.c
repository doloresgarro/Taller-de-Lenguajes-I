/*8. Utilizando la estructura y funciones de los ejercicios anteriores escriba un programa que lea números
enteros desde teclado hasta ingresar el número 0. Luego, vuelva a leer otro número entero desde
teclado y elimine de la lista a todos aquellos que sean múltiplos del mismo.*/

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

    printf("Ingrese un numero para eliminar sus multiplos de la lista: ");
    scanf("%d", &num);

    printf("Imprime lista: \n");
    Imprimir(l);
    printf("\n");


    nodo *act = l, *ant = NULL, *aux;
    while (act != NULL){ // 1 2 3 4

        if (act->dato % num == 0) {
            printf("%d ES MULTIPLO \n", act->dato);

            // si ant es NULL es porq es el primer nodo
            if (ant == NULL)
                l = act->sig;
            // sino es un nodo del medio
            else {
                ant->sig = act->sig;
            }
            aux = act;
            act = act->sig;
            free(aux);

        }
        else {
            ant = act;
            act = act->sig;
        }
    }


    printf("La cantidad de nodos de la lista 1 es: %d \n", cantidadNodos(l));

    printf("Imprime lista: \n");
    Imprimir(l);
    printf("\n");


    Eliminar(&l);

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


