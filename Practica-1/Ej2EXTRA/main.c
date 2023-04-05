/*Escriba un programa que lea un número natural e imprima en pantalla la representación binaria
de su valor utilizando. Implemente dos soluciones:
 Resolviéndolo de forma iterativa.
 Resolviéndolo de forma recursiva.*/

#include <stdio.h>
#include <stdlib.h>
int binarioIterativo(int);
int binarioRecursivo(int, int, int);
int main()
{
    int num, binario, aux;
    binario = 0;
    aux = 1;
    printf("Ingrese un numero natural: ");
    scanf("%d", &num);


    printf("ITERATIVO: El num %d en binario es %d", num, binarioIterativo(num));
    printf("RECURSIVO: El num %d en binario es %d", num, binarioRecursivo(num, binario, aux));

    return 0;
}
int binarioIterativo(int num) {
    int binario, dig, aux;
    binario = 0;
    aux = 1;
    while (num != 0) {
        dig = num % 2;
        binario = dig * aux + binario;
        aux *= 10;
        num /= 2;
    }
    return binario;
}

int binarioRecursivo(int num; int binario, int aux) {
    int dig;
    if (num = 0) //caso base
        return binario;
    else {
        dig = num % 2;
        binario = dig * aux + binario;
        binario = binarioRecursivo(num/2, binario, aux *10);
    }
}




