#include<stdio.h>
main(){
int n,i,teste=1,maior=0,indice;


while(teste!=0){


do{
    scanf("%d",&n);
}while((n<0) || (n>10001));


if((n>1)&& (n<=10000)){




int vetor[n];


for(i=0;i<n;i++){
do{
      scanf("%d",&vetor[i]);
}while((n<0) || (n>1000));
if(vetor[i]>maior){
    maior = vetor[i];
    indice = i;
}

    }

    printf("%d %d \n",indice,vetor[indice]);

}
else if(n==0){
    teste = n ;
}

}


}
