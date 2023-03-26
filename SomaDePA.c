#include<stdio.h>
main(){
int n,i,teste=1,maior=0,indice;


while(n!=0){
scanf("%d",&n);
if(n!=0){
while((n<=1)||(n>10001)){
scanf("%d",&n);
}

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
