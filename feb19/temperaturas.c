/*
19 de febrero del 2025
*/
#include <stdio.h> //librerias entrada y salida
#include <stdlib.h> // Uso estandar de C

int main(){
float TC, TK; //Declaro TC y TK
//Cuerpo del programa
printf("Introduce el valor de la temperatura en Celsius a convertir \n");
scanf("%f", &TC);  //LEE TC, La linea anteriors es de apoyo para el usuario
TK= TC + 273.15;  //Realiza la operacion
printf("la temperatura en kelvin es : %f \n",TK);
exit(0);
}
