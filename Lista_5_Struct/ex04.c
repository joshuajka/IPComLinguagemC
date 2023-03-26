#include<stdio.h>
#include<math.h>

struct cordena{
double u;
double x;
double y;
double z;
double norma;
};


int main(){
int nPontos,cont=0,i,j;
double soma;

scanf("%d",&nPontos);
struct cordena pontos[nPontos];
struct cordena aux;
while(cont!=nPontos){
scanf("%lf %lf %lf %lf",&pontos[cont].u,&pontos[cont].x,&pontos[cont].y,&pontos[cont].z);
soma = (pontos[cont].u*pontos[cont].u) + (pontos[cont].x*pontos[cont].x) + (pontos[cont].y*pontos[cont].y) + (pontos[cont].z*pontos[cont].z);
pontos[cont].norma = sqrt(soma);


cont++;
}
for(i=0;i<cont;i++){
    for(j=0;j<cont-i-1;j++){
        if(pontos[j].norma>pontos[j+1].norma){
         aux = pontos[j];
         pontos[j] = pontos[j+1];
         pontos[j+1] = aux;
        }
    }

}
for(i=0;i<cont;i++){
    printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf ) Norma: %.2lf \n",pontos[i].u,pontos[i].x,pontos[i].y,pontos[i].z,pontos[i].norma);


}



return 0;
}
