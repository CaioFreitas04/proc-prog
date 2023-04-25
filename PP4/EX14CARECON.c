#include <stdio.h>
#include <stdlib.h>

void CarCheck();        //função de teste de economia.

int main(){

    CarCheck();
    system("pause");
    return 0;
}

void CarCheck(){

    //var.
    float dist, gas;
    printf("\t--TESTE DE ECONOMIA DE CARRO--\n\n");
    printf("Insira uma distancia percorrida (km) e uma quantidade de gasolina consumida (L).\n>> ");
    scanf("%f%f", &dist, &gas);
    if(dist <= 0 || gas <= 0){
        printf("ERR: Valor(es) invalido(s). Encerrando...\n\n");
        return;
    }
    else{
        dist /= gas;
        //avaliando o quão econômico o veículo é.
        if(dist < 8) printf("Venda o carro!\n\n");
        else if(dist <= 14) printf("Economico!\n\n");
        else printf("Super economico!\n\n");
    }
}