#include<stdio.h>
#include<math.h>
main(){
float A,B,C,delta;
scanf("%f",&A);
scanf("%f",&B);
scanf("%f",&C);
delta = pow(B,2)-(4*A*C);
printf("O VALOR DE DELTA E = %.2f",truncf(delta*100)/100);



}
