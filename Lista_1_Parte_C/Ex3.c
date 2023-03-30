#include<stdio.h>
#include<math.h>

main(){

    int i, n, soma;

    scanf("%d", &n);

    if((n > 5) && (n < 2000)){

        for(i=2; i <= n; i+=2){

            soma = i*i;
            printf("%d^2 = %d\n", i, soma);
        }

    }

}
