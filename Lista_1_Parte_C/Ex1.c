#include<stdio.h>
#include<math.h>

main(){

    int i, n, n_p;
    float pop, ge, arq, cad, rend_p, rend_ge, rend_arq, rend_cad, rend_t;

    scanf("%d", &n);

    for(i=1; i <= n; i++){

        scanf("%d %f %f %f %f", &n_p, &pop, &ge, &arq, &cad);

        rend_p = ( (n_p/100) * pop) * 1;
        rend_ge = ( (n_p/100) * ge) * 5;
        rend_arq = ( (n_p/100) * arq) * 10;
        rend_cad = ( (n_p/100) * cad) * 20;

        rend_t = (rend_p + rend_ge + rend_arq + rend_cad);

        printf("A RENDA DO JOGO N. %d E = %.2f\n", i, truncf(rend_t*100)/100);

    }

}
