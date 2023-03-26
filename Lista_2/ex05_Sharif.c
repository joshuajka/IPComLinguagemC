#include<stdio.h>
main(){
int n,i,maior,indice,vetor[10000];

scanf("%d",&n);
while(n!=0){
maior=0;
indice=0;
for(i=0;i<n;i++){
scanf("%d",&vetor[i]);

if(vetor[i]>maior){
    maior = vetor[i];
    indice = i;
}

    }

printf("%d %d\n",indice,maior);
scanf("%d",&n);
}

}

