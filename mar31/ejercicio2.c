#include<stdio.h>

int main(){
int inicial, final, incremento, x;

printf("ingrese valor inicial de x\n");
scanf("%d", &inicial);
printf("ingrese el valor final\n");
scanf("%d", &final);
printf("ingrese el incremento\n");
scanf("%d", &incremento);

printf("ingrese el valor inicial de x:\n");
scanf("%d", &inicial);

printf("ingrese el valor final de x:\n");
scanf("%d", &final);

printf("ingrese el valor del  incremento:\n");
scanf("%d", &incremento);

x=inicial;
printf("\nValores de X y X^2:\n");

do{
printf("x=%.2d -> X^2 =%.2d\n", x, x*x);
x+= incremento;
}while(x <= final);
return 0;
}
