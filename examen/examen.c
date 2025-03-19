#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
char opcion;
float base, altura, area, TC,TF;
char letra;
int numero, suma, digito;

printf("seleccione una opcion:\n");
printf("1. Calcular el area de un rectangulo\n");
printf("2. Converir grados celcius a fahrenheit\n");
printf("3. Verificar si un numero es multilpo de otro\n");
printf("4. Sumar los digitos de un numero de dos cifras\n");
sanf("%f", opcion);

switch(opcion){
case 1:
printf("ingrese la base y la altura del rectangulo: ");
scanf("%f %d", &base, altura);
area =base*altura;
printf("El area del rectangulo es:%f\n", area);
break;
case 2:
printf("ingrese la temperatura de grados celcius: ");
scanf("%f", &TC);
TF =(TC*9/5)+32
printf("La temperatura en Fahrenheit es: %2.d\n", TF);
break;
case 3:
printf("ingrese dos numeros: ");
scanf("%f%F", &numero, digito);
if(numero % digito = 0){
printf("%d es multiplo de %d.\n", numero, digito);
}else if{
printf("%d no es multiplo de %d.\n", numero, digito);
}
break;
case 4:
printf("ingrese un numero de dos cifras: ");
scanf("%d", &numero);
if(numero>=10 && numero <=99){
suma=(numero/10)+(numero % 10);
printf("la suma de los digitos es: %.2d\n", suma);
}else if(numero<10){
printf("el numero es de una sola cifra, no se puede realizar la operacion.n\");
}
break;
default:
printf("opcion no es valida\n");
}
break;
return 0;
}
