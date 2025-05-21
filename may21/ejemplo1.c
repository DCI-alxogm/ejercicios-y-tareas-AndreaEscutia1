#include<stdio.h>

int main(){
int var=20;
int *ip;
ip=&var; 

printf("la direccion de la variable vas es %p\n", &var);
printf("el  valor de la variable ip es %p\n",ip);
printf("el valor de escrito en la direccion %p es: %d\n", ip, *ip);
}
