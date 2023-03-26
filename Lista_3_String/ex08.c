#include<stdio.h>
#include<stdlib.h>

int tamanhoString(char string[]){
int cont=0;
while(string[cont]!='\0'){
    cont++;
}
return cont;

}

void achaCaracter(char string[]){
int cont=0,i=2,tamanho;
char caracter = string[0];
tamanho = tamanhoString(string);
while(i<tamanho){
  if(string[i]==caracter){
        printf("Caractere %c encontrado no indice %d da string.",caracter,i-2);
        break;
    }
    if((i==tamanho-1)&&(string[i]!=caracter)){
            printf("Caractere %c nao encontrado.",caracter);
}

    i++;
}

}



main(){
char palavra[499];
int n,cont=0,numero,i;

do{
 scanf("%d",&n);
}while((n<0)||(n>20));

while(cont!=n){
setbuf(stdin, NULL);
scanf("%[^\n]s",&palavra);
getchar();
achaCaracter(palavra);
printf("\n");
 cont++;
}


}

