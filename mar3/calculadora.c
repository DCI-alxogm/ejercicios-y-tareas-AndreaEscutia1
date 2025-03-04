#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
float TC, TK;
float x, y, z;
float re, rc ,tetha, phi;
int var1,var2;
char opc;

leerprograma:
printf("¿Que quieres hacer? \n");
printf("T - convertir temperatura (C a K)\n");
printf("C - convetir coordenadas cartesianas\n");
scanf("%s", &opc);
var1=strcmp(&opc,"T");
var2=strcmp(&opc,"C");
//printf("EL RESULTADO DE strcmp(opc,T) ES %i\n",var1);
//printf("EL RESULTADO DE strcmp(opc,C) ES %i",var2);
if (var1==0){
goto temperatura;
} else if (var2==0) {
goto coordenadas;
} else {
printf("Solo acepto T o C	");
goto leerprograma;
}

temperatura:
printf("Introduce el valor de la temperatura en Celsius a convertir \n");
scanf("%f", &TC);
TK= TC + 273.15;
printf("la temperatura en kelvin es : %f \n",TK);
goto preguntar;

coordenadas:
printf("Converir a cilindricas o a esfericas\n");
printf("CC - convertir a cilindricas\n");
printf("CE - converitir a esfericas\n");
scanf("%s", &opc);
var1=strcmp(&opc,"CC");
var2=strcmp(&opc,"CE");
//printf("EL RESULTADO DE strcmp(opc,CC) ES %i\n",var1);
//printf("EL RESULTADO DE strcmp(opc,CE) ES %i",var2);
if (var1==0){
goto cartesianasacilindricas;
} else if (var2==0) {
goto cartesianasaesfericas;
} else {
printf("opcion no valida. Intentelo de nuevo\n");
goto coordenadas;
}

cartesianasacilindricas:
printf("ingrese coordenadas para x,y,z: \n");
scanf("%f%f%f", &x, &y, &z);
rc = sqrt(x*x + y*y); //radio cilindrico
//z es igual
tetha = atan2(x,y);
printf("resultados \n");
printf("coordenadas cilindricas");
printf("%f%f%f\n", rc, tetha, z);
goto preguntar;

cartesianasaesfericas:
printf("ingrese coordenadas para x,y,z: \n");
scanf("%f%f%f", &x, &y, &z);
re = sqrt(x*x + y*y + z*z); //radio
tetha = atan2(x,y); //tetha (angulo)
phi = acos(z/re); // angulo respecto a z
printf("resultados \n");
printf("coordenadas esfericas:\n");
printf("%f%f%f\n", re, tetha, phi);
goto preguntar;

preguntar:
printf("¿ Quieres que haga otra conversion? (s/n)\n");
scanf("%s", &opc);
var1=strcmp(&opc,"s");
var2=strcmp(&opc,"n");
//printf("EL RESULTADO DE strcmp(opc,s) ES %i\n",var1);
//printf("EL RESULTADO DE strcmp(opc,n) ES %i",var2);
if(var1==0){
goto leerprograma;
}
if(var2==0)
printf("fin\n");
return(0);
}
