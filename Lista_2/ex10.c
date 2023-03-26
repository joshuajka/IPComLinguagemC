#include<stdio.h>
main(){
int n,i,j,maior=0,indice,freq=0,aux;
do{

    scanf("%d",&n);

}while((n<0) || (n>10001));

int vetor[n];
aux = n - 1;
for(i=0;i<n;i++){
    scanf("%d",&vetor[i]);
    if(vetor[i]>maior){
        maior = vetor[i];
        indice = i;
    }

}

for(j=0;j<n;j++){

    if(vetor[aux]==vetor[j]){
       freq = freq + 1;
       }


}

printf("Nota %d, %d vezes \n",vetor[aux],freq);
printf("Nota %d, indice %d \n",maior,indice);




}
