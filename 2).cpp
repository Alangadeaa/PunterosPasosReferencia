#include <stdio.h>

int main() {
    int x, *y; // Declara una variable entera 'x' y un puntero a entero 'y'
    x = 10; // Asigna el valor 10 a la variable 'x'
    y = &x; // El puntero 'y' apunta a la posición de memoria de 'x'

    printf("%d %d %d", y, *y, &y);
    // Imprime los resultados 

    return 0;
}

