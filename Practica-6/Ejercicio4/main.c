/**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SQUAREOF(x) (x)*(x) //

int main() {
    int xin=3;

    printf("\nxin=%i",xin);
    printf("\nSQUAREOF(xin)=%i", SQUAREOF(xin)); //9
    printf("\nSQUAREOF(xin+4)=%i", SQUAREOF(xin+4)); // hace esto --> 3 + (4 * 3) + 4  = 19. Entonces le pongo parentesis a cada x
    printf("\nSQUAREOF(xin+xin)=%i", SQUAREOF(xin+xin)); //15

}
