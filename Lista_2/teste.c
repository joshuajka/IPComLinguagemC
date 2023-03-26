#include <stdio.h>
#include <stdlib.h>

#define tam 5

int v[tam] = {3, 2, 4, 3, 4};
int v_dis[tam];
int i, j, repete = 0, n = 0;

int main() {

  for (i = 0; i < tam; i++) {
    if (i == 0) {
      v_dis[n] = v[i];
      n++;
    } else {
      repete = 0;
      //percorre o vetor distinto verificando se o valor v[i] existe no mesmo
      for (j = 0; j < n; j++) {
        if(v[i] == v_dis[j]) {
          repete++;
        }
      }
      //se o valor v[i] não foi encontrado no vetor distinto, então adiciona
      if (repete < 1) {
        v_dis[n] = v[i];
        n++;// aumenta o tamanho do vetor distinto
      }
    }
  }

  printf("Vetor Distinto: ");
  for (i = 0; i < n; i++)
    printf("%d ", v_dis[i]);

  system("pause");
  return 0;
}
