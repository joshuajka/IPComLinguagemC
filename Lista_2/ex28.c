#include<stdio.h>
main(){
int i,j,n1,n2,uniao[200],inter[200],cont=0,dif=0,cont2=0,teste,aux,num,sai=0;

do{
    scanf("%d",&n1);
}while((n1<1)||(n1>100));

int A[n1];

do{
    scanf("%d",&n2);
}while((n2<1)||(n2>100));

int B[n2];

for(i=0;i<n1;i++){
    sai=0;
    dif=0;
    do{
         scanf("%d",&num);
    for(j=0;j<=i;j++){
        if(A[j]!=num){
            dif++;
        }
        if(dif==i){
            A[i]=num;
            sai = 1;
        }
    }
    }while(sai!=1);

}

for(i=0;i<n2;i++){
        sai=0;
        dif=0;


    do{
         scanf("%d",&num);
    for(j=0;j<=i;j++){
        if(B[j]!=num){
            dif++;
        }
        if(dif==i){
            B[i]=num;
            sai = 1;
        }
    }
    }while(sai!=1);

}

for(i=0;i<n1;i++){
    uniao[cont2] = A[i];
    cont2++;
}
teste = cont2;
for(i=0;i<n2;i++){
        dif=0;
        for(j=0;j<teste;j++){
            if(B[i]!=uniao[j]){
                 dif++;
            }
            if(dif==teste){
                uniao[cont2] = B[i];
                cont2++;
            }

            }
        }


for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        if(A[i]==B[j]){
            inter[cont] = A[i];
            cont++;
        }
    }
}

for(i=0;i<cont2;i++){
    for(j=0;j<cont2-i;j++){
        if(uniao[j]>uniao[j+1]){
            aux = uniao[j];
            uniao[j] = uniao[j+1];
            uniao[j+1] = aux;
        }
    }
}

printf("(");
for(i=0;i<cont;i++){
    if(i==cont-1){
     printf("%d)",inter[i]);
    }
    else{
       printf("%d,",inter[i]);
    }
}
printf("\n");

printf("(");
for(i=0;i<cont2;i++){
    if(i==cont2-1){
     printf("%d)",uniao[i]);
    }
    else{
       printf("%d,",uniao[i]);
    }
}
printf("\n");

}




