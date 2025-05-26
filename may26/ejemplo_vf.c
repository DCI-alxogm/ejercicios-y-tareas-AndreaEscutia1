#include<stdio.h>

void cuadrado(float _x);

int main(){
float x;
printf("introduce un numero");
scanf("%f", &x);
cuadrado(x);
return(0);
}
void cuadrado(float _x){
float x, x2;
x2=_x*_x;
printf("el cuadrado de %f es %f", x,x2);
}

