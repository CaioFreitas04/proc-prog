#include <stdio.h>
#include <stdlib.h>


typedef struct diasmesesanos{       //armazena dias, meses, e anos!
    unsigned int day, mon, yr;
} dma;

int dateCheck (dma d);              //essa função, DE NOVO! :D (verifica se uma data é valida);


int main(){
    //var. chk serve como flag para averiguar que as datas são reais, elapsed armazena quantos dias se passaram entre as duas datas;
    //d1T, d2T, e elapsed armazenam a quantidade de dias em d1, d2, e a diferença entre esses, respectivamente;
    dma d1, d2;
    int chk;
    double d1T = 0, d2T = 0, elapsed;
    
    do{
        printf("Insira um dia (dd mm yyyy).\n>> ");
        scanf("%u%u%u", &d1.day, &d1.mon, &d1.yr);
        chk = dateCheck(d1);
        if(chk == 0) printf("Data invalida!\n");
    }while(chk == 0);
    printf("\n= = = = = = = = =\n");
    do{
        printf("Insira outro dia (dd mm yyyy).\n>> ");
        scanf("%u%u%u", &d2.day, &d2.mon, &d2.yr);
        chk = dateCheck(d1);
        if(chk == 0) printf("Data invalida!\n");
    }while(chk == 0);

    //~altíssima~ precisão, mas, genuinamente, o suficiente para o cálculo;
    d1T = d1.day + (d1.mon * 30.4) + (d1.yr * 365.25);
    d2T = d2.day + (d2.mon * 30.4) + (d2.yr * 365.25);

    elapsed = d1T - d2T;
    if(elapsed < 0) elapsed *= -1;

    printf("Se passaram %d dias entre %u/%u/%u e %u/%u/%u.\n\n", (int)elapsed, d1.day, d1.mon, d1.yr, d2.day, d2.mon, d2.yr);
    system("pause");
    return  0;
}


int dateCheck (dma d){     //ainda extremamente feio. *Ainda funciona*. Retorna 0 se a data é inválida e 1 se é válida;

    //checagens mais básicas, do tipo "você colocou dia 32 do mês 0";
    if(d.day > 31 || d.day == 0) return 0;
    if(d.mon > 12 || d.mon == 0) return 0;

    //checando se os dias correspondem aos meses. Ainda bem que tem código pra roubar do LAB2;
    if(d.mon == 1 || d.mon == 3 || d.mon == 5 || d.mon == 7 || d.mon == 8 || d.mon == 10 || d.mon == 12) return 1;

    //esses condicionais gigantes ainda são horrendos;
    else if(d.mon == 4 || d.mon == 6 || d.mon == 9 || d.mon == 11){
        if(d.day == 31) return 0;
        else return 1;
    }
    //fevereiro tem oitenta mil condições próprias por causa da infeliz existência de anos bissextos;
    else if(d.mon == 2){
        if(d.yr % 400 == 0 || (d.yr % 4 == 0 && d.yr % 100 != 0)){
            if(d.day >= 29) return 1;
        }
        else if(d.day >= 28) return 1;
        else return 0;
    }
    //feio.
}