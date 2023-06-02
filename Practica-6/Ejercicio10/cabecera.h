#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED

struct lista{
    int dato;
    struct lista *sig;
};

typedef struct lista nodo; //le mando la direccion a la direccion


struct stack{
    int length;
    nodo *tope; //puntero de pila
};
typedef struct stack Stack;


Stack* s_create ();             // – Retorna una nueva pila. Se debe invocar antes de manipular cualquiera de ellas.
int s_push(stack* s, int n);    // – Apila n en s. Retorna el elemento apilado.
int s_pop (stack* s);           // – Desapila un elemento de s.
int s_top (stack s);            // – Retorna el próximo elemento que será desapilado.
int s_empty(stack s);           // – Retorna 1 si s está vacía, 0 en caso contrario.
int s_length(stack s);          // – Retorna la cantidad de elementos apilados en s.


#endif // CABECERA_H_INCLUDED
