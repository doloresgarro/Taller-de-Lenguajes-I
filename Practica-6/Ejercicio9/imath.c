

int potencia(int x, int y) {
    if (y == 0)
        return 1;
    else
        return (x * potencia(x, y-1));
}


int cuadrado(int x) {
    return (x*x);
}


int cubo(int x) {
    return (x*x*x);
}

int absoluto(int i) {
    if (i < 0)
        return (i * (-1));
    else
        return i;
}

int factorial (int x) {
    if (x <= 1)
        return 1;
    else
        return (x * factorial(x-1));
}


int sumatoria (int i) {
    int suma = 0;
    for (int j = 0; j <= i; j++)
        suma += j;
    return suma;
}

//– Retorna 1 si y es divisor de x, 0 en otro caso.
int multiplo (int x, int y) {
    if (x % y == 0)
        return 1;
    else
        return 0;
}

//Retorna 1 si y es múltiplo de x, 0 en otro caso.
int divisor (int x, int y){
    if (x % y == 0)
        return 1;
    else
        return 0;
}
//Retorna 1 si i es par, 0 en otro caso.
int par (int i) {
    if (i % 2 == 0)
        return 1;
    else
        return 0;
}

//Retorna 1 si i es impar, 0 en otro caso.
int impar (int i) {
    if (i % 2 == 0)
        return 0;
    else
        return 1;
}


