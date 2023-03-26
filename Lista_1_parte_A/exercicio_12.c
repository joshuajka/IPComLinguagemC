#include<stdio.h>
main(){
int valor,notas_100,notas_50,notas_10,moeda;
scanf("%d",&valor);
    notas_100 = valor/100;
    notas_50 = valor%100/50;
    notas_10 = valor%50/10;
    moeda = valor%10;

printf("NOTAS DE 100 = %d \n",notas_100);
printf("NOTAS DE 50 = %d \n",notas_50);
printf("NOTAS DE 10 = %d \n",notas_10);
printf("MOEDAS DE 1 = %d \n",moeda);






}

