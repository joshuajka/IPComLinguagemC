#include<stdio.h>
main(){
float n1,n2,n3,n4,menor,maior,meio1,meio2;

scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

if((n1>=n2) && (n2>=n3) && (n3>=n4)){
    maior = n1;
    meio1 = n2;
    meio2 = n3;
    menor = n4;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n2>=n1) && (n1>=n3) && (n3>=n4)){
    maior = n2;
    meio1 = n1;
    meio2 = n3;
    menor = n4;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n3>=n2) && (n2>=n1) && (n1>=n4)){
    maior = n3;
    meio1 = n2;
    meio2 = n1;
    menor = n4;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n4>=n2) && (n2>=n1) && (n1>=n3)){
    maior = n4;
    meio1 = n2;
    meio2 = n1;
    menor = n3;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n3>=n1) && (n1>=n2) && (n2>=n4)){
    maior = n3;
    meio1 = n1;
    meio2 = n2;
    menor = n4;
printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n4>=n1) && (n1>=n2) && (n2>=n3)){
    maior = n4;
    meio1 = n1;
    meio2 = n2;
    menor = n3;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n1>=n3) && (n3>=n2) && (n2>=n4)){
    maior = n1;
    meio1 = n3;
    meio2 = n2;
    menor = n4;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n2>=n3) && (n3>=n1) && (n1>=n4)){
    maior = n2;
    meio1 = n3;
    meio2 = n1;
    menor = n4;
   printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n4>=n3) && (n3>=n1) && (n1>=n2)){
    maior = n4;
    meio1 = n3;
    meio2 = n1;
    menor = n2;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n1>=n4) && (n4>=n3) && (n3>=n2)){
    maior = n1;
    meio1 = n4;
    meio2 = n3;
    menor = n2;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n2>=n4) && (n4>=n3) && (n3>=n1)){
    maior = n2;
    meio1 = n4;
    meio2 = n3;
    menor = n1;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n3>=n4) && (n4>=n2) && (n2>=n1)){
    maior = n3;
    meio1 = n4;
    meio2 = n2;
    menor = n1;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n3>=n2) && (n2>=n4) && (n4>=n1)){
    maior = n3;
    meio1 = n2;
    meio2 = n4;
    menor = n1;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n3>=n1) && (n1>=n4) && (n4>=n2)){
    maior = n3;
    meio1 = n1;
    meio2 = n4;
    menor = n2;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n2>=n3) && (n3>=n4) && (n4>=n1)){
    maior = n2;
    meio1 = n3;
    meio2 = n4;
    menor = n1;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

    else if((n2>=n1) && (n1>=n4) && (n4>=n3)){
    maior = n2;
    meio1 = n1;
    meio2 = n4;
    menor = n3;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}


else if((n4>=n3) && (n3>=n2) && (n2>=n1)){
    maior = n4;
    meio1 = n3;
    meio2 = n2;
    menor = n1;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n1>=n2) && (n2>=n4) && (n4>=n3)){
    maior = n1;
    meio1 = n2;
    meio2 = n4;
    menor = n3;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n1>=n3) && (n3>=n4) && (n4>=n2)){
    maior = n1;
    meio1 = n3;
    meio2 = n4;
    menor = n2;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n1>=n4) && (n4>=n2) && (n2>=n3)){
    maior = n1;
    meio1 = n4;
    meio2 = n2;
    menor = n3;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n2>=n4) && (n4>=n1) && (n1>=n3)){
    maior = n2;
    meio1 = n4;
    meio2 = n1;
    menor = n3;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n3>=n4) && (n4>=n1) && (n1>=n2)){
    maior = n3;
    meio1 = n4;
    meio2 = n1;
    menor = n2;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n4>=n1) && (n1>=n3) && (n3>=n2)){
    maior = n4;
    meio1 = n1;
    meio2 = n3;
    menor = n2;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}

else if((n4>=n2) && (n2>=n3) && (n3>=n1)){
    maior = n4;
    meio1 = n2;
    meio2 = n3;
    menor = n1;
    printf("%.2f, %.2f, %.2f, %.2f",truncf(menor*100)/100,truncf(meio2*100)/100,truncf(meio1*100)/100,truncf(maior*100)/100);
}







}
