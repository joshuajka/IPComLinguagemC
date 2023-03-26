#include<stdio.h>
main(){
int num, n5,n4,n3,n2,n1,fim;

scanf("%d",&num);

if((num/100000)>0){
    printf("NUMERO INVALIDO");

}
else{


n1 = num/10000;
n2 = num%10000/1000;
n3 = (num%1000)/100;
n4 = (num%100)/10;
n5 = num%10;


if(n1>0){
  fim = n5*10000 + n4*1000 + n3*100 + n2*10 + n1;
}


else if((n1==0) && (n2>0)){
     fim = n5*1000 + n4*100 + n3*10 + n2;

}

else if((n1==0) && (n2==0) && (n3>0)){
     fim = n5*100 + n4*10 + n3;

}

else if((n1==0) && (n2==0) && (n3==0) && (n4>0)){
     fim = n5*10 + n4;

}

else if((n1==0) && (n2==0) && (n3==0) && (n4==0) && (n5>0)){
     fim = n5;

}


if(num == fim){

    printf("PALINDROMO\n");

}

else{

    printf("NAO PALINDROMO\n");
}

}

}
