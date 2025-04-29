#include <stdio.h>
int main(){
int i, n=10;
float TP[n], LG[n];
double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;
float a, b;

printf("Ingrese las mediciones de Temperatura en Celsius y la longitud  (cm):\n");
for (i=0;i<n;i++){
printf ("ingrese la medicion de la temperatura:");
scanf("%f",&TP[i]);
printf("ingrese la medicion de la longitud:");
scanf("%f",&LG[i]);
}
    // Cálculo de sumatorias
for (i=0;i<n;i++){
        sum_y += LG[i];
        sum_xy += TP[i] * LG[i];
        sum_x2 += TP[i] * TP[i];
    }
// Cálculo de a (pendiente) y b (ordenada al origen)    
    a = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    b = (sum_y - a * sum_x) / n;

    printf("Interpretación:\n");
    printf("  - Pendiente (%.4lf) representa el cambio de longitud por grado Celsius.\n", a);
    printf("  - Ordenada al origen (%.4lf) representa la longitud inicial a 0°C.\n", b);
  return 0;
}
