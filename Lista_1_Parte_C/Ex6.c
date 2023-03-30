#include<stdio.h>
#include<math.h>

main(){

    int n, i;
    float x, soma=0;

    scanf("%d", &n);

    if(n > 1){

        for(i=1; i<n; i++){

            x=i;
            soma=soma+(1/x);
        }
        printf("%.6lf\n", trunc(soma*1000000)/1000000);

    }else{
        printf("NUMERO INVALIDO!\n");
    }
}
