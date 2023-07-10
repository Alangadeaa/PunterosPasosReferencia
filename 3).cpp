#include <stdio.h>

void carga(int n, int Vector[]);
void imprimir(int n, int Vector[]);

int main() {
    int n = 5;                      // Se declara el valor de 'n' como 5
    int V[n];                       // Se crea un vector de tama�o 'n'
    carga(n, V);                    // Se pasan los valores al vector utilizando la funci�n 'carga'
    imprimir(n, V);                 // Se pasan los valores del vector a la funci�n 'imprimir'
    printf("\n");                   // Se imprime un salto de l�nea

    for (int i = 0; i < n; i++) {    // Se crea un bucle 'for'
        printf("%5d", V[i]);         // Se imprime el valor del vector en la posici�n 'i'
    }

    return 0;
}

void carga(int n, int Vector[]) {   // Funci�n 'carga' para ingresar valores al vector
    for (int i = 0; i < n; i++) {    // Se crea un bucle 'for'
        printf("Ingrese el valor de la posici�n %d: ", i);  // Se imprime un texto solicitando el valor
        scanf("%d", &Vector[i]);     // Se escanea el valor ingresado por el usuario y se guarda en el vector
    }
}

void imprimir(int n, int Vector[]) {    // Funci�n 'imprimir' para mostrar los valores del vector
    for (int i = 0; i < n; i++) {        // Se crea un bucle 'for'
        printf("\n%5d", Vector[i]);      // Se imprime el valor del vector en la posici�n 'i'
    }
    printf("\n");                       // Se imprime un salto de l�nea
}

