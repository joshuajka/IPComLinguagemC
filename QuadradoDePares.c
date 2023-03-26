#include<stdio.h>
#include<math.h>
main(){
int n,i;
scanf("%d",&n);
if((n>5) && (n<2000)){

    for(i=2;i<=n;i=i+2){

        printf("%d^2 = %.0f \n",i,pow(i,2));

    }







}


}
