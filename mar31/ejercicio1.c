#include<stdio.h>

int main(){
float numero;
do{
printf("ingrese un numero\n");
scanf("%f", &numero);
}
while(numero<=0);{
printf("numero ingresado correctamente\n");
}
return 0;
}
