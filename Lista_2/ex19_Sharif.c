#include<stdio.h>
main(){
int n,i,j,indice=0,aux=0,cont=1,tam,dif=0,aux2,vetor[1000];


scanf("%d",&n);

for(i=0;i<n;i++){

   scanf("%d",&vetor[i]);
}

for(j=1;j<n;j++){
    for(i=0;i<n-j;i++){
    if(vetor[i]>vetor[i+1]){
        aux = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = aux;
    }

    }
}


for(i=indice;i<n;i++){
    cont = 1;
    dif = 0 ;
    for(j=i+1;j<n;j++){
    if(vetor[i]==vetor[j]){
            cont++;
            indice = j;
    }
    else if(vetor[i]!=vetor[j]){
            dif++;
    }
}
aux2=n-i-1;
if(cont>=2){
printf("%d \n",vetor[indice]);
}
else if((dif==aux2)&&(cont<2)&&(vetor[i]!=vetor[i-1])){
    printf("%d \n",vetor[i]);
}

}


}
