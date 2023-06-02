/*10. a. Implemente la biblioteca istack.h, la cual debe contener tipos y operaciones necesarias para
manipular una estructura de datos pila que almacene números enteros.
Una pila es una estructura de datos homogénea y dinámica.

El acceso a la misma se dice que es de tipo LIFO (Last In First Out), lo que
quiere decir que los elementos se recuperan en el orden inverso en que fueron insertados. Implemente al
menos las siguientes funciones:
a. Stack* s_create () – Retorna una nueva pila. Se debe invocar antes de
manipular cualquiera de ellas.
b. int s_push(stack* s, int n) – Apila n en s. Retorna el elemento apilado.
c. int s_pop (stack* s) – Desapila un elemento de s.
d. int s_top (stack s) – Retorna el próximo elemento que será desapilado.
e. int s_empty(stack s) – Retorna 1 si s está vacía, 0 en caso contrario.
f. int s_length(stack s) – Retorna la cantidad de elementos apilados en s.
*/

#include <stdio.h>
#include <stdlib.h>
#include "istack.h"

int main()
{   Stack *s = s_create();

    int num;
    printf("Ingrese numero para apilar: ");
    scanf("%d", &num);

    while(num != 0) {
        s_push(s, num);
        printf("Ingrese numero para apilar: ");
        scanf("%d", &num);
    }

    while(!s_empty(*s))
        printf("Desapilado: %d \n", s_pop(s));

    return 0;
}
