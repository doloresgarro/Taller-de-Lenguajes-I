/*3) a. Investigue las funciones de conversi�n de texto a n�mero y escriba un programa �calculadora.c� que
reciba dos n�meros enteros y un operador como argumentos a la funci�n main e imprima en pantalla el
resultado de la operaci�n. El operador debe ser: �+�, �-�, �/�, �.�. Si el operador recibido no es uno de los
mencionados anteriormente, entonces el programa debe imprimir un mensaje de error.
b. Utilice una terminal para compilar el programa a trav�s de la l�nea de comandos.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int resultado;
    int operador1 = atoi(argv[2]); //deberia ser operando jajaj
    int operador2 = atoi(argv[3]);


    switch (argv[1][0]) {
        case '+' : resultado = operador1 + operador2;
                break;

        case '-': resultado = operador1 - operador2;
                break;

        case '/': resultado = operador1 / operador2;
                break;

        case '.': resultado = operador1 * operador2;
                break;
        default: printf("Error");
    }

    printf("%s %s %s = %d", argv[2], argv[1], argv[3], resultado);

    return 0;
}
