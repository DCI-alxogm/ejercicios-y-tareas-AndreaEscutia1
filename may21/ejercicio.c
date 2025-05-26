#include <stdio.h>
#include <stdlib.h>

int main(){
int *arr; //declaramos arr como puntero
int  i, suma=0;

//reservar memoria para 6 numeros
arr = (int*)malloc(6*sizeof(int));

//verificar que se reservo correctamente
if(arr == NULL)
{
printf("Error, memoria no reservada.");
return 1;
}
//asignar valores al arreglo usando el apuntador
for(i=0;i<6;i++){
printf("ingrese el numero %d:", i+1);
scanf("%d", &arr[i]);
}

//sumar valores
for(i=0;i<6;i++){
suma +=arr[i];
}

printf("la suma de los 6 numeros es:%d", suma);

//liberamos la memoria
free(arr);
 return 0;
}

