#include<stdio.h>
#include<math.h>

int main(){
char op;
float rc ,re ,z, theta, phi;
float x, y, z;
float TC, Tk;
float m, yd, g, oz, mi, l, gal;

printf("¿Que quieres hacer\n");
printf("'a' para convertir temperatura celsius a kelvin\n");
ptrintf("'b' para converir coordenadas cartesianas a esfericas\n");
printf("'c' para convertir coordenadas cartesianas a cilindricas\n");
printf("'d' para convertir de metros a yardas\n");
printf("'e' para convertir de metros a millas\n");
printf("'f' para converir de gramos a onzas\n");
printf("'g' para convertir de litros a galones\n");
pintf("'h' convertir coordenadas cilindricas a cartesianas\n");
printf("'i' convertir coordenadas esfericas a cartesianas\n");
printf("'j' convertir temperatura kelvin a celsius\n");
scanf("%s", &op);

switch(op){
case'a':
printf("Introduce el valor de la temperatura en Celsius a convertir \n");
scanf("%f", &TC);
TK= TC + 273.15;
printf("la temperatura en kelvin es : %f \n",TK);
break;

case'b':
re = sqrt(x*x + y*y + z*z);
tetha = atan2(x,y);
phi = acos(z/re); 
break;

case 'c':
printf("¿lo quieres en grados o radianes?");
rc = sqrt(x*x + y*y);
tetha = atan2(x,y);
//z es igual
break;

case'd':

