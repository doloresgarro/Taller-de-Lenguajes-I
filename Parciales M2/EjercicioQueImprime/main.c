#include <stdio.h>
#include <stdlib.h>


//imprime Nada Hola Hola --> siiiiiii
void singleton(char *s);
int main(){
    char texto[] = "Hola\0 ?";
    singleton(texto);
    singleton("Desde");
    singleton("Casa");
    return 0;
}

void singleton(char * s) {
    static char * p1 = NULL;
    if (p1==NULL){
        p1 = s;
        printf("Nada\n");
    }
    else
        printf("%s\n", p1);
}
