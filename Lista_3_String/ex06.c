#include<stdio.h>
int tamanhoString(char string[]){
int cont=0;
while(string[cont]!='\0'){
    cont++;
}
return cont;

}

int palindromo(char string[]){
int cont=0,tamanho,erro=0;
tamanho = tamanhoString(string)-1;

while(string[cont]!='\0'){
    if(string[cont]!=string[tamanho-cont]){
        erro++;
    }

cont++;
}
return erro;

}

main(){
char palavra[200];
scanf("%s",&palavra);
while((palavra[0]!='E')&&(palavra[1]!='O')&&(palavra[2]!='F')){

if(palindromo(palavra)==0){
    printf("sim\n");
}
else{
   printf("nao\n");
}
scanf("%s",&palavra);
}


}
