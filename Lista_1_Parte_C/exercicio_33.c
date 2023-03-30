#include<stdio.h>
main(){
/*Todo número natural maior que 1 pode ser escrito na forma de uma multiplicação em que todos os
fatores são números primos. Por exemplo, o número 36 pode ser representado pela multiplicação 2  2 
3  3. A essa representação multiplicativa dá-se o nome de Decomposição em Fatores Primos ou Fatoração,
que é um produto de fatores primos. O processo de fatoração de N segue um método prático de divisões
sucessivas pelo seu menor fator primo. A cada passo, deve-se encontrar o menor divisor primo do quociente
da divisão anterior. A Figura 3 mostra dois exemplos d efatoração em números primos.
Faça um programa que leia um número inteiro maior que 1 e apresente sua fatoração em números
primos. Uma vez executado, o programa deve sempre apresentar uma fatoração. Caso o número lido seja
inválido, o programa deve lê-lo novamente.*/

int n=0,cont=2,i,div=0,aux;
do{
scanf("%d",&n);
if(n<=0){

    printf("Fatoracao nao e possivel para o numero %d! \n",n);
}

}while(n<=0);
printf("%d = ",n);
while(n!=1){

    for(i=1;i<=n;i++){
        if(cont%i==0){
            div++;
        }
    }

    if(div==2){
        while(n%cont==0){
                printf(" %d ",cont);
        n = n/cont;
    if(n!=1){
    printf("x");
   }
   }

    }
    cont++;
    div = 0;





}




}
