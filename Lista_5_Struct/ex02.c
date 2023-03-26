#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct feira{
double valor;
char nome[50];
};


main(){
int n,m,p,cont=0,i,cont2=0;
double qtd,total=0;
char nome[50];

printf("Casos de teste:\n");
scanf("%d",&n);

while(cont!=n){
printf("Quantidade de produtos:\n");
scanf("%d",&m);

struct feira feirinha[m];


for(i=0;i<m;i++){
printf("NOME VALOR %d:\n",i+1);
scanf("%s", &feirinha[i].nome);
scanf("%lf", &feirinha[i].valor);
}


printf("Numero de produtos comprar:\n");
scanf("%d",&p);

while(cont2!=p){
printf("NOME QTD comprar:\n");
scanf("%s",&nome);
scanf("%lf",&qtd);
for(i=0;i<m;i++){
if(strcmp(feirinha[i].nome,nome)==0){
total = total + feirinha[i].valor*qtd;
}
}

cont2++;
}

printf("R$ %.2lf \n",total);






cont++;
}
}
