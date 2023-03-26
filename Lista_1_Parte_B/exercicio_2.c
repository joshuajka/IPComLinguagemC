#include<stdio.h>
main(){
float consumo,valor;
int conta;
char tipo;

scanf("%d %f %c",&conta,&consumo,&tipo);

if(tipo == 'R'){

    valor = (consumo * 0.05)+5;

}
else if(tipo == 'C' ){

   valor = 500 + (consumo - 80)*0.25;

}
else{

  valor = 800 + (consumo - 100)*0.04;

}

printf("CONTA = %d \n",conta);
printf("VALOR DA CONTA = %.2f \n",truncf(valor*100)/100);


}
