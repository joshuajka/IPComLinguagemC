#include<stdio.h>
main(){
int i;
float n1,n2,n3,menor,maior,meio;

scanf("%d %f %f %f",&i,&n1,&n2,&n3);

if((n1>=n2) && (n2>=n3)){
    maior = n1;
    meio = n2;
    menor = n3;
}

else if((n2>=n1) && (n1>=n3)){
    maior = n2;
    meio = n1;
    menor = n3;
}

else if((n3>=n2) && (n2>=n1)){
    maior = n3;
    meio = n2;
    menor = n1;
}

else if((n3>=n1) && (n1>=n2)){
    maior = n3;
    meio = n1;
    menor = n2;
}

else if((n2>=n3) && (n3>=n1)){
    maior = n2;
    meio = n3;
    menor = n1;
}

else if((n1>=n3) && (n3>=n2)){
    maior = n1;
    meio = n3;
    menor = n2;
}
 switch(i){
 case 1: printf("%.2f %.2f %.2f",menor,meio,maior);
 break;
 case 2: printf("%.2f %.2f %.2f",maior,meio,menor);
 break;
 case 3: printf("%.2f %.2f %.2f",meio,maior,menor);
 break;
 }



}
