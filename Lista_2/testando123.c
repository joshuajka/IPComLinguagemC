#include<stdio.h>
#include<math.h>
main(){
int n,d,i,n1,div,div2,cont1,cont2,j,aux=0;
float teste1,teste2;
scanf("%d %d",&n,&d);
scanf("%d",&n1);

int num[n];

cont1 = n-1;
cont2 = n-2;
teste1 = pow(10,cont1);
teste2 = pow(10,cont2);
div = teste1;
div2 = teste2;

for(i=0;i<n;i++){
        if(i==0){
          num[i] = n1/div;
        }
        else if(i>=1){
        num[i]=(n1%div)/div2;
        cont1--;
        cont2--;
        if(cont2>=0){
        teste1 = pow(10,cont1);
        teste2 = pow(10,cont2);
        }
        div = teste1;
        div2 = teste2;

        }

}
for(i=0;i<n;i++){
    for(j=1;j<n-i;j++){
        if(num[j]>=num[j+1]){
            aux = num[j];
            num[j] = num[j+1];
            num[j+1] = aux;
        }
    }
}

for(i=n-1;i>n-d-1;i--){
printf("%d",num[i]);
}

}
