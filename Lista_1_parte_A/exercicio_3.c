#include<stdio.h>
main(){
float temp_f,temp_c,chuva_p,chuva_m;
scanf("%f",&temp_f);
scanf("%f",&chuva_p);

temp_c = (temp_f - 32) * 5/9;
chuva_m = chuva_p * 25.4;

printf("O VALOR EM CELSIUS = %.2f \n",truncf(temp_c*100)/100);
printf("A QUANTIDADE DE CHUVA E = %.2f \n",truncf(chuva_m*100)/100);
}
