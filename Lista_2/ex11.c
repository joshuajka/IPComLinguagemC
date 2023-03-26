#include<stdio.h>
main(){
int n,i,cont=0,maior=0,menor;

do{
    scanf("%d",&n);
}while((n<0) || (n>5000));

int vetor[n];
int rotev[n];

for(i=0;i<n;i++){

        scanf("%d",&vetor[i]);
        if(vetor[i]>maior){
            maior = vetor[i];
        }
        if(vetor[i]<menor){
            menor = vetor[i];
        }
    }

    for(i=n-1;i>=0;i--){

        rotev[cont] = vetor[i];
        cont++;
    }

    for(i=0;i<n;i++){
     printf(" %d ",vetor[i]);
    }
    printf("\n");

    for(i=0;i<n;i++){
     printf(" %d ",rotev[i]);
    }
    printf("\n");

    printf(" %d \n",maior);
    printf(" %d \n",menor);



}
