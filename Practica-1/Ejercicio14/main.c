/*Escriba una función que reciba un número entero y retorne el número resultante de invertir la posición
de todos sus dígitos. Por ejemplo, si se pasa como argumento el número 1234 la función deberá retorna el número 4321.*/

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
