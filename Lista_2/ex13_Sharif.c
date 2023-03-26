#include<stdio.h>
main(){
int n,i,j,indice,maior;

scanf("%d",&n);
int vetor[n],freq[n];

for(i=0;i<n;i++){
          scanf("%d",&vetor[i]);

}

for(j=0;j<n;j++){
        freq[j] = 0;
    for(i=0;i<n;i++){
        if(vetor[j]==vetor[i]){
            freq[j] = freq[j] + 1;
        }

    }
}

for(j=0;j<n;j++){
    for(i=0;i<n;i++){
        if(freq[j]>freq[i]){
                maior = freq[j];
                indice = j;
           }
         if(freq[j]==maior && vetor[i]<vetor[j]){
            indice = i;
         }

    }
}

printf("%d\n",vetor[indice]);
printf("%d\n",freq[indice]);




}
