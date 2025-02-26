/*
19 02 2025
*/

#include <stdio.h>  
#include <stdlib.h>
#include <math.h>

int main(){
float x, y, z; //variables principales
float re, rc, theta, phi; //variables por calcular
//cuerpo del programa
printf("introduce los valores de las variables x,y,z que quieres conevertir\n");
scanf(" %f %f %f ", &x, &y, &z);
//Realizo operaciones de transformacion de coordenadas
//conversion a coordenadas esfericas
re=sqrt(x*x + y*y + z*z); //radio
theta=atan(x/y); //theta (angulo)
phi=acos(z/re); //angulo respecto a z

//conversion a coordenadas cilindricas
rc=sqrt(x*x + y*y); //radio cilindrico
theta=atan(y/x);
z=z;

//salida
//resultados esfericos n
printf("coordenadas esfericas son re= %f ,theta= %f , phi= %f \n",re,theta,phi);
//resultados cilindricos
printf("coordenadas cilindricas son rc= %f , theta= %f , z= %f \n",rc,theta,z);
exit(0);
}

