#include <stdio.h>
#include <stdlib.h>

int main(){

    //declarando variáveis e escaneando dinheiro em reais.
    float BRL, DOLL;
    printf("Insira quantia em reais:\n");
    scanf("%f", &BRL);

    //escaneando cotação do dólar e realizando cálculos. O "%.2f" faz com que somente duas casas decimais sejam apresentadas.
    printf("Insira o valor do dolar, em reais:\n");
    scanf("%f", &DOLL);
    printf("Valor em dolares: %.2f USD.\n", BRL/DOLL);

    system("pause");
    return 0;
}