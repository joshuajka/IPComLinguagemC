#include<stdio.h>
#include<math.h>

main(){

    int i, p, l, x=0, mt_al, ps_al, enc;
    float nt_p, nt_l, nt_t, m_p=0, m_l=0, m_f, m_ps;

    do{
        scanf("%d", &mt_al);
        scanf("%d", &enc);
    }while(enc!=-1);

    for(p=1; p<=8; p++){
        do{
            scanf("%f", &nt_p);
            m_p=m_p+nt_p;
            scanf("%d", &enc);
        }while(enc!=-1);
    }

    for(l=1; l<=5; l++){
        do{
            scanf("%f", &nt_l);
            m_l=m_l+nt_l;
            scanf("%d", &enc);
        }while(enc!=-1);
    }
    do{
        scanf("%f", &nt_t);
        scanf("%d", &enc);
    }while(enc!=-1);
    do{
        scanf("%d", &ps_al);
        scanf("%d", &enc);
    }while(enc!=-1);

    m_f = ( (0.7*(m_p/8)) + (0.15*(m_l/5)) + (0.15*nt_t));
    m_ps = ((ps_al*100)/128);

    if((m_f >= 6) && (m_ps >= 75)){
        printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO", mt_al, truncf(m_f*100)/100);

    }else if((m_f >= 6) && (m_ps < 75)){
        printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA", mt_al, truncf(m_f*100)/100);

    }else if((m_f < 6) && (m_ps >= 75)){
        printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA", mt_al, truncf(m_f*100)/100);

    }else if((m_f < 6) && (m_ps < 75)){
        printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA", mt_al, truncf(m_f*100)/100);
    }

}
