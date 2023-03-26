#include<stdio.h>

int tamanhoString(char string[]){
int tam=0;

while(string[tam]!='\0'){
    tam++;
}

return tam;
}


main(){
int n,i,cont=0;
char string1[50];
char string2[50];

scanf("%d",&n);

while(cont!=n){
scanf("%s",&string1);
scanf("%s",&string2);


if(tamanhoString(string1)==tamanhoString(string2)){
    for(i=0;i<tamanhoString(string1);i++){
       printf("%c",string1[i]);
       printf("%c",string2[i]);
    }
}
else if(tamanhoString(string1)>tamanhoString(string2)){
    for(i=0;i<tamanhoString(string1);i++){
       printf("%c",string1[i]);
       if(i<tamanhoString(string2)){
         printf("%c",string2[i]);
       }
    }
}

else if(tamanhoString(string2)>tamanhoString(string1)){
    for(i=0;i<tamanhoString(string2);i++){
    if(i<tamanhoString(string1)){
     printf("%c",string1[i]);
       }
       printf("%c",string2[i]);

    }
}
printf("\n");
cont++;

}




}




