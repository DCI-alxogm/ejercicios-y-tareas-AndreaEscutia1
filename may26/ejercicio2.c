#include <stdio.h>

// Función sin salida
void cuadrado(int num) {
    int resultado = num * num;
    printf("El cuadrado de %d es: %d\n", num, resultado);
}

int main() {
    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero);     // El usuario lo ingresa aquí
    cuadrado(numero);         // Se pasa como argumento a la función
    return 0;
}

