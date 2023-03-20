#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    float Val = 780000;
    printf("Considerando a quantia de R$780,000:\nO primeiro ganhador recebe %.2f reais\nO segundo %.2f\nE o terceiro %.2f.\n", Val * 0.46, Val * 0.32, Val * 0.22);
    system("pause");
    return 0;
}