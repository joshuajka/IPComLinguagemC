#include<stdio.h>
main(){
int n,i;

do{
    scanf("%d",&n);
}while((n<0) || (n>5000));

int vetor[n];

for(i=0;i<n;i++){

        scanf("%d",&vetor[i]);
    }

    for(i=0;i<n;i++){

        printf(" %d",vetor[i]);
    }



}
