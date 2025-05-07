#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *parabola_b, *fp;
    int n=15, i;
    float Lim_inf, Lim_sup, delta, x[n], y[n];

    
    parabola_b = fopen("test.txt", "r");
    fscanf(parabola_b, "%d", &n);
    fscanf(parabola_b, "%f", &Lim_inf);
    fscanf(parabola_b, "%f", &Lim_sup);
    fclose(parabola_b);

    delta = (Lim_sup - Lim_inf) / (n - 1);

    for (i = 0; i < n; i++) {
        x[i] = Lim_inf + i * delta;
        y[i] = x[i] * x[i] + 1;
    }

    fp = fopen("parabola.txt", "w");
    
     for (i = 0; i < n; i++) {
     fprintf(fp, "f(%.2f) = %.2f\n", x[i], y[i]);
    }

    fclose(fp);
    return 0;
}
