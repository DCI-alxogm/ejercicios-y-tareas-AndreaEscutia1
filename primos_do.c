#include <stdio.h>

int esPrimo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int inicio, fin, contador, i;

    do {
#include <stdio.h>

int esPrimo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

{
    int inicio, fin, contador, i;

    do {
        
        printf("Ingrese el valor inicial del intervalo: ");
        scanf("%d", &inicio);
        printf("Ingrese el valor final del intervalo: ");
        scanf("%d", &fin);

        
        if (inicio > fin) {
            printf("El valor inicial debe ser menor o igual al valor final.\n");
            continue;
        }

      
        contador = 0;
        i = inicio;
        do {
            if (esPrimo(i)) {
                contador++;
            }
            i++;
        } while (i <= fin);

        
        if (contador > 100) {
            printf("El intervalo contiene más de 100 números primos. Inténtelo de nuevo.\n");
        }
    } while (contador > 100);

    
    printf("\nHay %d números primos en el intervalo [%d, %d]:\n", contador, inicio, fin);

    int cuenta = 0; 
    i = inicio;
    do {
        if (esPrimo(i)) {
            printf("%d\t", i);
            cuenta++;

           
            if (cuenta % 20 == 0) {
                printf("\n");
            }
        }
        i++;
    } while (i <= fin);

    printf("\n");
    return 0;
}
       
       printf("Ingrese el valor inicial del intervalo: ");
        scanf("%d", &inicio);
        printf("Ingrese el valor final del intervalo: ");
        scanf("%d", &fin);

        if (inicio > fin) {
            printf("El valor inicial debe ser menor o igual al valor final.\n");
            continue;
        }

        contador = 0;
        i = inicio;
        do {
            if (esPrimo(i)) {
                contador++;
            }
            i++;
        } while (i <= fin);

      
        if (contador > 100) {
            printf("El intervalo contiene más de 100 números primos. Inténtelo de nuevo.\n");
        }
    } while (contador > 100);

 
    printf("\nHay %d números primos en el intervalo [%d, %d]:\n", contador, inicio, fin);

    int cuenta = 0; 
    i = inicio;
    do {
        if (esPrimo(i)) {
            printf("%d\t", i);
            cuenta++;

           
            if (cuenta % 20 == 0) {
                printf("\n");
            }
        }
        i++;
    } while (i <= fin);

    printf("\n");
    return 0;
}

