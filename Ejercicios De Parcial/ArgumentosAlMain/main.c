#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    if (!argv[1])
        printf("Error, no se recibio ninguna palabra\n");
    else {
        int i;
        for (i = 1; i < argc; i++)
            printf("%s ", argv[i]);
    }

    return 0;
}
