#include<stdio.h>
main(){
int n,i,j;
double x1,x2,y1,y2,z1,z2,auxX,auxY,auxZ,difX,difY,difZ;

do{
    scanf("%d",&n);
}while((n<2) || (n>1000));
double pontos[n-1];

for(i=0;i<n-1;i++){
    if(i==0){
        scanf("%lf %lf %lf",&x1,&y1,&z1);
        scanf("%lf %lf %lf",&x2,&y2,&z2);
        difX = x2 - x1;
        if(difX<0){
            difX = difX*-1;
        }
        difY = y2 - y1;
        if(difY<0){
            difY = difY*-1;
        }
        difZ = z2 - z1;
        if(difZ<0){
            difZ = difZ*-1;
        }
        auxX = x2;
        auxY = y2;
        auxZ = z2;
    }
    if(i>=1){
       scanf("%lf %lf %lf",&x2,&y2,&z2);
       difX = x2 - auxX;
       if(difX<0){
            difX = difX*-1;
        }
       difY = y2 - auxY;
       if(difY<0){
            difY = difY*-1;
        }
       difZ = z2 - auxZ;
       if(difZ<0){
            difZ = difZ*-1;
        }
       auxX = x2;
       auxY = y2;
       auxZ = z2;

    }
    if((difX >= difY) && (difX >= difZ)){
        pontos[i] = difX;
    }
    else if((difY >= difX) && (difY >= difZ)){
        pontos[i] = difY;
    }
    else if((difZ >= difY) && (difZ >= difX)){
        pontos[i] = difZ;
    }

}

for(j=0;j<n-1;j++){
    printf("%.2lf\n",pontos[j]);
}





}
