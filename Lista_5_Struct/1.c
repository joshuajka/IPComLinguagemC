#include <stdio.h>

struct DIVISOR{

    int numerador;
    int denominador;
};

main () {

    int n=0,i=0,m=0,x=0,y=0,controle=0;
    float resultado=0,resultadoCOMP=0;
    scanf("%d", &n);

    while(i!=n){

        scanf("%d",&m);
        struct DIVISOR fracao[m];
        for(x=0;x<m;x++){
            scanf("%d/%d", &fracao[x].numerador, &fracao[x].denominador);
        }
        printf("Caso de teste %d\n", i+1);
        for(x=0;x<m;x++){
            for(y=x+1;y<m;y++){
                resultado = (float)fracao[x].numerador/(float)fracao[x].denominador;
                resultadoCOMP = (float)fracao[y].numerador/(float)fracao[y].denominador;

                if(resultado==resultadoCOMP){
                    printf("%d/%d equivalente a %d/%d\n", fracao[x].numerador,fracao[x].denominador,fracao[y].numerador,fracao[y].denominador);
                 controle++;
                }
            }
        }
        if(controle==0)printf("Nao ha fracoes equivalentes na sequencia\n");
        controle=0;

     i++;
    }

}
