#include<stdio.h>

int main(){
int inicial, final, incremento, x;
char opcion;

printf("ingrese valor inicial de x\n");
scanf("%d", &inicial);
printf("ingrese el valor final\n");
scanf("%d", &final);
printf("ingrese el incremento\n");
scanf("%d", &incremento);

x=inicial;
printf("\nValores de X y X^2:\n");

do{
printf("x=%.2d -> X^2 =%.2d\n", x, x*x);
x+= incremento;
}while(x <= final);
printf("quieres realizar otro calculo?(s/n)\n");
scanf("%c", &opcion);
while(opcion == 's');
printf("programa finalizado\n");

return 0;

}
