/*Escriba un programa que imprima la ra�z cuadrada, el cuadrado y el cubo de los n�meros enteros comprendidos en el
 rango 1..10. Nota: para calcular la ra�z cuadrada y la potencia de un n�mero investigue las funciones sqrt() y pow(),
ambas de la librer�a . */

#include <stdio.h>
#include <math.h>
int main()
{  int i, p2, p3;
   p2=2;
   p3=3;
   for (i = 1; i <= 10; i++) {
     printf("El numero es %d\n",i);
     printf("Su raiz cuadrada es %f\n", sqrt(i));
     printf("Su cuadrado es %f\n", pow(i,p2));
     printf("Su cubo es %f\n", pow(i,p3));
   }
}
