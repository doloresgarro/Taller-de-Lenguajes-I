/*
a) �El c�digo compila? �Por qu�?
    Si porque el preprocesador le manda al compilador unicamente las partes que compilan.

b) �Qu� suceder�a al cambiar la constante simb�lica DEBUG al valor 1? Eval�e el comportamiento del
c�digo. �Qu� beneficios trae en este caso la compilaci�n condicional?
    No compila porque entra al IF porque es distinto de 0.
    Para agregar funcionalidades nuevas

c) �Es posible cambiar el valor de la constante simb�lica DEBUG en tiempo de ejecuci�n? No

d) �Qu� sucede si en lugar de utilizar la directiva #if se emplea #ifdef? �Incide el valor de la
constante simb�lica DEBUG en el resultado de la compilaci�n? ifdef --> pregunta si esta o no DEBUG
No incide ya que pregunta solo si esta definida o no


*/


#include <stdio.h>
#include <stdlib.h>
#define DEBUG 1


int main(){
    int x= 15;

    while (x < 50){
        #ifdef DEBUG
            printf("x= %d", x);
            y= y+1;
        #endif
        x++;
    }

    return 0;
}
