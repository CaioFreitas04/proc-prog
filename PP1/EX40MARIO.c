#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    int Dias;
    float Total;
    printf("Insira o numero de dias que o encanador trabalhou:\n");

    //escaneando resultado e fazendo teste de verdade.
    scanf("%d", &Dias);
    if(Dias <= 0){
        printf("Invalido.\n");
        system("pause");
        return 0;
    }

    //averiguada a verdade: cálculos.
    Dias *= 30;
    Total = Dias * 0.92;
    printf("O encanador recebeu R$%.2f.\n", Total);

    system("pause");
    return 0;
}