#include<stdio.h>
#include<math.h>
#define ALUM 100
#define PI 3.14159
main(){
float raio,alt,base,lado,total;
scanf("%f",&raio);
scanf("%f",&alt);
base = PI * pow(raio,2);
lado = 2*PI*raio*alt;
total = (2*base + lado)*ALUM;
printf("O VALOR DO CUSTO E= %.2f \n",truncf(total*100)/100);



}
