#include<stdio.h>
#include<stdlib.h>

int main(){
int num, i , *ptr;

printf("introduce el valor de la variable num");
scanf("%d", &num);

ptr= (int *) malloc (num * sizeof(int));

printf("size of local_int: %zu bytes\n", sizeof(u_int));
printf("size of local_int:%zu bytes\n", sizeof(ptr));

for(i=0;i<num;i++){
scanf("%d",ptr+1);
}
printf("los numeros ingresados y almacenados en la direccion de la memoria");
for(i=0;i<num;i++){
 printf("%p:\t%d\n",ptr+i, *(ptr+i));
}
}
