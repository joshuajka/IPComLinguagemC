#include<stdio.h>
main(){
int ordem;
int i,j;

scanf("%d",&ordem);
int matriz[ordem][ordem];

for(i=0;i<ordem;i++){
    for(j=0;j<ordem;j++){
        scanf("%d",&matriz[i][j]);
    }

}

for(i=0;i<ordem;i++){
    for(j=0;j<ordem;j++){
        if(i==j){
          printf("%d \n",matriz[i][j]);
        }
    }

}


}
/* (0,0) (0,1) (0,2)
   (1,0) (1,1) (1,2)
   (2,0) (2,1) (2,2) */

