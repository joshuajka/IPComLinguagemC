#include<stdio.h>
main(){
int n,i,j,aux,cont;
do{
    scanf("%d",&n);
}while((n<2) || (n>1000));
cont = n;
int vetor[n];

for(i=0;i<n;i++){

        scanf("%d",&vetor[i]);
    }


    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(vetor[j]>vetor[j+1]){
              aux = vetor[j+1];
              vetor[j+1] = vetor[j];
              vetor[j] = aux;
            }
        }


    }

  for(i=0;i<n;i++){

      printf("%d \n",vetor[i]);
    }




}
