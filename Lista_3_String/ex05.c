#include<stdio.h>
#include<stdlib.h>
int tamanhoString(char string[]){
int cont=0;
while(string[cont]!='\0'){
    cont++;
}
return cont;

}


int tirazero(char string[]){
int cont=0,fim,tamanho;
tamanho = tamanhoString(string);
while(string[cont]!='\0'){
    if(string[cont]=='0'){
        string[cont] = string[cont+1];
        tamanho = tamanho - 1;
    }
    cont++;
}
string[tamanho]=' ';

fim = atoi(string);

return fim;
}



main(){
int n1,n2,soma;
char resultado[1000000];

scanf("%d %d",&n1,&n2);

while((n1!=0)&&(n2!=0)){
soma = n1 + n2;
sprintf(resultado, "%i", soma); //converte de int para string;

printf("%d\n",tirazero(resultado));

scanf("%d %d",&n1,&n2);
}


}
