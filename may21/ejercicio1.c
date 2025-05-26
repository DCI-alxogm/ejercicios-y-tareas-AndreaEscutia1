#include<stdio.h>
#include<stdlib.h>

int main(){
int arr[6];
int i, suma=0, *ptr=arr;

// pedir los 6 numeros
for (i = 0; i < 6; i++) {
printf("Ingrese el número %d: ", i + 1);
scanf("%d", &arr[i]);  
}

//sumar los numeros
 for(i=0;i<6;i++){
suma+=*(ptr+i);
}
printf("La suma de los 6 números es: %d\n", suma);

return 0;
}
