#include<stdio.h>
main(){

int mat,nd;
float salmin,salfun,tx,qtd,impostobru,impostoliq,dif;

scanf("%d %f %d %f %f",&mat,&salmin,&nd,&salfun,&tx);

qtd = salfun/salmin;


if(qtd>12){

    impostobru = salfun * 0.2;
    impostoliq = impostobru - (300*nd);
    dif = impostoliq - (salfun*(tx/100));
}

else if(qtd>5){

    impostobru = salfun * 0.08;
    impostoliq = impostobru - (300*nd);
    dif = impostoliq - (salfun*(tx/100));
}

else if(qtd<=5){

    impostobru = salfun * 0.0;
    impostoliq = impostobru - (300*nd);
    dif = impostoliq - (salfun*(tx/100));
}


if(dif>0){

    printf("MATRICULA= %d\n",mat);
    printf("IMPOSTO BRUTO= %.2f\n",truncf(impostobru)*100/100);
    printf("IMPOSTO LIQUIDO= %.2f\n",truncf(impostoliq*100)/100);
    printf("RESULTADO= %.2f\n",truncf(dif*100)/100);
    printf("IMPOSTO A PAGAR\n");
}

else if(dif<0){

    printf("MATRICULA= %d\n",mat);
    printf("IMPOSTO BRUTO= %.2f\n",truncf(impostobru)*100/100);
    printf("IMPOSTO LIQUIDO= %.2f\n",truncf(impostoliq*100)/100);
    printf("RESULTADO= %.2f\n",truncf(dif*100)/100);
    printf("IMPOSTO A RECEBER\n");

}

else if(dif==0){

    printf("MATRICULA= %d\n",mat);
    printf("IMPOSTO BRUTO= %.2f\n",truncf(impostobru)*100/100);
    printf("IMPOSTO LIQUIDO= %.2f\n",truncf(impostoliq*100)/100);
    printf("RESULTADO= %.2f\n",truncf(dif*100)/100);
    printf("IMPOSTO QUITADO\n");
}

}
