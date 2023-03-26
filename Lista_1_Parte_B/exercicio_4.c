#include<stdio.h>
main(){
int horas;
float total;
scanf("%d",&horas);

total = (horas/3) * 10 + (horas%3)*5;

printf("O VALOR A PAGAR E = %.2f \n",total);

}
