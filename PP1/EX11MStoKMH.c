#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variáveis e introduzindo programa.
    float kmh;
    float ms;
    printf("Inserir velocidade em m/s:\n");

    //coletando dados e realizando teste de verdade: velocidade não pode ser negativa sem referencial.
    scanf("%f", &ms);
    if(ms < 0){

        printf("Impossivel haver velocidade negativa sem referencial.\n");
        system("pause");
        return 0;

    }

    //se o resultado for negativo, prosseguir com execução: cálculo e apresentação de resultado.
    kmh = ms * 3.6;
    printf("Velocidade em km/h: %f km/h.\n", kmh);
    system("pause");

    return 0;

}
