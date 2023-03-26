#include<stdio.h>
main(){
    int n,k,i,qtd=0;

    do{
    scanf("%d",&n);

    }while((n<0) || (n>1000));

    int vetor[n];

    for(i=0;i<n;i++){

        scanf("%d",&vetor[i]);
    }
    scanf("%d",&k);

    for(i=0;i<n;i++){

        if(vetor[i]>=k){
            qtd = qtd +1;
        }
    }

    printf("%d",qtd);
/*
Entrada
O programa terá apenas um caso de teste. O programa deve ler, obrigatoriamente, um número N que
pertença ao intervalo 1 ≤ N ≤ 1000. Se N lido não for válido, o programa deve fazer uma nova leitura de N.
Caso N seja válido, N representa o tamanho do vetor V. Na próxima linha há N números inteiros separados
por um espaço em branco cada, representando cada elemento do vetor V. E finalmente, na última linha há
um inteiro K.
Saída
Seu programa gera apenas uma linha de saída contendo um número inteiro representando quantos elementos
do vetor V são maiores ou iguais ao inteiro K. Após a impressão do valor quebre uma linha.
*/




}
