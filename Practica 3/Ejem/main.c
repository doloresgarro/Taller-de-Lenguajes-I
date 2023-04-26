#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int min;
    char menor[20];
    char aux[20];

    scanf("%s", aux);
    int ejemplo = 1234;
    min = strlen(ejemplo);
    printf("%d", min);
    strcpy(menor, aux);

    while (!strcmp(aux, "FIN")) {
        if (strlen(aux) < min) {
            strcpy(menor, aux);
            min = strlen(aux);
        }
        scanf("%s", aux);
    }

    printf("menor %s con %d", menor, min);

    return 0;
}
