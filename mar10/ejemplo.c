#include <stdio.h>

int main(){
char op;
printf("selecciona una opcioon a o b\n");
scanf("%s",&op);
switch(op){
case 'a':
printf("entrando a la opcion a\n");
break;
case 'b':
printf("entrando a la opcion b\n");
break;
default:
printf("opcion no valida\n");
break;
}
printf("Fin\n");
return(0);
}

