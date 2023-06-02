#include "cabecera.h"

// – Retorna una nueva pila. Se debe invocar antes de manipular cualquiera de ellas.
Stack* s_create () {
    Stack *s = (Stack *)malloc(sizeof(Stack)); //reservo un espacio p pila
    s->length = 0; //pila sin elementos

    return s;
}


// – Apila n en s. Retorna el elemento apilado.
int s_push(stack* s, int n){
    nodo *aux = (nodo *)malloc(sizeof(nodo)); //reservo espacio para apilar ese nodo
    aux->dato = n;       //al dato le asigno el num
    aux->sig = s->tope;  //el nuevo nodo apunta al tope
    s->tope = aux;       //la pila apunta al nuevo nodo
    s->length++;
    return n;
}

// – Desapila un elemento de s.
int s_pop (stack* s) {
    if (s->tope == NULL) //si la pila no tiene elementos que no desapile
        return -1;

    int n = s->tope->dato;   //para retornar el num q desapilo
    nodo *aux = s->tope;     //se guarda el tope para dsp liberarlo
    s->tope = s->tope->sig;  //avanza con el tope
    free (aux);
    s->length--;

    return n;

}

// – Retorna el próximo elemento que será desapilado.
int s_top (stack s) {
    if (s.tope == NULL)
        return -1;

    return s.tope->dato;

}

// – Retorna 1 si s está vacía, 0 en caso contrario.
int s_empty(stack s) {
    if ((s.tope == NULL) || (s.length == 0))
        return 1;
    else
        return 0;
}

//– Retorna la cantidad de elementos apilados en s.
int s_length(stack s) {
    return s.length;
}
