#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
char op;
float rc , re, theta, phi;
float x, y, z;
float Tc, Tk;
float m, yd, g, oz, mi, l, gal;
float grados, radianes;
char opc[2];
int var1,var2;

printf("¿Que quieres hacer\n");
printf("'a' para convertir temperatura celsius a kelvin\n");
printf("'b' para converir coordenadas cartesianas a esfericas\n");
printf("'c' para convertir coordenadas cartesianas a cilindricas\n");
printf("'d' para convertir de metros a yardas\n");
printf("'e' para convertir de metros a millas\n");
printf("'f' para converir de gramos a onzas\n");
printf("'g' para convertir de litros a galones\n");
printf("'h' convertir coordenadas cilindricas a cartesianas\n");
printf("'i' convertir coordenadas esfericas a cartesianas\n");
printf("'j' convertir temperatura kelvin a celsius\n");
scanf("%s", &op);

switch(op){
case'a':
printf("Introduce el valor de la temperatura en Celsius a convertir \n");
scanf("%f", &Tc);
Tk= Tc + 273.15;
printf("la temperatura en kelvin es : %f \n",Tk);
break;

case'b':
printf("conversion de coordenadas cartesianas (x,y,z)\n");
printf("a coordenadas esfericas (re,tetha,phi)\n");
printf("¿Lo quieres en grados o radianes?\n");
scanf("%s",opc);
var1=strcmp(opc,"grados");
var2=strcmp(opc,"radianes");
if(var1==0){
goto grados;
}else if(var2==0);{
goto radianes;
}printf("ingrese coordenadas para x,y,z: \n");
scanf("%f%f%f", &x, &y, &z);
printf("¿Lo quieres en grados o radianes?\n");
scanf("%s",opc);
var1=strcmp(opc,"grados");
var2=strcmp(opc,"radianes");
if(var1==0){
goto grados;
}else if(var2==0);{
goto radianes;
}
var1=strcmp(opc,"grados");
var2=strcmp(opc,"radianes");
if(var1==0){
goto grados;
}else if(var2==0);{
goto radianes;
}

grados:
scanf("%f", &theta);
grados= theta;
printf("en grados es: %f\n", grados);

radianes:
scanf("%f", &theta);
radianes =(theta*3.1416)/180;

printf("en radianes es: %f\n", radianes);
re = sqrt(x*x + y*y + z*z);
theta = atan2(x,y);
phi = acos(z/re); 
break;

case 'c':
printf("conversion de coordenadas cartesianas (x,y,z)\n");
printf("a coordenadas cilindricaas (rc,tetha,z)\n");
printf("ingrese coordenadas para x,y,z: \n");
scanf("%f%f%f", &x, &y, &z);
printf("lo quieres en grados o en radianes?\n");
scanf("%s",opc);
var1=strcmp(opc,"grados");
var2=strcmp(opc,"radianes");
if(var1==0){
goto grados;
}else if(var2==0);{
goto radianes;
}
rc = sqrt(x*x + y*y);
theta = atan2(x,y);
//z es igual
break;

case'd':
printf("introduce la medida en metros para convertir a yardas\n");
scanf("%f", &m);
yd = m*1.094;
printf("La conversion en yardas es: %f\n", yd);
break;

case'e':
printf("introduce la medida en metros para convertir a millas\n");
scanf("%f", &m);
mi = m/1609.34;
printf("La conversion en millas es: %f\n", mi);
break;

case'f':
printf("introduce la medida en en gramos para converir a onzas\n");
scanf("%f", &g);
oz = g/28.3495;
printf("La conversion a onzas es: %f\n", oz);
break;

case'g':
printf("introduce la medida en litros para convertir a galones\n");
scanf("%f", &l);
gal = l/3.785;
printf("la conversion en galones es: %f\n", gal);
break;

case'h':
printf("conversion de coordenadas cilindricas a cartesianas(rc,theta,z)\n");
printf("ingrese coordenadas para rc,theta,z\n");
scanf("%f%f%f", &rc,&theta,&z);
x =rc*cos(theta);
y =rc*sin(theta);
z =z;
break;

case'i':
printf("conversion de coordenadas esfericas a cartesianas (re,theta,phi)\n");
printf("ingrese coordenadas para re,theta,phi\n");
scanf("%f%f%f", &re,&theta,&phi);
x =re*(sin(theta) * cos(phi));
y =re*(sin(theta) * sin(phi));
z =re*cos(theta);
break;

case'j':
printf("introduce el valor de la temperatura en kevin a convertir\n");
scanf("%f", &Tk);
Tc= Tk - 273.15;
printf("la temperatura en celcius es: %f\n", Tc);
break;
default:
printf("opcion no valida\n");
break;
}
printf("fin\n");
return 0;
}
