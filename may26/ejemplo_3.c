#include<stdio.h>
float cuadrado();

int main(){
float x, x2;
x2=cuadrado();
printf("el cuadrado de %f es %f", x,x2);
return(0);
}

float cuadrado(){
float x;
printf("introduce un numero");
scanf(
"%f", &x);
return x*x;
}
