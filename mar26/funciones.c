#include <stdio.h>
#include <math.h>

int main(){
 double inicio, fin, espaciado, x;

    printf("Ingrese el valor inicial del intervalo:\n");
    scanf("%lf", &inicio);
    printf("Ingrese el valor final del intervalo:\n");
    scanf("%lf", &fin);
    printf("Ingrese el valor del espaciado:\n");
    scanf("%lf", &espaciado);

 printf("\n x\t   exp(x)\t log(x)\t   sin(x)\t cos(x)\t sqrt(x)\n");
 printf("------------------------------------------------------------------\n");
 for (x = inicio; x <= fin; x += espaciado) {
        double logValue = (x > 0) ? log(x) : NAN;
        double sqrtValue = (x >= 0) ? sqrt(x) : NAN;

       printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x, exp(x), logValue, sin(x), cos(x), sqrtValue);
}

return 0;
}
