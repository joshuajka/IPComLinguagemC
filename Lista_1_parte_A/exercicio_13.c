#include<stdio.h>
main(){
float a,b,c,d,e,f,x,y;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
scanf("%f",&d);
scanf("%f",&e);
scanf("%f",&f);

y = (f*a - d*c) / (e*a - d*b);

x = (c - b*y)/a;

printf("O VALOR DE X E = %.2f \n",x);
printf("O VALOR DE Y E = %.2f \n",y);


}
