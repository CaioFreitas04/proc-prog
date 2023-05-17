#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct date{        //dia, mês, ano;
    unsigned int day, mon, yr;
} dat;

typedef struct compromisso{
    dat data;
    char comp[62];
} cpr;


void appointmentReader(cpr a);      //função que lê e imprime compromissos;


int main(){
    //var. sMes e sAno armazenam a seleção do mês e do ano, respectivamente;
    unsigned int i, j, sMes, sAno;
    cpr c[5];

    printf("\tAGENDA\n\n");             //escaneando compromissos;
    for(i = 0; i < 5; i++){
        printf("Registre a data do seu %uo compromisso (dd mm aaaa).\n>> ", i+1);
        scanf("%u%u%u", &c[i].data.day, &c[i].data.mon, &c[i].data.yr);

        printf("Descricao do compromisso (max 60 caracteres).\n>> ");
        setbuf(stdin, NULL);
        fgets(c[i].comp, 62, stdin);
        for(j = 0; c[i].comp[j] != '\0'; j++){      //removendo o \n do fgets;
            if(c[i].comp[j] == '\n') c[i].comp[j] == 0;
        }
        printf("\n\t= = = = = = = = =\n\n");
    }

    //loop principal;
    do{
        //escaneamento da data;
        printf("Verifique seus compromissos em uma data.\nSelecione um mes (digite 0 para sair!).\n>> ");
        scanf("%u", &sMes);
        if(sMes == 0) break;    //sai do loop quando o mês inserido for 0;
        printf("Selecione um ano.\n>> ")/
        scanf("%u", &sAno);

        printf("\n\t= = = = = = = = =\n\n");
        for(i = 0; i < 5; i++){
            if(c[i].data.mon == sMes && c[i].data.yr == sAno){
                appointmentReader(c[i]);
                printf("\n");
            }
        }
        printf("\n\t= = = = = = = = =\n\n");
    }while(sMes != 0);

    printf("\n\nEncerrando...\n\n");

    system("pause");
    return 0;
}


void appointmentReader(cpr a){
    printf("Data: %u/%u/%u\t---\t%s", a.data.day, a.data.mon, a.data.yr, a.comp);
    return;
}