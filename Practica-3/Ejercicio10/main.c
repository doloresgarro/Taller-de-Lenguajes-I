#include <stdio.h>
#include <stdlib.h>

typedef enum {
    Bluetooth = 1,
    Wifi = 2,
    GPS = 4,
    Datos = 8,
    CamaraFrontal = 16,
    CamaraTrasera = 32,
    Linterna= 64,
    Vibrar = 128
} bits;

// lo declaro aca para que pueda ser utilizado en las funciones
const bits todosPrendidos = 0xFF;
const bits todosApagados = 0x00;

void Activar(bits *, bits);
void Desactivar(bits *, bits);
void Invertir(bits *, bits);
void Activo(bits, bits);

int main()
{
    bits celular = todosApagados; // todos en 0

    printf("%d\n", celular); // lo imprime apagado (0)
    Activar(&celular, Bluetooth);
    printf("Activa: %d\n", celular); // lo imprime perdido (1)


    celular = todosPrendidos;
    printf("%d\n", celular);
    Desactivar(&celular, CamaraFrontal); //me devuelve 239 porq hace 255-16
    printf("Desactiva: %d\n", celular);



    celular = todosPrendidos;
    printf("%d\n", celular);
    Invertir(&celular, CamaraFrontal);
    printf("Invierte: %d\n", celular);

    celular = todosPrendidos;
    // Determinar si un módulo esta activo
    Activo(celular, CamaraFrontal);



    return 0;
}

void Activar(bits *celular, bits prender) {
    *celular |= prender; // OR
}

void Desactivar(bits *celular, bits apagar) {
    *celular &= (~apagar); // NAND
}

void Invertir(bits *celular, bits invertido) {
    *celular ^= invertido; // deberia imprimir 239
}

void Activo(bits celular, bits nombre) {
    if (celular & nombre)
        printf("Esta activo ");
    else
        printf("Esta inactivo");
}
