#include<stdio.h>
main(){
int data,dia,mes,ano;
scanf("%d",&data);
//ddmmaaaa
//10000000
dia = data/1000000;
mes = data%1000000 / 10000;
ano = data%10000;

if((dia>31)|| (dia<=0) || (mes>12)||(mes<=0) || (ano<=0)){
    printf("Data invalida!");

}
else if((dia>28) && (mes==2)){
    printf("Data invalida!");
}

else{



switch(mes){
case 1: printf("%d de janeiro de %d",dia,ano);
break;
case 2: printf("%d de fevereiro de %d",dia,ano);
break;
case 3: printf("%d de marco de %d",dia,ano);
break;
case 4: printf("%d de abril de %d",dia,ano);
break;
case 5: printf("%d de maio de %d",dia,ano);
break;
case 6: printf("%d de junho de %d",dia,ano);
break;
case 7: printf("%d de julho de %d",dia,ano);
break;
case 8: printf("%d de agosto de %d",dia,ano);
break;
case 9: printf("%d de setembro de %d",dia,ano);
break;
case 10: printf("%d de outubro de %d",dia,ano);
break;
case 11: printf("%d de novembro de %d",dia,ano);
break;
case 12: printf("%d de dezembro de %d",dia,ano);
break;


}
}


}
