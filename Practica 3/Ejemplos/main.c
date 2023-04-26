#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CONST 5


void Reemplazar1(char [], int);
void Reemplazar2(char *, int);
int main()
{

   char cadena [CONST] = "hola";
   Reemplazar1(cadena, CONST);
   Reemplazar2(cadena, CONST);

    return 0;
}

void Reemplazar1(char v[], int cant) {
    for (int i = 0; i < cant; i ++) {
        if (v[i] == " ") {
            v[i] = '\0';
            break;
        }
    }
}

void Reemplazar2(char *p, int cant) {
    for (int i = 0; i < cant; i ++) {
        if (*(p+i) == " ") {
            *(p+i) = '\0';
            break;
        }
    }
}


