#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento.
    float ValHor;
    int Horas;
    printf("Insira o valor pago por uma hora de trabalho:\n");
    scanf("%f", &ValHor);
    printf("Insira o numero de dias trabalhados no mes:\n");
    scanf("%d", &Horas);

    //teste de verdade.
    if (ValHor < 0 || Horas < 0){
        printf("Valor(es) invalido(s).\n");
        system("pause");
        return 0;
    }

    //averiguada a possibilidade de cálculo, o salário é determinado.
    printf("O seu salario sera de R$%.2f, assumindo um bonus de 10 por cento.\n", ValHor * Horas * 1.1);
    system("pause");
    return 0;
}