#include<stdio.h>
main(){
float salario;
scanf("%f",&salario);

if(salario<=300.00){

    salario = salario * 1.5;
}
else{

    salario = salario * 1.3;
}

printf("SALARIO COM REAJUSTE = %.2f",truncf(salario*100)/100);

}
