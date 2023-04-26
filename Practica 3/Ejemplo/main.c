#include <stdio.h>
#include <stdlib.h>

enum ejemplo {diml = 10, dimf};

int main()
{
    int vector[diml] = {0};
    int a = 1;
    int b = 2;
    int c = 3;

    a = b = c;
    printf("%d", a);
    return 0;
}
