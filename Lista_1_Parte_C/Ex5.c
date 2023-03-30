#include<stdio.h>

main(){

    int a, r, n, i, soma=0;

    scanf("%d %d %d", &a, &r, &n);

    soma = a;

    for(i=1; i<n; i++){

        soma = soma+(a+(r*i));
    }
    printf("%d\n", soma);

}
