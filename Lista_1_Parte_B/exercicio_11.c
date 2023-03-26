#include<stdio.h>
#include<math.h>
main(){
float a,b,c,delta,raiz1,raiz2,menor,maior;

scanf("%f %f %f",&a,&b,&c);

delta = (pow(b,2)) - (4*a*c);

if(delta>0){

    printf("RAIZES DISTINTAS\n");

    raiz1 = ((-1*b) + sqrt(delta)) / (2*a);

    raiz2 = ((-1*b) - sqrt(delta)) / (2*a);

    if(raiz1<raiz2){
        menor = raiz1;
        maior = raiz2;
    }
    else{
        menor = raiz2;
        maior = raiz1;
    }


    printf("X1 = %.2f\n",truncf(menor*100.0)/100.0);
    printf("X2 = %.2f\n",truncf(maior*100.0)/100.0);

}

else if(delta==0){
    printf("RAIZ UNICA\n");

    raiz1 = ((-1*b) + sqrt(delta)) / (2*a);
    //raiz2 = (b*(-1.0) - sqrt(delta)) / (2.0*a);


    printf("X1 = %.2f\n",truncf(raiz1*100.0)/100.0);

}

else if(delta<0) {

  printf("RAIZES IMAGINARIAS\n");

}




}
