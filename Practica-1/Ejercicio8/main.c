#include <stdio.h>
#include <stdlib.h>

int main()
{
/*inciso a*/
  int edad;
  printf("Ingrese edad: ");
  scanf("%d", &edad);

  if (edad >= 40)
    printf("Tiene %d años o más \n", 40);
  else
    printf("Tiene menos de %d años \n", 40);

//--------------------------------------------
/*inciso b*/

  int total, x;
  x = 1;
  total = 0;
  while (x <= 10) {
   total += x;
   ++x;
  }
  printf("Total = %d \n",total);



//--------------------------------------------
/*inciso c*/
  int valor;

  printf("Ingrese un valor: ");
  scanf("%d",&valor);

  switch (valor % 2) {
  case 0: printf("El valor es par \n");
  break;
  case 1: printf("El valor es impar \n");
  break;
  }


//--------------------------------------------
/*inciso d*/

  int z, y;
  printf("Ingrese el primer valor: ");
  scanf("%d", &z);
  printf("Ingrese el segundo valor: ");
  scanf(" %d", &y);
  printf("z + y = %d ",z+y);

  return 0;
}


