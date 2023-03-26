#include<stdio.h>
main(){
float n1,n2,n3,menor,maior,meio;

scanf("%f %f %f",&n1,&n2,&n3);

if((n1>=n2) && (n2>=n3)){
    maior = n1;
    meio = n2;
    menor = n3;
    printf("%.2f, %.2f, %.2f",menor,meio,maior);
}

else if((n2>=n1) && (n1>=n3)){
    maior = n2;
    meio = n1;
    menor = n3;
    printf("%.2f, %.2f, %.2f",menor,meio,maior);
}

else if((n3>=n2) && (n2>=n1)){
    maior = n3;
    meio = n2;
    menor = n1;
    printf("%.2f, %.2f, %.2f",menor,meio,maior);
}

else if((n3>=n1) && (n1>=n2)){
    maior = n3;
    meio = n1;
    menor = n2;
    printf("%.2f, %.2f, %.2f",menor,meio,maior);
}

else if((n2>=n3) && (n3>=n1)){
    maior = n2;
    meio = n3;
    menor = n1;
    printf("%.2f, %.2f, %.2f",menor,meio,maior);
}

else if((n1>=n3) && (n3>=n2)){
    maior = n1;
    meio = n3;
    menor = n2;
    printf("%.2f, %.2f, %.2f",menor,meio,maior);
}




}
