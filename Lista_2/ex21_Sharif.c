#include<stdio.h>
main(){
int n,i,j,aux;
do{
    scanf("%d",&n);
}while((n<=1) || (n>100000));
int vetor[n];

for(i=0;i<n;i++){
    scanf("%d",&vetor[i]);
}

for(i=1;i<n;i++){
    for(j=0;j<n-i;j++){
        if(vetor[j]>vetor[j+1]){
            aux = vetor[j];
            vetor[j] = vetor[j+1];
            vetor[j+1] = aux;
        }
    }
}
for(i=0;i<n;i++){
    if(vetor[i]%2==0){
        printf("%d \n",vetor[i]);
    }
}

for(i=n;i>=0;i--){
    if(vetor[i]%2!=0){
        printf("%d\n",vetor[i]);
    }
}



}
