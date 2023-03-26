#include<stdio.h>
main(){
int n,i,j,aux,num,contImpar=0,contPar=0;
scanf("%d",&n);
int pares[n],impares[n];

for(i=0;i<n;i++){
    scanf("%d",&num);
    if(num%2==0){
        pares[contPar] = num;
        contPar++;
    }
    else if (num%2!=0){
        impares[contImpar] = num;
        contImpar++;
    }
}

for(i=1;i<contPar;i++){
    for(j=0;j<contPar-i;j++){
        if(pares[j]>pares[j+1]){
            aux = pares[j];
            pares[j] = pares[j+1];
            pares[j+1] = aux;
        }
    }
}
for(i=1;i<contImpar;i++){
    for(j=0;j<contImpar-i;j++){
        if(impares[j]>impares[j+1]){
            aux = impares[j];
            impares[j] = impares[j+1];
            impares[j+1] = aux;
        }
    }
}

for(i=0;i<contPar;i++){
 printf("%d\n",pares[i]);
}


for(i=contImpar;i>=0;i--){
    printf("%d\n",impares[i]);
}

}
