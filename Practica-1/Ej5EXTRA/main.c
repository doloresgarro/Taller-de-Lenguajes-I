/* 5. Realizar un programa que simule un juego que utiliza dos dados. Las reglas del juego son las
siguientes:
 Si en cualquier jugada los dados suman 2 o 12, el jugador pierde.
 Si en la primer jugada los datos suman 7 u 11, el jugador gana.
 Si en la primer jugada los dados no suman 2, 7, 11 ni 12, el jugador deberá seguir
arrojando los dados hasta conseguir el número obtenido en la primer jugada para ganar*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void TirarDados(int *);
int main()
{
    srand(time(NULL));
    int suma, boolean;
    boolean = 0; //para q termine
    suma = 0;
    TirarDados(&suma);

    while (boolean != 1) {
        if ((suma == 7) || (suma == 11)) {
                boolean = 1;
                printf("Ganaste, tus dados suman %d", suma);
            }
        else {
            if ((suma == 2) || (suma == 12)) {
            boolean = 1;
            printf("Perdiste, tus dados suman %d", suma);
        }
            else {
                suma = 0;
                printf("Tiras de nuevo \n");
                TirarDados(&suma);
            }
        }
    }
    return 0;

}
void TirarDados(int *suma) {

    int tiro;
    for (int i = 1; i < 3; i++) {
        tiro =(1 + (rand() % 6));
        printf("Tiro n%d: %d \n",i, tiro );
        *suma = *suma + tiro;
    }
}

