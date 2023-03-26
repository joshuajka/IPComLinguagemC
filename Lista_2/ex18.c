#include<stdio.h>
main(){
int n,i,j,cont=0,cpf[11],fat=0,invfat=0,mult=1,resto,resto2;

scanf("%d",&n);
int validade[n];

while(cont!=n){
    fat = 0;
    invfat = 0;
    for(i=0;i<11;i++){
        scanf("%d",&cpf[i]);
    }
    mult = 1;
    for(i=0;i<9;i++){
       fat = fat + (mult*cpf[i]);
       mult++;
    }
    mult = 9;
    for(i=0;i<9;i++){
       invfat = invfat + (mult*cpf[i]);
       mult--;
    }

    resto = fat%11;
    resto2 = invfat%11;

    if(resto==10){
        resto = 0;
    }

    if(resto2==10){
        resto2 = 0;
    }

    if((cpf[9]==resto)&&(cpf[10]==resto2)){
        validade[cont] = 1;
    }
    else{
        validade[cont] = 0;
    }


cont++;
}


for(i=0;i<n;i++){
    if(validade[i]==1){
        printf("CPF valido \n");
    }
    else if(validade[i]==0){
         printf("CPF invalido \n");
    }
}




}
