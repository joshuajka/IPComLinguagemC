#include<stdio.h>
main(){
float salario,kw,valor_kw,consumo,consumo_des;
scanf("%f",&salario);
scanf("%f",&kw);
valor_kw = salario*0.7/100;
consumo = valor_kw*kw;
consumo_des = valor_kw*kw*0.9;
printf("Custo por kW: R$ %.2f \n",truncf(valor_kw*100.0)/100.0);
printf("Custo do consumo: R$%.2f \n",truncf(consumo*100.0)/100.0);
printf("Custo com desconto: R$%.2f \n",truncf(consumo_des*100.0)/100.0);


}
