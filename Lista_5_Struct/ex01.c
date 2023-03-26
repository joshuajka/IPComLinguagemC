#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct entrada{
char texto[50];
int numerador;
int denominador;
float resultado;
}fracao[50];

float retornaNumerador(char string[50]){
int cont = 0;
float numero;
char numerador[50];
while(string[cont]!='/'){
    numerador[cont] = string[cont];
    cont++;
}
numero = atof(numerador);
return numero;
}

float retornaDenominador(char string[50]){
int cont = 0,cont2=0;
float numero;
char numerador[50];
while(string[cont]!='/'){
    cont++;
}
cont++;
while(string[cont]!='\0'){
    numerador[cont2] = string[cont];
    cont++;
    cont2++;
}
numero = atof(numerador);
return numero;
}


main(){
int n,i,j,cont=0,tam,aux;
float num,den;

scanf("%d",&n);

while(cont!=n){
aux=0;
scanf("%d",&tam);

for(i=0;i<tam;i++){
    scanf("%s",fracao[i].texto);
}

for(i=0;i<tam;i++){
fracao[i].numerador = retornaNumerador(fracao[i].texto);
fracao[i].denominador = retornaDenominador(fracao[i].texto);
num = retornaNumerador(fracao[i].texto);
den = retornaDenominador(fracao[i].texto);
fracao[i].resultado = num/den;
}

printf("Caso de teste %d\n",cont+1);
for(i=0;i<tam;i++){
    for(j=i+1;j<tam;j++){
        if(fracao[i].resultado==fracao[j].resultado){
            printf("%s equivalente a %s\n",fracao[i].texto,fracao[j].texto);
            aux++;
        }
    }

}
if(aux==0){
    printf("Nao ha fracoes equivalentes na sequencia \n");
}

cont++;
}
}


