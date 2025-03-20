#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
int a,b,c;
int x1,x2,x3;

x1=5+3*(pow(2, 3)-4);
printf("x1=5+3*((2^3)-4)=%d\n",x1);

x2=(6+2*3)/(sqrt (16)+2);
printf("x2=(6+2*3)/(sqrt (16)+2)=%d\n", x2);

printf("¿Que valores quieres para a, b y c?\n");
scanf("%d%d%d", &a, &b, &c);
x3= (sin(a+(b^2))+cos(c/2)*b)/(1+exp(-a)+sqrt(abs(b-c)));
printf("(sin(a+(b^2))+cos(c/2)*b)/(1+exp(-a)+sqrt(abs(b-c)))=%d\n", x3);


return 0;
}
