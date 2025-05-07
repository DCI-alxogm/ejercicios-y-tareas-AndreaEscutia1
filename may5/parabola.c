#include<stdio.h>
#include<stdlib.h>

int main(){
FILE*fp;
FILE *parabola_a;
int i, n=15;
float Lim_inf, Lim_sup, delta, x[n], y[n];

parabola_a=fopen("test.txt","r");

fscanf(parabola_a,"%d",&n);
fscanf(parabola_a,"%f", &Lim_inf);
fscanf(parabola_a,"%f", &Lim_sup);
fclose(parabola_a);

delta=(Lim_sup - Lim_inf)/(n-1);
x=Lim_inf + 1 * delta;
y[i]=x[i]*x[i]+1;

fp=fopen("parabola.txt","w");
fprintf(fp,"f(%.2f)=%.2f\n",x[i],y[i]); 
fclose(fp);

return (0);
}
