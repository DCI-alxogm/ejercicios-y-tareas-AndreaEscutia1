#include <stdio.h>

int main() {
    float T_inicial, T_final;
    int n = 20;
    float TC[20], TK[20];


    printf("¿Cual es la temperatura inicial en Celsius? ");
    scanf("%f", &T_inicial);

    printf("¿Cual es la temeperatura final en Celsius?");
    scanf("%f", &T_final);

    float delta = (T_final - T_inicial) / (n - 1);


    for (int i = 0; i < n; i++) {
        TC[i] = T_inicial + i * delta;
        TK[i] = TC[i] + 273.15;
    }
printf("\n i\tTC (°C)\t\tTK (K)\n");
    printf("-------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%2d\t%7.2f\t%7.2f\n", i, TC[i], TK[i]);
    }

    return 0;
}
