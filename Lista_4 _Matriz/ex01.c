#include<stdio.h>
main(){
int matriz[2][2],Dprincipal,Dsecundaria;
int linha=2,coluna=2,i,j;

for(i=0;i<linha;i++){
    for(j=0;j<coluna;j++){
        scanf("%d",&matriz[i][j]);
        if((i==0)&&(j==0)){
            Dprincipal = matriz[i][j];
        }
        else if(i==j){
          Dprincipal = Dprincipal*matriz[i][j];
        }
        if((i==0)&&(j==1)){
          Dsecundaria = matriz[i][j];
        }
        else if(i+j==1){
            Dsecundaria = Dsecundaria*matriz[i][j];
        }
    }

}

printf("%d",Dprincipal-Dsecundaria);

}
/* (0,0) (0,1) (0,2)
   (1,0) (1,1) (1,2)
   (2,0) (2,1) (2,2) */
