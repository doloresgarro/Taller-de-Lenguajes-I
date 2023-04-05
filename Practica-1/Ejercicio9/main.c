/*Escriba un programa que lea 2 n�meros enteros y un car�cter, el cual debe corresponderse con un
operador matem�tico (+, -, /, x), y a partir de ellos imprima el resultado de realizar la operaci�n
pedida en pantalla. En caso de que el car�cter no represente un operador v�lido, imprima un mensaje de error.
Reflexione sobre las diferentes estructuras de control que puede utilizar*/

#include <stdio.h>

int main()
{
  int valor1, valor2;
  printf("Ingrese el primer valor: ");
  scanf("%d",&valor1);
  printf("Ingrese el segundo valor: ");
  scanf("%d",&valor2);

  char operador;
  printf("Ingrese un operador: ");
  scanf(" %c",&operador);

  switch (operador) {
  case ('+'): printf("El resultado de la suma es = %d ", valor1 + valor2);
  break;
  case ('-'): printf("El resultado de la resta es = %d ", valor1 - valor2);
  break;
  case ('*'): printf("El resultado de la multiplicacion es = %d ", valor1 * valor2);
  break;
  case ('/'): printf("El resultado de la division es = %d ", valor1 / valor2);
  break;
  default: printf("El operador no es ninguno de +,-,*,/");
  }

}
