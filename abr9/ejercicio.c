#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
int i,N=6;
float TC[N], TK[N];

for (i=0;i <N;i++){
printf("ingrese la temperatura en celisius");
scanf("%f", &TC[i]);
TK[i]=0;
}
for(i=0;i<N;i++){
TK[i]=TC[i]+273.15;
printf("%d \t %f \t %f \t \n",i,TC[i],TK[i]);
}
return 0;
}
