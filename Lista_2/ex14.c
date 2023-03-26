#include<stdio.h>
main(){
int n,i,j,aux,aux2;
double mediana;

do{
    scanf("%d",&n);
}while((n<0)||(n>1000000));
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


if(n%2==0){
    aux2 = n/2;
    mediana = vetor[aux2-1] + vetor[aux2];
    mediana = mediana/2;

}
else if(n%2!=0){
    aux2 = n/2;
    mediana = vetor[aux2];
}
printf("%.2lf \n",mediana);



}
