/*
primera tarea
Andrea Escutia Zamudio
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
float a,b,c,d;
float e1,e2,e3,e4;
//pedir numeros
printf("¿Que numeros te gustarian para las opercaiones?");
scanf("%f %f %f %f", &a, &b, &c, &d);
//realizar operaciones
e1=(a-b)*(d+c);
e2=(a*c*d)/b;
e3=(b+d)/(c+a);
e4=(a-d)-(b-c);
//resultados
printf("e=(a-b)*(d+c)=%f\n",e1);
printf("e=(a*c*d)/b=%f\n",e2);
printf("e=(b+d)/(c=a)=%f\n",e3);
printf("e=(a-d)-(b-c)=%f\n",e4);
exit(0);
}

