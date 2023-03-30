#include<stdio.h>
#include<math.h>

main(){

    int i, n;
    float f, c;

    scanf("%d", &n);

    for(i=1; i <= n; i++){

        scanf("%f", &f);

        c = ( (5*(f-32))/9);

        printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", truncf(f*100)/100, truncf(c*100)/100);
    }

}
