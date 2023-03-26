#include<stdio.h>
main(){
int numero,n1,n2,n3,n4;
scanf("%d",&numero);
if(numero!=0 && numero%10!=0){

n1 = numero/100;
n2 = (numero%100)/10;
n3 = (numero%100)%10;
numero = (n3*100)+(n2*10)+(n1*1);
printf("%d \n",numero);
}
else{
    printf("Numero invalido \n");
}

}
