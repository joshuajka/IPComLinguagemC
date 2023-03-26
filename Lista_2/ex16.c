#include<stdio.h>
main(){
int n,k,i,j,pontual=0,atrasado=0;
double mediana;

do{
    scanf("%d %d",&n,&k);
}while((n<0)&&(k>1000));

int vetor[n];

for(i=0;i<n;i++){

   scanf("%d",&vetor[i]);
   if(vetor[i]<=0){
    pontual++;
   }
   else{
    atrasado++;
   }

}


if(pontual<k){
    printf("SIM");
}

else if(pontual>=k){
    printf("NAO \n");

    for(j=n;j>=0;j--){
        if(vetor[j]<=0){
            printf("%d \n",j+1);
        }
    }

}




}
