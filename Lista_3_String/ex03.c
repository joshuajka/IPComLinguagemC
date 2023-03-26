
#include<stdio.h>
int qtdletras(char string[]){
int qtd=0,cont=0;
while(string[cont]!='\0'){
if((string[cont]!=' ')&&(string[cont]=='A')||(string[cont]=='a')||(string[cont]=='V')||(string[cont]=='E')||(string[cont]=='e')||(string[cont]=='i')||(string[cont]=='O')||(string[cont]=='o')||(string[cont]=='U')||(string[cont]=='u')||(string[cont]=='Q')||(string[cont]=='q')||(string[cont]=='w')||(string[cont]=='W')||(string[cont]=='r')||(string[cont]=='R')||(string[cont]=='t')||(string[cont]=='T')||(string[cont]=='y')||(string[cont]=='Y')||(string[cont]=='p')||(string[cont]=='P')||(string[cont]=='s')||(string[cont]=='S')||(string[cont]=='d')||(string[cont]=='D')||(string[cont]=='f')||(string[cont]=='F')||(string[cont]=='g')||(string[cont]=='G')||(string[cont]=='h')||(string[cont]=='H')||(string[cont]=='j')||(string[cont]=='J')||(string[cont]=='k')||(string[cont]=='K')||(string[cont]=='l')||(string[cont]=='L')||(string[cont]=='z')||(string[cont]=='Z')||(string[cont]=='x')||(string[cont]=='X')||(string[cont]=='c')||(string[cont]=='C')||(string[cont]=='v')||(string[cont]=='b')||(string[cont]=='B')||(string[cont]=='n')||(string[cont]=='N')||(string[cont]=='m')||(string[cont]=='M')){
        qtd++;
    }
    cont++;
}

return qtd;
}

int qtdvogais(char string[]){
int qtd=0,cont=0;
while(string[cont]!='\0'){
    if((string[cont]!=' ')&&(string[cont]=='A')||(string[cont]=='a')||(string[cont]=='E')||(string[cont]=='e')||(string[cont]=='i')||(string[cont]=='O')||(string[cont]=='o')||(string[cont]=='U')||(string[cont]=='u')){
        qtd++;
    }
    cont++;
}

return qtd;
}

int qtdconsoantes(char string[]){
int qtd=0,cont=0,qtd1=0;
while(string[cont]!='\0'){
    if((string[cont]!=' ')&&(string[cont]=='A')||(string[cont]=='a')||(string[cont]=='E')||(string[cont]=='e')||(string[cont]=='i')||(string[cont]=='O')||(string[cont]=='o')||(string[cont]=='U')||(string[cont]=='u')){
        qtd++;
    }
    else if((string[cont]!=' ')&&(string[cont]=='Q')||(string[cont]=='q')||(string[cont]=='V')||(string[cont]=='w')||(string[cont]=='W')||(string[cont]=='r')||(string[cont]=='R')||(string[cont]=='t')||(string[cont]=='T')||(string[cont]=='y')||(string[cont]=='Y')||(string[cont]=='p')||(string[cont]=='P')||(string[cont]=='s')||(string[cont]=='S')||(string[cont]=='d')||(string[cont]=='D')||(string[cont]=='f')||(string[cont]=='F')||(string[cont]=='g')||(string[cont]=='G')||(string[cont]=='h')||(string[cont]=='H')||(string[cont]=='j')||(string[cont]=='J')||(string[cont]=='k')||(string[cont]=='K')||(string[cont]=='l')||(string[cont]=='L')||(string[cont]=='z')||(string[cont]=='Z')||(string[cont]=='x')||(string[cont]=='X')||(string[cont]=='c')||(string[cont]=='C')||(string[cont]=='v')||(string[cont]=='b')||(string[cont]=='B')||(string[cont]=='n')||(string[cont]=='N')||(string[cont]=='m')||(string[cont]=='M')){
        qtd1++;
    }
    cont++;
}

return qtd1;
}


main(){
int n=1,cont=0;
char entrada[100000];

scanf("%d",&n);
while(cont!=n){
    setbuf(stdin, NULL); //limpar o buffer
    scanf("%[^\n]s",&entrada);
    getchar();
    printf("Letras = %d\n",qtdletras(entrada));
    printf("Vogais = %d\n",qtdvogais(entrada));
    printf("Consoantes = %d\n",qtdconsoantes(entrada));
    cont++;
}


}
