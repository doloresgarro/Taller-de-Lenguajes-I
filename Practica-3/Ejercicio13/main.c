/*.Reimplemente todos los ítems del ejercicio 10 utilizando campos de bits para definir el estado de cada
módulo del dispositivo.*/
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    unsigned int Bluetooth: 1;
    unsigned int Wifi: 1;
    unsigned int GPS: 1;
    unsigned int Datos: 1;
    unsigned int CamaraFrontal: 1;
    unsigned int CamaraTrasera: 1;
    unsigned int Linterna: 1;
    unsigned int Vibrar: 1;
} bits;

typedef enum {
    Bluetooth = 1,
    Wifi = 2,
    GPS = 4,
    Datos = 8,
    CamaraFrontal = 16,
    CamaraTrasera = 32,
    Linterna= 64,
    Vibrar = 128
} index;

// lo declaro aca para que pueda ser utilizado en las funciones
//const bits todosPrendidos = 0xFF;
//const bits todosApagados = 0x00;

void Activar(bits *, unsigned int);
void Desactivar(bits *, unsigned int);
void mostrarEstado(bits);

int main()
{
    bits celular = {0}; // todos en 0
    mostrarEstado(celular);// lo imprime apagado (0)

    Activar(&celular, 1); //me prende el 1
    mostrarEstado(celular); // lo imprime perdido (1)

    mostrarEstado(celular);
    Desactivar(&celular, CamaraFrontal);
    mostrarEstado(celular);


    return 0;
}

void Activar(bits *celular, unsigned int correr) {
    unsigned int *ptr = (unsigned int *)celular;
    *ptr |= (1 << correr); // OR
}

void prender(bits *d, unsigned int index) {
    unsigned int *ptr = (unsigned int *)d;
    *ptr |= (1 << index);
}


void Desactivar(bits *celular, unsigned int index) {
    unsigned int *ptr = (unsigned int *)celular;
    *ptr &= ~(1 << index); // NAND
}


void mostrarEstado(bits d) {
    unsigned int *ptr = (unsigned int *)&d;
    printf("Estado: %d\n", *ptr);
}
