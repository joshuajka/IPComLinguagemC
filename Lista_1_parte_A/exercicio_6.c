#include<stdio.h>
main(){
float alt,are,abase,vol;
scanf("%f %f",&alt,&are);
abase = (3*pow(are,2))*sqrt(3)/2;
vol = abase * alt/3;

printf("O VOLUME DA PIRAMIDE E= %.2f METROS CUBICOS \n",truncf(vol*100)/100);


}
