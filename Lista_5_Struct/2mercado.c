#include <stdio.h>
#include <string.h>

struct mercado{

  char tipo[50];
  int quantidade;
  double preco;

};

main () {

  int x=0,y=0,i=0,tem_no_mercado=0,vai_compra=0,vai_a_feira=0;
  double soma=0;

  scanf("%d", &vai_a_feira);

  while(i!=vai_a_feira){

    //[1] ESCANIANDO OS ITENS QUE TEM NO MERCADO
    scanf("%d", &tem_no_mercado);
    struct mercado TEM_NO_MERCADO[tem_no_mercado];

    for ( x = 0; x < tem_no_mercado; x++) {
      scanf("%s %lf", &TEM_NO_MERCADO[x].tipo, &TEM_NO_MERCADO[x].preco);
    }

    //[2] ESCANIANDO OS ITENS QUE QUER COMPRAR
    scanf("%d", &vai_compra);
    struct mercado VAI_COMPRA[vai_compra];

    for ( y = 0; y < vai_compra; y++) {
      scanf("%s %d", &VAI_COMPRA[y].tipo, &VAI_COMPRA[y].quantidade);
    }

    //[SAIDA DO PROGRAMA]
    for ( x = 0; x < tem_no_mercado; x++) {
      for ( y = 0; y < vai_compra; y++) {
        if(strcmp(TEM_NO_MERCADO[x].tipo,VAI_COMPRA[y].tipo) == 0){
          soma += TEM_NO_MERCADO[x].preco * VAI_COMPRA[y].quantidade;
        }
      }
    }

    printf("R$ %.2lf\n", soma);
    soma=0;
    i++;
  }
}
