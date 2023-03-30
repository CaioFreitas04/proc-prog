#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variáveis.
    int ENHOUR, ENMIN, EXHOUR, EXMIN;
    float TAX;

    //coletando horário de entrada.
    do{
        printf("Insira o horario de chegada (HH MM): ");
        scanf("%d %d", &ENHOUR, &ENMIN);
        if(ENHOUR < 0 || ENHOUR > 23 || ENMIN < 0 || ENMIN > 59){
            printf("Horario invalido!\n\n");
        }
    }while(ENHOUR < 0 || ENHOUR > 23 || ENMIN < 0 || ENMIN > 59);

    //convertendo de horas para minutos.
    ENMIN = ENMIN + (ENHOUR * 60);

    //coletando horário de saída.
    do{
        printf("Insira o horario de chegada (HH MM): ");
        scanf("%d %d", &EXHOUR, &EXMIN);
        if(EXHOUR < 0 || EXHOUR > 23 || EXMIN < 0 || EXMIN > 59){
            printf("Horario invalido!\n\n");
        }
    }while(EXHOUR < 0 || EXHOUR > 23 || EXMIN < 0 || EXMIN > 59);

    //convertendo de horas para minutos (de novo).
    EXMIN = EXMIN + (EXHOUR * 60);

    //calculando horas.
    if(ENMIN == EXMIN){
        EXHOUR = 24;
    }
    else{
        //as variáveis EXMIN e EXHOUR estão sendo utilizadas para armazenar o tempo passado no estacionamento.
        EXMIN -= ENMIN;
        EXHOUR = ceil((double) EXMIN / 60);
    }

    //calculando tarifa a ser paga.
    if(EXHOUR < 3) TAX = EXHOUR * 1.00;
    else if(EXHOUR < 5) TAX = 2.00 + (EXHOUR - 2) * 1.40;
    else TAX = 4.80 + (EXHOUR - 4) * 2.00;

    //apresentação de resultados.
    printf("Horas estacionadas: %dh.\n", EXHOUR);
    printf("Tarifa: R$%.2f.\n", TAX);
    system("pause");
    return 0;
}