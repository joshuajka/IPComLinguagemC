#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
int i,j,n,cont=0,cont2,inicio,fim;
int vetor[1000];
char numeros[1000],aux[1000];

scanf("%d",&n);

while(cont!=n){
 scanf("%d %d",&inicio,&fim);
 cont2=0;
 for(i=inicio;i<=fim;i++){
    sprintf(aux,"%i",i);
    for(j=0;j<strlen(aux);j++){
       numeros[cont2] = aux[j];
       cont2++;
    }
 }

 for(i=strlen(numeros)-1;i>=0;i--){
    numeros[cont2] = numeros[i];
    cont2++;
 }
printf("%s\n",numeros);
cont++;
}



}
