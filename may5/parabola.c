#include<stdio.h>
#include<stdlib.h>

int main(){
File *parabola_a;
int i,n=15
float Lim_inf, Lim_sup, delta, x, f(x);

parabola_a=fopen("test.txt","r");

fscanf(FILE,"%d",&n);
fscanf(FILE,"%f", &Lim_inf);
fsanf(FILE,"%f", &Lim_sup);

delta=(Lim_sup - Lim_inf)/(n-1);

FILE=fopen("parabola.txt","w");

x=Lim_inf + 1 * delta;
f(x)=x*x+1;
fprintf(parabola_a,"f(%.2f)=%.2f\n",x,f(x)); 
fclose(parabola_a);
return (0);
}
