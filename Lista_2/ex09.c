#include<stdio.h>
main(){
int n,i,j;

double x,y,z,x1,y1,z1,auxX,auxY,auxZ,dist,soma;

do{
    scanf("%d",&n);
}while((n<2) || (n>1000));

double vetor[n-1];

for(i=0;i<n-1;i++){



    if(i>=1){
    scanf("%lf %lf %lf",&x,&y,&z);
    soma = (auxX - x)*(auxX - x) + (auxY - y)*(auxY - y) + (auxZ - z)*(auxZ - z);
    vetor[i] = sqrt(soma);
    auxX = x;
    auxY = y;
    auxZ = z;
 }

    if(i==0){
    scanf("%lf %lf %lf",&x,&y,&z);
    scanf("%lf %lf %lf",&x1,&y1,&z1);
    auxX = x1;
    auxY = y1;
    auxZ = z1;

    soma = (x - x1)*(x - x1) + (y - y1)*(y - y1) + (z - z1)*(z - z1);
    vetor[i] = sqrt(soma);
    }










}
for(j=0;j<n-1;j++){
        printf("%.2lf \n",vetor[j]);
}






}
