#include <stdio.h>
#include <stdlib.h>

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
  if (num <= 1)
    fact = 1;
  else
    fact = num * factorial(num-1);
  return fact;
}

