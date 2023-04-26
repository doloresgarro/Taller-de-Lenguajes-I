/*s. Este formato
utiliza 3 componentes (Red, Green, Blue) de 8 bits para codificar un píxel de color, requiriendo 3 bytes
o 24 bits de memoria. Hace muchos años cuando surgieron los primeros teléfonos a color se utilizó un
formato RGB reducido a 2 bytes o 16 bits (Red:5 bits, Green:6 bits, Blue: 5 bits) para reducir el espacio
de almacenamiento y mejorar las velocidades de transferencia. */

#include <stdio.h>
#include <stdlib.h>

typedef struct { // ocupa 24 bits --> 8 c/u
    unsigned int red: 8;
    unsigned int green: 8;
    unsigned int blue: 8;
}RGB24;

typedef struct { // ocupa 16 bits
    unsigned int red: 5;
    unsigned int green: 6;
    unsigned int blue: 5;
}RGB16;

RGB24 Convertir16a24(RGB16); //devuelve un nuevo rg24
RGB16 Convertir24a16(RGB24); //devuelve un nuevo rg16
void verBits(unsigned, unsigned); //convierte a binario
void imprimir24(RGB24);
void imprimir16(RG16); //NO COMPILA POR ESTOOOOOOOOOOOOOOOOOOOO, pero lo hace bien

int main()
{
    RGB16 pixel16;

    pixel16.red = 30;
    pixel16.green = 15;
    pixel16.blue = 3;


    RGB24 pixel16NUEVO;
    printf("%d red - %d blue - %d green\n", pixel16.red, pixel16.blue, pixel16.green);
    pixel16NUEVO = Convertir16a24(pixel16);
    printf("%d red - %d blue - %d green\n", pixel16NUEVO.red, pixel16NUEVO.blue, pixel16NUEVO.green);

    RGB24 pixel24;

    pixel24.red = 200;
    pixel24.green = 59;
    pixel24.blue = 154;

    printf("%d red - %d blue - %d green\n", pixel24.red, pixel24.blue, pixel24.green);
    RGB16 pixel24NUEVO;
    pixel24NUEVO = Convertir24a16(pixel24);
    printf("%d red - %d blue - %d green\n", pixel24NUEVO.red, pixel24NUEVO.blue, pixel24NUEVO.green);

    imprimir16(pixel24NUEVO);
    printf("\n");
    imprimir24(pixel16NUEVO);
    printf("\n");

    return 0;
}

void imprimir16(RGB16 color16){
  printf("Color 16 bits:\n");
  printf("red: ");
  verBits(color16.red, 5);
  printf("green: ");
  verBits(color16.green, 6);
  printf("blue: ");
  verBits(color16.blue, 5);
  printf("\n");
}

void imprimir24(RGB24 color24){
  printf("Color 24 bits:\n");
  printf("red: ");
  verBits(color24.red, 8);
  printf("green: ");
  verBits(color24.green, 8);
  printf("blue: ");
  verBits(color24.blue, 8);
  printf("\n");
}

RGB24 Convertir16a24(RGB16 pixel16) {
   RGB24 pixelNuevo24; //creo el pixel24 que voy a devolver

   pixelNuevo24.red = pixel16.red >> 3;
   pixelNuevo24.blue = pixel16.blue >> 3;
   pixelNuevo24.green = pixel16.green >> 2;

   return pixelNuevo24;
}

RGB16 Convertir24a16(RGB24 pixel24) {
   RGB16 pixelNuevo16; //creo el pixel24 que voy a devolver

   pixelNuevo16.red = pixel24.red;
   pixelNuevo16.blue = pixel24.blue;
   pixelNuevo16.green = pixel24.green;

   return pixelNuevo16;
}


void verBits(unsigned valor, unsigned bits)
{

  unsigned Mascara = 1 << bits - 1;

  for (int i = 1; i <= bits; i++)
  {
    putchar(valor & Mascara ? '1' : '0');
    valor = valor << 1;

    if (i % 8 == 0)
      putchar(' ');
  }
  putchar('\n');
}
