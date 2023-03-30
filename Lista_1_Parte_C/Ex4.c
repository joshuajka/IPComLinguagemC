#include<stdio.h>

main(){

    int x, y, i;

    scanf("%d %d", &x, &y);

    if(x%2==0){

        y = x+(2*y);

        for(i=x; i<y; i+=2){

            printf("%d\n",i);
        }

    }else{
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

}
