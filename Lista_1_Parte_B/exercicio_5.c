#include<stdio.h>
main(){
float nota;
char conceito;
scanf("%f",&nota);
nota = truncf(nota*10)/10;

if(nota<=10 && nota>=9){

    conceito = 'A';

}
else if(nota<9 && nota >= 7.5){

    conceito = 'B';
}
else if(nota<7.5 && nota>=6){

    conceito = 'C';
}
else{
    conceito = 'D';
}

printf("NOTA = %.1f CONCEITO = %c \n",nota,conceito);


}
