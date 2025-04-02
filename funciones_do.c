#include <stdio.h>
#include <math.h>

int main() {
    double inicio, fin, paso, x;

  
    printf("Ingrese el valor inicial de x: ");
    scanf("%lf", &inicio);
    printf("Ingrese el valor final de x: ");
    scanf("%lf", &fin);
    printf("Ingrese el paso: ");
    scanf("%lf", &paso);

   
    if (paso <= 0) {
        printf("El paso debe ser un número positivo.\n");
        return 1;
    }

    
    printf("\n x\t   exp(x)\t log(x)\t   sin(x)\t cos(x)\t sqrt(x)\n");
    printf("------------------------------------------------------------------\n");

   
    x = inicio;

   
    do {
        printf("%6.2f\t%8.4f\t", x, exp(x));

        
        if (x > 0)
            printf("%8.4f\t", log(x));
        else
            printf("   - \t");
        
        printf("%8.4f\t%8.4f\t", sin(x), cos(x));

        
        if (x >= 0)
            printf("%8.4f\n", sqrt(x));
        else
            printf("   - \n");

        x += paso;
    } while (x <= fin);

    return 0;
}
