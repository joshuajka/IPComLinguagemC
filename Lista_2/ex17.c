#include<stdio.h>
main(){
int n,i,j,unico=0,aux=0;
double mediana;

do{
    scanf("%d",&n);
}while(n>5000);

int vetor[n];
for(i=0;i<n;i++){

   scanf("%d",&vetor[i]);
}

for(j=0;j<n;j++){
    aux = 0;
    for(i=0;i<n;i++){
        if(vetor[j]!=vetor[i]){
            aux++;
        }
    }
    if(aux == n-1){
        unico++;
    }

}

printf("%d \n",unico);



}
