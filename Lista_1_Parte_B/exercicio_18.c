#include<stdio.h>
main(){
int a,b,c,menor,meio,maior;
char n1,n2,n3;

scanf("%d %d %d \n",&a,&b,&c);
scanf("%c%c%c",&n1,&n2,&n3);

if((a>=b) && (b>=c)){
    maior = a;
    meio = b;
    menor = c;

}

if((b>=a) && (a>=c)){
    maior = b;
    meio = a;
    menor = c;

}

if((c>=b) && (b>=a)){
    maior = c;
    meio = b;
    menor = a;

}

if((a>=c) && (c>=b)){
    maior = a;
    meio = c;
    menor = b;

}

if((c>=a) && (a>=b)){
    maior = c;
    meio = a;
    menor = b;

}

if((b>=c) && (c>=a)){
    maior = b;
    meio = c;
    menor = a;

}

if((n1=='A')&&(n2=='B')&&(n3=='C')){
    printf("%d %d %d\n",menor,meio,maior);
    //printf("%c %c %c",n1,n2,n3);

}
else if((n1=='A')&&(n2=='C')&&(n3=='B')){
    printf("%d %d %d\n",menor,maior,meio);
    //printf("%c %c %c",n1,n2,n3);

}

else if((n1=='B')&&(n2=='A')&&(n3=='C')){
    printf("%d %d %d\n",meio,menor,maior);
    //printf("%c %c %c",n1,n2,n3);

}

else if((n1=='B')&&(n2=='C')&&(n3=='A')){
    printf("%d %d %d\n",meio,maior,menor);
    //printf("%c %c %c",n1,n2,n3);

}

else if((n1=='C')&&(n2=='A')&&(n3=='B')){
    printf("%d %d %d\n",maior,menor,meio);
    //printf("%c %c %c",n1,n2,n3);

}

else if((n1=='C')&&(n2=='B')&&(n3=='A')){
    printf("%d %d %d\n",maior,meio,menor);
    //printf("%c %c %c",n1,n2,n3);

}



}
