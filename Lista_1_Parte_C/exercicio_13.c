#include<stdio.h>
main(){
int s=1,par=0,impar=0;
float media_par=0,media_impar=0,qtd_impar=0,qtd_par=0;

while(s!=0){
    scanf("%d",&s);

    if((s%2==0)&&(s!=0)){
        par = par + s;
        qtd_par++;
    }

    else if(s%2!=0){
        impar = impar + s;
        qtd_impar++;
    }


}

media_par = par / qtd_par;
media_impar = impar / qtd_impar;

printf("MEDIA PAR: %.2f\n",truncf(media_par*100.0)/100.0);
printf("MEDIA IMPAR: %.2f\n",truncf(media_impar*100.0)/100.0);







}
