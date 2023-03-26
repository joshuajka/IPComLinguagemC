#include<stdio.h>
#include<stdlib.h>
int tamanhoString(char string[]){
int cont=0;
while(string[cont]!='\0'){
    cont++;
}
return cont;

}

void imprimeLimitado(char string[]){
int cont=0,numero,i;
numero = atoi(string);
if(numero<10){
  numero = numero + 2;
  for(i=2;i<numero;i++){
    printf("%c",string[i]);
}
}
else if(numero<99){
     numero = numero + 3;
     for(i=3;i<numero;i++){
    printf("%c",string[i]);
}
}
else if(numero<999){
     numero = numero + 4;
     for(i=4;i<numero;i++){
    printf("%c",string[i]);
}
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
imprimeLimitado(palavra);
printf("\n");
 cont++;
}


}
