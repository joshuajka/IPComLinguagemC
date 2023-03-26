#include<stdio.h>
main(){
int n,i,soma=0;

do{
    scanf("%d",&n);
}while((n<0) || (n>5000));

int vetor[n];

for(i=0;i<n;i++){

        scanf("%d",&vetor[i]);
        soma = soma + vetor[i];
    }


        printf("%d",soma);



}
