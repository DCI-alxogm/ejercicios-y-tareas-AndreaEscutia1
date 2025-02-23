/*
19 02 2025
*/

#include <stdio.h>  
#include <stdlib.h>
#include <math.h>

int main(){
float x, y, z; //variables principales
float re, rc, tetha, phi; //variables por calcular
// cuerpo del programa
printf("conversion de coordenadas cartesianas (x,y,z)\n");
printf("a coordenadas esfericas (re,tetha,phi) y cilindricaas (rc,tetha,z)\n");
printf("ingrese coordenadas para x,y,z: \n");
scanf("%f%f%f", &x, &y, &z);
//conversion a coordenadas esfericas
re = sqrt(x*x + y*y + z*z); //radio
tetha = atan2(x,y); //tetha (angulo)
phi = acos(z/re); // angulo respecto a z

//conversion a coordenadas cilindricas
rc = sqrt(x*x + y*y); //radio cilindrico
//z es igual
//tetha ya se calculo
printf("resultados \n");
//resultados esfericos 
printf("coordenadas esfericas:\n");
printf("%f%f%f\n", re, tetha, phi);
//resultados cilindricos
printf("coordenadas cilindricas");
printf("%f%f%f\n", rc, tetha, z);
exit(0);
}

