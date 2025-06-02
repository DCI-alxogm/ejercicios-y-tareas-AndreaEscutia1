#include <stdio.h>

// Función sin argumentos de entrada, pero con argumento de salida
int cuadrado() {
    int num = 7;
    return num * num;
}

int main() {
    int resultado = cuadrado();
    printf("El cuadrado de 7 es: %d\n", resultado);
    return 0;
}

