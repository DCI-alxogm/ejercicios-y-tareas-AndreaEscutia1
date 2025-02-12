/*
febreo 12 del 2025
andrea escutia
primer programa, mostrando estructura, definicion de variables, imprimir variables en la pantalla.
*/


#include<stdlib.h>//libreria estandar de C.
#include<stdio.h>//libreria para interaccion con la pantalla.

int main( ){
char nombre[10];
int edad;
float temperatura;

//cuerpo del programa;
printf ("¿cual es tu nombre?\n");
scanf("%s", nombre);
printf("Hola, %s este es el segundo programa del curso PB2025\n",nombre); //el caracter"\n" indica un salto de linea.

printf ("introduce tu edad\n");
scanf ("%i", &edad); //%i indica el tipo de variable (entero este caso).
printf ("¿que temperatura marco el termometro la ultima vez que fuiste al supermercado? \n");
scanf("%f", &temperatura);

printf("tu edad es: %i\n", edad);
printf("tu ultimo registro de temperatura fue: %f\n", temperatura);
printf("pues bien %s de %i años y que amanecio con una temperatura de %f gracias por conversar conmigo.\n", nombre, edad temperatura); 
exit(0);
}

