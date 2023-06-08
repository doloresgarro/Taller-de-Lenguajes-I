#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    if (!argv[1]){
        printf("Error, no se recibio ningun argumento\n");
        return 0;
    }

    int suma = 0;
    printf("%d\n", argc);
    for (int i = 1; i < argc; i++){
        //printf("%d\n", atoi(argv[i]));
        suma += atof(argv[i]);
    }
    float promedio = suma/(argc-1);
    printf("%.2f", promedio);
}
