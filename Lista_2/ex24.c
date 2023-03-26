#include<stdio.h>
main(){

    int num[1000],vetor[1000],n=1,i,max=0,j;
    while(n!=0){
    scanf("%d",&n);

    for(i=0;i<n;++i){
     scanf("%d",&num[i]);
     if(num[i]>max)
      max=num[i];
    }

     for(i=0;i<n;++i)
     vetor[num[i]]=vetor[num[i]]+1;
     for(i=0;i<=max;++i)
      for(j=1;j<=vetor[i];++j)
       printf("%d",i);

       printf("\n");
       for(i=0;i<=n;++i){
       vetor[i] = 0;
       }



    }
}



