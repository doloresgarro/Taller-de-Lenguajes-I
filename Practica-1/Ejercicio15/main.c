/*Para todo número natural n, se llama factorial de n al producto de todos los naturales desde 1 hasta n:
Escriba una función que reciba como parámetro un número entero y retorne como resultado el número factorial
del mismo
a. Resolviéndolo de forma iterativa.
b. Resolviéndolo de forma recursiva*/

#include <stdio.h>

int factorial (int); /* devuelve un entero. No es necesario mandarle los nombres de las variables,
se puede mandar solo el tipo de dato */
int main()
{
  int num;

  printf("Ingrese un numero natural: ");
  scanf("%d", &num);


  printf("El factorial de %d es %d ",num, factorial(num));
}
int factorial (int num)
{ /*seccion de funciones*/
  int fact;
  fact = 1;
  for (int i = num; i >= 1; i--) {
    fact *= i;
  }
  return fact;
}

