#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    float p;
    printf("Insira o valor do produto em reais:\n");
    scanf("%f", &p);

    //teste de realidade.
    if(p < 0){
        printf("Calculo impossivel.\n");
        system("pause");
        return 0;
    }

    //verificado preço real, o cálculo é realizado.
    p = p * 0.88;
    printf("Valor final do produto: %.2f BRL.\n", p);

    system("pause");
    return 0;
}