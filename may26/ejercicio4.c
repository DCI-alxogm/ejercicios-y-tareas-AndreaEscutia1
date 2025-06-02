#include <stdio.h>

// Con argumentos de salida pero sin argumentos de entrada
int obtenerValor() {
    return 42;
}

// Arreglos: entrada con arreglo y sin salida
void imprimirDoble(int arreglo[], int tam) {
    printf("Doble de cada elemento:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arreglo[i] * 2);
    }
    printf("\n");
}

// Arreglos: entrada y salida con arreglo
void elevarAlCuadrado(int entrada[], int salida[], int tam) {
    for (int i = 0; i < tam; i++) {
        salida[i] = entrada[i] * entrada[i];
    }
}

int main() {
    // Función con salida, sin entrada
    int valor = obtenerValor();
    printf("Valor devuelto: %d\n", valor);

    // A. Con arreglo: entrada sin salida
    int datos[] = {1, 2, 3, 4};
    imprimirDoble(datos, 4);

    // B. Con arreglo: entrada y salida
    int cuadrados[4];
    elevarAlCuadrado(datos, cuadrados, 4);
    printf("Elementos al cuadrado:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", cuadrados[i]);
    }
    printf("\n");

    return 0;
}
