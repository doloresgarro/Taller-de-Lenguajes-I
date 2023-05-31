/*
a) ¿El código compila? ¿Por qué?
    Si porque el preprocesador le manda al compilador unicamente las partes que compilan.

b) ¿Qué sucedería al cambiar la constante simbólica DEBUG al valor 1? Evalúe el comportamiento del
código. ¿Qué beneficios trae en este caso la compilación condicional?
    No compila porque entra al IF porque es distinto de 0.
    Para agregar funcionalidades nuevas

c) ¿Es posible cambiar el valor de la constante simbólica DEBUG en tiempo de ejecución? No

d) ¿Qué sucede si en lugar de utilizar la directiva #if se emplea #ifdef? ¿Incide el valor de la
constante simbólica DEBUG en el resultado de la compilación? ifdef --> pregunta si esta o no DEBUG
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
