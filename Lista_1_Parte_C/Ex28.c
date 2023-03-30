#include<stdio.h>

main(){

    int i, num, den;
    float n;

    scanf("%f", &n);

    num = n*100;
    den = 100;

    for(i=1; i<=n; i++){

        if((num%i==0) && (den%i==0)){
            num = num/i;
            den = den/i;
        }
    }

    printf("%d/%d\n", num, den);

}
