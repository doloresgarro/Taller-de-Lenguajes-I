/*Desarrolle una funci�n llamada damePar(), la cual debe retornar un n�mero entero. damePar() devuelve 0 en el primer
 llamado, 2 en el segundo, 4 en el tercero, y as� sucesivamente. Luego, escriba un programa que lea un n�mero entero
 positivo n desde teclado y utilizando damePar() imprima los primeros n n�meros pares. No utilice variables globales*/

#include <stdio.h>
#include <stdlib.h>

int damePar();
int main()
{
    int n, i;
    printf("Ingrese cantidad de veces: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
       printf("El numero par es %d \n", damePar());
    }

    return 0;
}
int damePar() {
    static int a = -2;
    a += 2;
    return a;
}
