#include<stdio.h>
main(){
float n1,n2,n3,media;
scanf("%f %f %f",&n1,&n2,&n3);
media = (n1+n2+n3)/3;
printf("MEDIA = %.2f \n",truncf(media*100)/100);
if(media>=6){
    printf("APROVADO");

}
else{
    printf("REPROVADO");
}



}
