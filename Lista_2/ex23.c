#include<stdio.h>
#include<math.h>
main(){

int j=0,a=0,e=0,i=0,o=0,u=0,v1=0,v2=0,v3=0,v4=0,v5=0,pv=0;
float dist=0,soma=0;
char texto[2000];
scanf(" %[^\n]",texto);

while(texto[j]!='\0'){
    if(texto[j]==';'){
        pv++;
    }
    if(pv==0){
    if((texto[j]=='a')||(texto[j]=='A')){
      a++;
    }
    else if((texto[j]=='e')||(texto[j]=='E')){
      e++;
    }
    else if((texto[j]=='i')||(texto[j]=='I')){
      i++;
    }
    else if((texto[j]=='o')||(texto[j]=='O')){
      o++;
    }
    else if((texto[j]=='u')||(texto[j]=='U')){
      u++;
    } }
    if(pv==1){
    if((texto[j]=='a')||(texto[j]=='A')){
      v1++;
    }
    else if((texto[j]=='e')||(texto[j]=='E')){
      v2++;
    }
    else if((texto[j]=='i')||(texto[j]=='I')){
      v3++;
    }
    else if((texto[j]=='o')||(texto[j]=='O')){
      v4++;
    }
    else if((texto[j]=='u')||(texto[j]=='U')){
      v5++;
    }}
    j++;
}
soma = ((a-v1)*(a-v1)) + ((e-v2)*(e-v2)) + ((i-v3)*(i-v3)) + ((o-v4)*(o-v4)) + ((u-v5)*(o-v5));
dist = sqrt(soma);

if(pv==0 || pv>=2){
    printf("FORMATO INVALIDO!\n");
}
else{
    printf("(%d,%d,%d,%d,%d)\n",a,e,i,o,u);
    printf("(%d,%d,%d,%d,%d)\n",v1,v2,v3,v4,v5);
    printf("%.2f\n",dist);
}



}
