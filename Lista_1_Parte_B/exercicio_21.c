#include<stdio.h>
main(){

float a,b,c,dif1,dif2,dif3;

scanf("%f %f %f",&a,&b,&c);

dif1 = b - c;
dif2 = a - c;
dif3 = a - b;

if(dif1<0){

    dif1 = dif1 * -1;
}

if(dif2<0){

    dif2 = dif2 * -1;
}

if(dif3<0){

    dif3 = dif3 * -1;
}

if((dif1<a)&&(a<b+c)&&(dif2<b)&&(b<a+c)&&(dif3<c)&&(c<a+b)){

    printf("Perimetro = %.1f\n",(a+b+c));
}

else{

    printf("Area = %.1f\n",truncf((a+b)*c)/2);
}





}
