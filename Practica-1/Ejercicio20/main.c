/*Desarrolle una función llamada damePar(), la cual debe retornar un número entero. damePar() devuelve 0 en el primer
 llamado, 2 en el segundo, 4 en el tercero, y así sucesivamente. Luego, escriba un programa que lea un número entero
 positivo n desde teclado y utilizando damePar() imprima los primeros n números pares. No utilice variables globales*/

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
