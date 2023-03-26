#include<stdio.h>
main(){
int numero,n1,n2,n3,n4,soma,fim;
scanf("%d",&numero);
n1 = numero/100;
n2 = (numero%100)/10;
n3 = (numero%100)%10;

soma= n1+(n2*3)+(n3*5);
n4 = soma%7;
fim = n1*1000+n2*100+n3*10+n4*1;

printf("O NOVO NUMERO E = %d \n",fim);
}
