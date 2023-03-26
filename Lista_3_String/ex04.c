#include<stdio.h>

int tamanhoString(char string[]){
int cont=0;
while(string[cont]!='\0'){
    cont++;
}
return cont;

}

int numero1(char string[]){
int erro=0;
if((string[0]!='o')&&(string[0]!='O')){
    erro++;
}
if((string[1]!='n')&&(string[1]!='N')){
    erro++;
}
if((string[2]!='e')&&(string[2]!='E')){
    erro++;
}

return erro;

}

int numero2(char string[]){
int erro=0;
if((string[0]!='t')&&(string[0]!='T')){
    erro++;
}
if((string[1]!='w')&&(string[1]!='W')){
    erro++;
}
if((string[2]!='o')&&(string[2]!='O')){
    erro++;
}

return erro;

}

int numero3(char string[]){
int erro=0;
if((string[0]!='t')&&(string[0]!='T')){
    erro++;
}
if((string[1]!='h')&&(string[1]!='H')){
    erro++;
}
if((string[2]!='r')&&(string[2]!='R')){
    erro++;
}

if((string[3]!='e')&&(string[3]!='E')){
    erro++;
}
if((string[4]!='e')&&(string[4]!='E')){
    erro++;
}
return erro;
}

main(){
int n=1,cont=0,i=0;
char palavra[1000];

scanf("%d",&n);
while(cont!=n){
scanf("%s",&palavra);

if(tamanhoString(palavra)==3){

if(numero1(palavra)<=1){
    printf("1\n");
}

else if(numero2(palavra)<=1){
    printf("2\n");
}

}

else if(tamanhoString(palavra)==5){
    if(numero3(palavra)<=1){
        printf("3\n");
    }
}
cont++;
}
}
