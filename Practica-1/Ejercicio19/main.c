/*Una escuela primaria desea evaluar si sus alumnos son capaces de resolver operaciones matemáticas de
suma de números enteros. Para ello se pide realizar un programa que muestre al alumno 4 operaciones de
suma y le pida que ingrese sus correspondientes resultados. Los operandos de las operaciones a resolver
deben ser generados aleatoriamente y deben estar en el rango de 0 a 100. Cada operación respondida de
forma correcta suma 1 punto. Al finalizar informar la nota obtenida por el alumno de acuerdo a la siguiente tabla:
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char CalcularPuntaje(int);
int main()
{
    int i, operador1, operador2, resultado, total;
    srand(time(NULL));
    total = 0;
    for (i = 0; i < 4; i++){
        operador1 = rand() % 101;
        operador2 = rand() % 101;

        printf("%d + %d ", operador1, operador2);
        printf(" = ");
        scanf("%d", &resultado);

        if (resultado == (operador1 + operador2)) {
            printf("Respuesta correcta \n");
            total++;}
        else
            printf("Respuesta incorrecta \n");
    }
    printf("La nota obtenida es: %c ", CalcularPuntaje(total));

    return 0;
}
char CalcularPuntaje(int total){
    char nota;
    switch(total)
    {
        case 0: nota = 'E';
        break;
        case 1: nota = 'D';
        break;
        case 2: nota = 'C';
        break;
        case 3: nota = 'B';
        break;
        case 4: nota = 'A';
        break;
    }
    return nota;
}
