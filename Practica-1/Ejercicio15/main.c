/*Para todo n�mero natural n, se llama factorial de n al producto de todos los naturales desde 1 hasta n:
Escriba una funci�n que reciba como par�metro un n�mero entero y retorne como resultado el n�mero factorial
del mismo
a. Resolvi�ndolo de forma iterativa.
b. Resolvi�ndolo de forma recursiva*/

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

