#include<stdio.h>
#include<math.h>
main(){
double massa,ac,t,v,s,w;
scanf("%lf",&massa);
scanf("%lf",&ac);
scanf("%lf",&t);
v = ac*t*3.6;
s = ac*pow(t,2)/2;
w = massa*1000*pow(v/3.6,2)/2;
printf("VELOCIDADE = %.2lf \n",truncf(v*100)/100);
printf("ESPACO PERCORRIDO = %.2lf \n",truncf(s*100)/100);
printf("TRABALHO REALIZADO = %.2lf \n",truncf(w*100.0)/100.0);
}
