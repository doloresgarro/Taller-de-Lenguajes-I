/*Escriba una funci�n que reciba un n�mero entero y retorne el n�mero resultante de invertir la posici�n
de todos sus d�gitos. Por ejemplo, si se pasa como argumento el n�mero 1234 la funci�n deber� retorna el n�mero 4321.*/

#include <stdio.h>
int invertido(int);
int main()
{
  int num;
  printf("Ingrese un entero: ");
  scanf("%d", &num);

  printf("El invertido es: %d", invertido(num));


}
int invertido(int num)
{
  int dig, invertido;
  invertido = 0;
  while (num != 0) {
    dig = num % 10;
    invertido *= 10;
    invertido += dig;
    num /= 10;
  }
  return invertido;
}
