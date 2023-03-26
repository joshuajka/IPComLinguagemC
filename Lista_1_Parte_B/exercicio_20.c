#include<stdio.h>
#define SALARIO_MINIMO 937.00
main(){
float rendaBruta,renda;
int qtd,tipo_escola,etnia,cota;
// 1 particular // 2 publica

// 1 preto //2 pardo //3 indigena //4 branco
scanf("%f %d %d %d",&rendaBruta,&qtd,&tipo_escola,&etnia);

renda = rendaBruta/qtd;

if((tipo_escola==2)&&(renda<=(SALARIO_MINIMO*1.5))&&(etnia==1)||(etnia==2)||(etnia==3)){
        cota = 2;
    printf("ALUNO COTISTA (L%d)\n",cota);
}

else if((tipo_escola==2)&&(renda<=(SALARIO_MINIMO*1.5))){
        cota = 1;
    printf("ALUNO COTISTA (L%d)\n",cota);
}


else if((tipo_escola==2)&& (renda>(SALARIO_MINIMO*1.5))&&(etnia==1)||(etnia==2)||(etnia==3)){
        cota = 4;
    printf("ALUNO COTISTA (L%d)\n",cota);
}

else if((tipo_escola==2)&& (renda>(SALARIO_MINIMO*1.5))){
        cota = 3;
    printf("ALUNO COTISTA (L%d)\n",cota);
}

else{
    printf("ALUNO NAO COTISTA\n");
}

}
