#include <stdio.h>
#include <stdlib.h>

int main(){

    //variável e escaneamento.
    int x;
    printf("Insira o numero do dia da semana: ");
    scanf("%d", &x);

    //switch para testar TODOS os dias (por favor).
    switch(x){
        case 1: printf("Domingo!\n"); break;
        case 2: printf("Segunda-Feira!\n"); break;
        case 3: printf("Terca-Feira!\n"); break;
        case 4: printf("Quarta-Feira!\n"); break;
        case 5: printf("Quinta-Feira!\n"); break;
        case 6: printf("Sexta-Feira!\n"); break;
        case 7: printf("Sabado!\n"); break;
        default: printf("Dia da semana inexistente.\n");
    }
    system("pause");
    return 0;
}