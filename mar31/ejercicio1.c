#include<stdio.h>

int main(){
char opcion;
float numero;
do{
 do{
printf("ingrese un numero\n");
scanf("%f", &numero);
}
while(numero<=0);
printf("numero ingresado correctamente\n");
printf("¿Desea ingresar otro número? (s/n): ");
scanf(" %c", &opcion);
}
 while (opcion == 's');

    printf("Programa finalizado.\n");
return 0;
}
