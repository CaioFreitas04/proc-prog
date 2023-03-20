#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variáveis e introduzindo programa.
    float kmh;
    float ms;
    printf("Inserir velocidade em km/h:\n");

    //coletando dados e realizando teste de verdade: velocidade não pode ser negativa sem referencial.
    scanf("%f", &kmh);
    if(kmh < 0){

        printf("Impossivel haver velocidade negativa sem referencial.\n");
        system("pause");
        return 0;

    }

    //se o resultado for negativo, prosseguir com execução: cálculo e apresentação de resultado.
    ms = kmh / 3.6;
    printf("Velocidade em m/s: %f m/s.\n", ms);
    system("pause");

    return 0;

}
