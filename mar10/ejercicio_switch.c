#include <stdio.h>

int main(){
char op;
float cantidad, resultado;

printf("¿Que quieres hacer\n");
printf("'k' para convertir de K a C\n");
printf("'c' para converir C a K\n");
scanf("%s",&op);

printf("¿Cual es la temperatura que deseas convertir?\n");
scanf("%f",&cantidad);

switch(op){
case 'k':
resultado= cantidad - 273.15;
printf("la temperatura en celcius es: %f\n",resultado);
break;
case 'c':
resultado = cantidad  + 273.15;
printf("la temperatura en kelcin es: %f\n", resultado);
break;
default:
printf("opcion no valida\n");
break;
}
printf("fin\n");
return 0;
}
