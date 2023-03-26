#include<stdio.h>
main(){
int n=1,maior=0,j,i,maiores=0;

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
        }while((n<0) || (n>10001));

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



}
}


}
