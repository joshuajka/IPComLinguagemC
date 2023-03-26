#include<stdio.h>
main(){
int q1,q2,n,i,j,aux,cont;

scanf("%d",&q1);
scanf("%d",&q2);
n = q1+q2;
int vetq1[q1],vetq2[q2],fim[n];


for(i=0;i<q1;i++){
    scanf("%d",&vetq1[i]);
    fim[i] = vetq1[i];
}
for(j=0;j<q2;j++){
    scanf("%d",&vetq2[i]);
    fim[i+j] = vetq2[i];
}




for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
        if(fim[j]>fim[j+1]){
            aux = fim[j];
            fim[j] = fim[j+1];
            fim[j+1] = aux;
        }
    }
}


printf("\n");
for(i=0;i<n;i++){
    printf("%d\n",fim[i]);
}



}
