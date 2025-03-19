#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcion, numero;
    float decimal;
    char letra1, letra2, letra3;
    int contador = 0;
    int resultado;
   
    printf("Seleccione una opción:\n");//falta que los  numeros de las opciones este entre ' '
    printf("1. Calcular el cuadrado de un número\n");
    printf("2. Verificar si un número es par o impar\n");
    printf("3. Calcular la raíz cuadrada de un número decimal\n");
    printf("4. Contar cuántas vocales hay en tres letras ingresadas\n");
    scanf("%d", &opcion);
//no hay validacion de opcion, por si se ingresa una letra en vez de un numero
    switch (opcion) {
        case 1:
            printf("Ingrese un número: ");
            scanf("%d", &numero);
            resultado = pow(numero, 2.0);//la funcion pow es para dobles pero resultado es un int, se uda una multiplizacion directa
            printf("El cuadrado de %d es %f\n", numero, resultado);//%f es para float y resultado es un int se debe de usar %d
            break;
        case 2:
            printf("Ingrese un número: "); //falta /n
            scanf("%d", &numero);//no se verifica si se recibe un numero valido
            if (numero % 2 == 0) {
                printf("El número es par.\n");
            } else {
                printf("El número es impar.\n");
            }
            break;
        case 3:
            printf("Ingrese un número decimal: ");
            scanf("%f", &decimal);//no se verifica si recibe un numero decimal
            if (decimal >= 0) {
                decimal = sqrt(decimal);//para evitar advertencias se asigna float
                printf("La raíz cuadrada es: %.2f\n", decimal);
            } else {
                printf("No se puede calcular la raíz cuadrada de un número negativo.\n");
            }
            break;
        case 4: // en los numeros del caso falta que esten entre ' '
            printf("Ingrese tres letras separadas por espacios: ");
            scanf(" %c %c %c", &letra1, &letra2, &letra3);//no deberia ir un espacio antes de la primera %c
            if (letra1 == 'a' || letra1 == 'e' || letra1 == 'i' || letra1 == 'o' || letra1 == 'u' ||
                letra1 == 'A' || letra1 == 'E' || letra1 == 'I' || letra1 == 'O' || letra1 == 'U') {
                contador = contador + 1;
            }
            if (letra2 == 'a' || letra2 == 'e' || letra2 == 'i' || letra2 == 'o' || letra2 == 'u' ||
                letra2 == 'A' || letra2 == 'E' || letra2 == 'I' || letra2 == 'O' || letra2 == 'U') {
                contador = contador + 1;
            }
            if (letra3 == 'a' || letra3 == 'e' || letra3 == 'i' || letra3 == 'o' || letra3 == 'u' ||
                letra3 == 'A' || letra3 == 'E' || letra3 == 'I' || letra3 == 'O' || letra3 == 'U') {
                contador = contador + 1;
            }
            printf("Se ingresaron %d vocales.\n", contador);
            break;
        default:
            printf("Opción no válida\n");
    }//falta el break
    return 0;
}
