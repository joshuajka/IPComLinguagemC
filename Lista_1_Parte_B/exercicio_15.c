#include<stdio.h>
main(){
int cc,dr,rt,grau,pontos=0;

scanf("%d",&cc);
scanf("%d",&dr);
scanf("%d",&rt);

if(cc<7){
    pontos= pontos + 1;
    }

if(dr>50){
    pontos = pontos + 3;
}
if(rt>80000){
    pontos = pontos + 5;
}

if(pontos==9){
    grau = 10;
}
else if(pontos==4){
    grau = 9;
}
else if(pontos==1){
    grau = 8;
}
else{
    grau = 7;
}


printf("ACO DE GRAU = %d\n",grau);
}
