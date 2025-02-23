/*
19 02 2025
*/

#include <stdio.h>  
#include <stdlib.h>
#include <math.h>

int main(){
float x, y, z; //variables principales
float re, rc, tetha, phit, z; //variables por calcular
// cuerpo del programa
printf("ingrese coordenadas para x,y,z: \n");
scanf("%f%f%f", &x, &y, &z);
//conversion a coordenadas esfericas
re = sqrt(x*x + y*y + z*z) //radio
theta = atan2(x,y); //theta (angulo)
phi = acos(z/re) // angulo respecto a z

//conversion a coordenadas cilindricas
rc = sqrt(x*x + y*y); //radio cilindrico
//z es igual
//theta ya se calculo
printf("resultados \n");
//resultados esfericos 
printf("coordenadas esfericas:\n);
printf("%f%f%f\n", re, theta, phi):
//resultados cilindricos
printf("coordenadas cilindricas")
printf("%f%f%f\n", rc, theta, z)
exit(0);
}

