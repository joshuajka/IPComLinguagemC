#include<stdio.h>
main(){
int n,maior,j,i,maiores=0,vetor[10000];

scanf("%d",&n);
while(n!=0){
maior=0;
for(i=0;i<n;i++){
scanf("%d",&vetor[i]);

    if(vetor[i]>maior){
        maior = vetor[i];
    }
}

for(j=0;j<=maior;j++){
maiores = 0;
 for(i=0;i<n;i++){
    if(vetor[i]<=j){
        maiores++;
    }
 }
printf("(%d) %d \n",j,maiores);
}

scanf("%d",&n);

}
}



