/*5. Escriba un programa que reserve en forma dinámica un arreglo de 100 caracteres. A continuación, lea
10 oraciones utilizando la función gets e informe para cada una de ellas la cantidad de letras
minúsculas y de letras mayúsculas que la componen. Utilice el arreglo creado como variable temporal
para procesar cada oración. Por último, libere la memoria reservada dinámicamente.*/

#include <stdio.h>
#include <stdlib.h>
#define NUM 3

void f (char **p, int);
void ImprimirContenido(char *, int);
void Analizar(char **, int);
int main()
{

    char * ptr = NULL;
    f(&ptr, NUM);

    for (int i = 0; i < NUM; i ++){
        printf("Ingrese una palabra:\n ");
        Analizar(&ptr, NUM);
        printf("\n");
    }

    ImprimirContenido(ptr, NUM);
    free(ptr);

    return 0;
}
void f (char ** ptr, int N) {
    *ptr = (char *) malloc(N*sizeof(char));
}

void ImprimirContenido(char *ptr, int N){
    for (int i = 0; i < N; i ++)
        printf("%d ", ptr[i]);
}

void Analizar(char **ptr, int N) {
    int mayus = 0, minus = 0;
    //leo oracion  A ... Z, a..z
    gets(*ptr); // dolores --> hola --> holares
    for (int i = 0; (*ptr)[i] != '\0'; i++) {
        if (( (*ptr)[i] - 'A' >= 0) && (((*ptr)[i] - 'Z') <= 0))
            mayus ++;
        else {
            if (( (*ptr)[i] - 'a' >= 0) && (((*ptr)[i] - 'z') <= 0))
                minus ++;
        }
    }
    printf("La palabra %s tiene %d mayusculas y %d minusculas", *ptr, mayus, minus);

}
