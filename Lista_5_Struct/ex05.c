#include<stdio.h>

struct universidade{
int cod;
double valor;
char nome[100];
};

struct cadastro{
char nome[500];
int cod;
int cred;
};

main(){
int cursos,cont=0,i,cont2=0,alunos,j;

scanf("%d",&cursos);

struct universidade grad[cursos];

while(cont!=cursos){
scanf("%d",&grad[cont].cod);
scanf("%lf",&grad[cont].valor);
setbuf(stdin,NULL);
scanf("%[^\n]s",&grad[cont].nome);
setbuf(stdin,NULL);
cont++;
}

scanf("%d",&alunos);
struct cadastro disc[alunos];

while(cont2!=alunos){
setbuf(stdin,NULL);
scanf("%[^\n]s",&disc[cont2].nome);
setbuf(stdin,NULL);
scanf("%d",&disc[cont2].cod);
scanf("%d",&disc[cont2].cred);
cont2++;
}

for(i=0;i<cont2;i++){
    for(j=0;j<cont;j++){
        if(disc[i].cod == grad[j].cod){
          printf("Aluno(a): %s: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n",disc[i].nome,grad[j].nome,disc[i].cred,grad[j].valor,disc[i].cred*grad[j].valor);
        }
    }
}

}
