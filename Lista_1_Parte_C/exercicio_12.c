#include<stdio.h>
main(){
int i,n,qtd=1,qtd_ant=1,s,aux,maior=1;

scanf("%d",&n);

scanf("%d",&s);
aux = s;
for(i=1;i<n;i++){
    scanf("%d",&s);
    if (s == aux){
        qtd = qtd + 1;
    }
    if(qtd>maior){
        maior = qtd;
    }
    if(qtd==qtd_ant){
        qtd = 1;
    }
    qtd_ant = qtd;
      aux = s;
}
 printf("O comprimento do segmento de numeros iguais e: %d",maior);
}















