#include <stdio.h>

int main() {
    int filas, columnas;
    float delta;

    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);
    printf("Ingrese el valor de delta (espaciado entre puntos): ");
    scanf("%f", &delta);

    printf("\nCoordenadas generadas:\n");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            float x = j * delta;
            float y = i * delta;
            printf("(%.2f, %.2f)\n", x, y);
        }
    }

    return 0;
}
