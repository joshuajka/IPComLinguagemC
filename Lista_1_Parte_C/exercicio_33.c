#include<stdio.h>
main(){
/*Todo n�mero natural maior que 1 pode ser escrito na forma de uma multiplica��o em que todos os
fatores s�o n�meros primos. Por exemplo, o n�mero 36 pode ser representado pela multiplica��o 2  2 
3  3. A essa representa��o multiplicativa d�-se o nome de Decomposi��o em Fatores Primos ou Fatora��o,
que � um produto de fatores primos. O processo de fatora��o de N segue um m�todo pr�tico de divis�es
sucessivas pelo seu menor fator primo. A cada passo, deve-se encontrar o menor divisor primo do quociente
da divis�o anterior. A Figura 3 mostra dois exemplos d efatora��o em n�meros primos.
Fa�a um programa que leia um n�mero inteiro maior que 1 e apresente sua fatora��o em n�meros
primos. Uma vez executado, o programa deve sempre apresentar uma fatora��o. Caso o n�mero lido seja
inv�lido, o programa deve l�-lo novamente.*/

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
