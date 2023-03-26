#include<stdio.h>
main(){
int n1,n2,n3,n4,soma=0;

scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

if((n1<=n2)||(n1<=n3)||(n1<=n4)){

    soma = soma + n1;
}

if((n2<=n1)||(n2<=n3)||(n2<=n4)){

    soma = soma + n2;
}

if((n3<=n2)||(n3<=n1)||(n3<=n4)){

    soma = soma + n3;
}

if((n4<n2)||(n4<n3)||(n4<n1)){

    soma = soma + n4;
}

printf("%d",soma);

}
