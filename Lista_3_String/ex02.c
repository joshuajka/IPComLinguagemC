#include<stdio.h>
int tamanhoString(char string[]){
int tam=0;

while(string[tam]!='\0'){
    tam++;
}

return tam;
}

main(){
int casos,cont=0,digitos=0,i;
char numero[1000];

do{
    scanf("%d",&casos);

}while((casos<1)||(casos>1000));

while(cont!=casos){

scanf("%s",&numero);
digitos=0;
for(i=0;i<tamanhoString(numero);i++){
    if(numero[i]=='1'){
        digitos = digitos+2;
    }
    else if(numero[i]=='2'){
       digitos = digitos+5;
    }
    else if(numero[i]=='3'){
       digitos = digitos+5;
    }
    else if(numero[i]=='4'){
       digitos = digitos+4;
    }
    else if(numero[i]=='5'){
       digitos = digitos+5;
    }
    else if(numero[i]=='6'){
       digitos = digitos+6;
    }
    else if(numero[i]=='7'){
       digitos = digitos+3;
    }
    else if(numero[i]=='8'){
       digitos = digitos+7;
    }
    else if(numero[i]=='9'){
       digitos = digitos+6;
    }
    else if(numero[i]=='0'){
       digitos = digitos+6;
    }
}

printf("%d leds\n",digitos);


cont++;
}


}
