#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct eletrodomestico{ //nome, potência, tempo ativo diário em hora;
    char nom[17];
    float pot, TADh;
} eletro;


float dailyConsumption(int t, eletro doms[], int qtd);                      //calcula consumo diário (kWh) a partir de um tempo em dias, e um vetor de eletrodomésticos;
void percentagePrinter(int t, float total, eletro doms[], int qtd);         //recebe um total e um vetor de eletrodomésticos para calcular e imprimir consumo relativo;


int main(){
    //var. total armazena o consumo total em kWh, e dias o número de dias;
    eletro doms[5];
    float total;
    int dias, i, j;
    printf("\tCALCULADORA DE CONSUMO DE ENERGIA\n\n");
    for(i = 0; i < 5; i++){
        printf("Tipo do %do eletrodomestico (max 15 caracteres).\n>> ", i+1);
        setbuf(stdin, NULL);
        fgets(doms[i].nom, 17, stdin);
        for(j = 0; doms[i].nom[j] != '\0'; j++){
            if(doms[i].nom[j] == '\n') doms[i].nom[j] = 0;
        }

        do{
            printf("Qual a potencia do eletrodomestico?\n>> ");
            scanf("%f", &doms[i].pot);
            if(doms[i].pot <= 0) printf("Valor invalido.\n");
        }while(doms[i].pot <= 0);

        do{
            printf("Qual o uso diario desse eletrodomestico, em horas?\n>> ");
            scanf("%f", &doms[i].TADh);
            if(doms[i].TADh <= 0) printf("Valor invalido.\n");
        }while(doms[i].TADh <= 0);

        printf("\n\t= = = = = = = = =\n\n");
    }

    do{
        printf("Analisar o consumo por quantos dias?\n>> ");
        scanf("%d", &dias);
        if(dias < 1) printf("Invalido.\n");
    }while(dias < 1);
    //coletados os dados, serão realizados os cálculos;

    printf("\n\n\t= = = = = = = = =\n");
    total = dailyConsumption(dias, doms, 5);
    percentagePrinter(dias, total, doms, 5);
    printf("\n\t= = = = = = = = =\n\n");
    system("pause");
    return 0;
}


float dailyConsumption(int t, eletro doms[], int qtd){
    //var;
    int i, soma = 0;
    for(i = 0; i < qtd; i++){
        soma += doms[i].pot * doms[i].TADh * t;
    }

    return soma;
}

void percentagePrinter(int t, float total, eletro doms[], int qtd){
    //var. partCons é o consumo parcial de um dado eletrodoméstico no período de tempo especificado;
    int i;
    float partCons;
    printf("\t<ANALISE DE CONSUMO>\n\n");
    for(i = 0; i < qtd; i++){
        partCons = doms[i].pot * doms[i].TADh * t;
        printf("\t%s: %.2f kWh (%.2f%%).\n", doms[i].nom, partCons, (partCons/total*100));
    }
    printf("\n\tTOTAL: %.2f kWh (100%%).", total);
    return;
}