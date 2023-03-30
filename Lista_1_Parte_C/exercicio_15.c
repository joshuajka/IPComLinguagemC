#include<stdio.h>
main(){
int numero, divisores = 0,cont;


scanf("%d",&numero);

if(numero<0){
    printf("Numero invalido!\n");
}
else{

for(cont = 1; cont<=numero ; cont++){
    if((numero%cont==0)){

        divisores++;
    }

}


if(divisores==2){

    printf("PRIMO");

}
else{

    printf("NAO PRIMO");
}

}
}
