#include<stdio.h>
main(){
int n,i,cont=0,maior=0,menor,vetor[1000],rotev[1000];

scanf("%d",&n);


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
