#include<stdio.h>
#include<math.h>
main(){
int x,y;
scanf("%d",&x);
if(x<1){

   y = x;

}
else if(x==1){

    y = 0;

}
else{

    y = pow(x,2);

}

printf("Y = %d",y);

}
