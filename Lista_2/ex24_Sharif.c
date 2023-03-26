#include<stdio.h>

main(){

    int j, n,m;


    while(1){
     scanf("%d",&n);
     if(n==0){
        break;
     }
        int vetor[n];

        for (j=0; j<n; j++){
            scanf("%d",&vetor[j]);

        }

        m=vetor[0];

        for (j=0; j<n; j++){
            if(m<vetor[j]){
            m=vetor[j];
            }

        }

        int cont[m+1], ordenado[n];

        for (j=0;j<m+1;j++){
            cont[j]=0;

        }

        for (j=0; j<n; j++){

            cont[vetor[j]]++;

        }
        int k=0;
        for (j=0; j<=m; j++){
            if(cont[j]!=0){
                while(cont[j]>0){
                ordenado[k]=j;
                k++;
                cont[j]--;
                }
            }
        }

        for (j=0; j<n; j++){

            vetor[j]=ordenado[j];

        }

        for (j=0; j<n; j++){
            if (j<n-1){

            printf("%d ",vetor[j]);

            }

            else{

                printf("%d\n",vetor[j]);


            }

        }
    }

}
