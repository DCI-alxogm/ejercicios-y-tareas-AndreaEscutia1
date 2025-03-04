/* 
ejercicio 03/03/2025 Andrea Escutia 
*/ 

#include <string.h>
#include <stdio.h>
int main(){
char opc[2];
int var1,var2;
int numero,residuo;
leernumero:
printf("Ingrese numero\n");
scanf("%i",&numero);
residuo=numero%2;
if(residuo==0){
printf("%i es par\n",numero);
}else{
printf("%i es impar\n",numero);
}

printf("¿quieres saber si otro numero es par o impar?");
scanf("%s",opc);
var1=strcmp(opc,"si");
var2=strcmp(opc,"no");
//printf("EL RESULTADO DE strcmp(opc,si) ES %i\n",var1);
//printf("EL RESULTADO DE strcmp(opc,no) ES %i",var2);
if(var1==0){
goto leernumero;
}else if (var2==0){
printf("hasta la proxima");
}else{
printf("solo acepto si o no");
}
 return(0);
}
