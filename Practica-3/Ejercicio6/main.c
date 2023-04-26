#include <stdio.h>
#include <stdlib.h>


union hack {
    struct {
        short int anio;
        char mes;
        char dia; //para q sea del mismo tamaño que el compara
    } f;
    int compara; //ocupa 4
};

typedef union hack tiempo_hack; //ASI LO PIDEN EN EL EXAMEN!!!!!!!!!!!!!!!!!!!

int main()
{


    //declaro variables
    tiempo_hack x;
    tiempo_hack y;

    x.f.anio = 1;
    x.f.mes = 2;
    x.f.dia = 2; //guardar solo el numero porq esq un entero de 8 bits

    y.f.anio = 202;
    y.f.mes =  4;
    y.f.dia = 4;

    if (x.compara > y.compara)
        printf("fecha 1 es mayor a fecha 2");
    else
        printf("fecha 2 es mayor a fecha 1");



    return 0;
}
