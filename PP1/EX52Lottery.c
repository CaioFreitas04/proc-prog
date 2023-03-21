#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis, escaneamentos.
    float bet1, bet2, bet3, betT = 0, prize;
    printf("Insira o valor da loteria, em reais:\n");
    scanf("%f", &prize);

    printf("Insira o valor apostado por cada amigo, em reais:\n");
    scanf("%f %f %f", &bet1, &bet2, &bet3);

    //teste de realidade para garantir valores verdadeiros.
    if(prize <= 0 || bet1 < 0 || bet2 < 0 || bet3 < 0){
        printf("Valor(es) invalido(s)!\n");
    }
    else{
        //operação normal: primeiro serão adicionadas todas as apostas na variável betT.
        betT = bet1 + bet2 + bet3;
        //em seguida, será imprimido o prêmio de cada amigo, tendo como base a razão entre sua aposta
        //e o total apostado, caso ocorra a vitória na loteria.
        printf("Se os amigos ganharem na loteria...\n\n");
        bet1 /= betT;
        printf("O primeiro amigo ganhara %.2f reais (%.2f%% do premio),\n", bet1 * prize, bet1 * 100);
        bet2 /= betT;
        printf("o segundo amigo, %.2f reais (%.2f%% do premio),\n", bet2 * prize, bet2 * 100);
        bet3 /= betT;
        printf("e o terceiro, %.2f reais (%.2f%% do premio)!\n", bet3 * prize, bet3 * 100);
    }
    system("pause");
    return 0;
}