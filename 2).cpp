#include <stdio.h>

int main() {
    int x, *y; // Declara una variable entera 'x' y un puntero a entero 'y'
    x = 10; // Asigna el valor 10 a la variable 'x'
    y = &x; // El puntero 'y' apunta a la posici�n de memoria de 'x'

    printf("%d %d %d", y, *y, &y);
    // Imprime la posici�n de memoria de 'x', el valor almacenado en 'x'
    // y la posici�n de memoria del puntero 'y'

    return 0;
}

