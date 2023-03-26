#include<stdio.h>
#include<string.h>

struct saudacao{
char pais[30];
char frase[50];
int t;
};

main(){
struct saudacao paises[24];

strcpy(paises[0].pais,"brasil");
strcpy(paises[0].frase,"Feliz Natal!");

strcpy(paises[1].pais,"alemanha");
strcpy(paises[1].frase,"Frohliche Weihnachten!");

strcpy(paises[2].pais,"austria");
strcpy(paises[2].frase,"Frohe Weihnacht!");

strcpy(paises[3].pais,"coreia");
strcpy(paises[3].frase,"Chuk Sung Tan!");

strcpy(paises[4].pais,"espanha");
strcpy(paises[4].frase,"Feliz Navidad!");

strcpy(paises[5].pais,"grecia");
strcpy(paises[5].frase,"Kala Christougena!");

strcpy(paises[6].pais,"estados-unidos");
strcpy(paises[6].frase,"Merry Christmas!");

strcpy(paises[7].pais,"inglaterra");
strcpy(paises[7].frase,"Merry Christmas!");

strcpy(paises[8].pais,"australia");
strcpy(paises[8].frase,"Merry Christmas!");

strcpy(paises[9].pais,"portugal");
strcpy(paises[9].frase,"Feliz Natal!");

strcpy(paises[10].pais,"suecia");
strcpy(paises[10].frase,"God Jul!");

strcpy(paises[11].pais,"turquia");
strcpy(paises[11].frase,"Mutlu Noeller");

strcpy(paises[12].pais,"argentina");
strcpy(paises[12].frase,"Feliz Navidad!");

strcpy(paises[13].pais,"chile");
strcpy(paises[13].frase,"Feliz Navidad!");

strcpy(paises[14].pais,"mexico");
strcpy(paises[14].frase,"Feliz Navidad!");

strcpy(paises[15].pais,"antardida");
strcpy(paises[15].frase,"Merry Christmas!");

strcpy(paises[16].pais,"canada");
strcpy(paises[16].frase,"Merry Christmas!");

strcpy(paises[17].pais,"irlanda");
strcpy(paises[17].frase,"Nollaig Shona Dhuit!");

strcpy(paises[18].pais,"belgica");
strcpy(paises[18].frase,"Zalig Kerstfeest!");

strcpy(paises[19].pais,"italia");
strcpy(paises[19].frase,"Buon Natale!");

strcpy(paises[20].pais,"libia");
strcpy(paises[20].frase,"Buon Natale!");

strcpy(paises[21].pais,"siria");
strcpy(paises[21].frase,"Milad Mubarak!");

strcpy(paises[22].pais,"marrocos");
strcpy(paises[22].frase,"Milad Mubarak!");

strcpy(paises[23].pais,"japao");
strcpy(paises[23].frase,"Merii Kurisumasu!");

int i,nada=0;
char nome[30];
scanf("%s",&nome);
for(i=0;i<24;i++){
    if(strcmp(paises[i].pais,nome)==0){
        printf("%s",paises[i].frase);
    }
    else{
        nada++;
    }
}
if(nada==24){
    printf("-- NOT FOUND --");
}



}
