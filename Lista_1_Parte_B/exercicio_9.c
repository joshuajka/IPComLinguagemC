#include<stdio.h>
main(){
int numero,milhar,centena,dezena,unidade;
scanf("%d",&numero);
char mil,cent,dez,uni;


if((numero/10000)>= 1 || numero==0){

    printf("Numero invalido!");
}
else{

milhar = numero/1000;
centena = (numero%1000)/100;
dezena= (numero%100)/10;
unidade = numero%10;

if(milhar>1){

mil = 's';

}
else{

mil=' ';

}

if(centena>1){

cent = 's';

}
else{

cent=' ';

}

if(dezena>1){

dez = 's';

}
else{

dez=' ';

}


if(unidade>1){

uni = 's';

}
else{

uni=' ';

}







if((milhar>=1) && (centena>=1)&& (dezena>=1) && (unidade>=1)){

printf("(quarta ordem) %d = %d unidade%c de milhar + %d centena%c + %d dezena%c + %d unidade%c = %d + %d + %d + %d",numero,milhar,mil,centena,cent,dezena,dez,unidade,uni,milhar*1000,centena*100,dezena*10,unidade);
}

else if((milhar == 0) && (centena>=1) && (dezena>=1) && (unidade>=1)){

printf("(terceira ordem) %d = %d centena%c + %d dezena%c + %d unidade%c = %d + %d + %d",numero,centena,cent,dezena,dez,unidade,uni,centena*100,dezena*10,unidade);
}

else if((milhar == 0) && (centena == 0) && (dezena>=1) && (unidade>=1)){

  printf("(segunda ordem) %d = %d dezena%c + %d unidade%c = %d + %d",numero,dezena,dez,unidade,uni,dezena*10,unidade);

}

else if((milhar>=1) && (centena>=1)&& (dezena>=1) && (unidade==0)){

printf("(quarta ordem) %d = %d unidade%c de milhar + %d centena%c + %d dezena%c = %d + %d + %d",numero,milhar,mil,centena,cent,dezena,dez,milhar*1000,centena*100,dezena*10);
}

else if((milhar>=1) && (centena>=1)&& (dezena==0) && (unidade>=1)){

printf("(quarta ordem) %d = %d unidade%c de milhar + %d centena%c + %d unidade%c = %d + %d+ %d",numero,milhar,mil,centena,cent,unidade,uni,milhar*1000,centena*100,unidade);
}

else if((milhar>=1) && (centena==0)&& (dezena>=1) && (unidade>=1)){

printf("(quarta ordem) %d = %d unidade%c de milhar + %d dezena%c + %d unidade%c = %d + %d + %d + %d",numero,milhar,mil,dezena,dez,unidade,uni,milhar*1000,dezena*10,unidade);
}

else if((milhar>=1) && (centena==0)&& (dezena==0) && (unidade==0)){

printf("(quarta ordem) %d = %d unidade%c de milhar = %d ",numero,milhar,mil,milhar*1000);
}

else if((milhar>=1) && (centena>=1)&& (dezena==0) && (unidade==0)){

printf("(quarta ordem) %d = %d unidade%c de milhar + %d centena%c = %d + %d",numero,milhar,mil,centena,cent,milhar*1000,centena*100);
}

else if((milhar>=1) && (centena==0)&& (dezena==0) && (unidade>=1)){

printf("(quarta ordem) %d = %d unidade%c de milhar + %d unidade%c = %d + %d ",numero,milhar,mil,unidade,uni,milhar*1000,unidade);
}

else if((milhar>=1) && (centena==0)&& (dezena>=1) && (unidade==0)){

printf("(quarta ordem) %d = %d unidade%c de milhar + %d dezena%c = %d + %d ",numero,milhar,mil,dezena,dez,milhar*1000,dezena*10);
}

else if((milhar==0) && (centena==0)&& (dezena>=1) && (unidade==0)){

printf("(segunda ordem) %d = %d dezena%c = %d ",numero,dezena,dez,dezena*10);
}

else if((milhar==0) && (centena>=1)&& (dezena==0) && (unidade==0)){

printf("(terceira ordem) %d = %d centena%c = %d",numero,centena,cent,centena*100);
}

else if((milhar==0) && (centena>=1)&& (dezena==0) && (unidade>=1)){

printf("(terceira ordem) %d = %d centena%c + %d unidade%c = %d + %d",numero,centena,cent,unidade,uni,centena*100,unidade);
}

else if((milhar==0) && (centena>=1)&& (dezena>=1) && (unidade==0)){

printf("(terceira ordem) %d = %d centena%c + %d dezena%c = %d + %d ",numero,centena,cent,dezena,dez,centena*100,dezena*10);
}

else {

printf("(primeira ordem) %d = %d unidade%c = %d",numero,unidade,uni,unidade);

}
}

}
