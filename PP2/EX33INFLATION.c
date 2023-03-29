#include <stdio.h>
#include <stdlib.h>

int main(){
    //variáveis
    float x;
    printf("Insira o preco original do produto: ");
    scanf("%f", &x);
    if(x <= 50) x *= 1.05;
    if(x > 50 && x < 100) x *= 1.1;
    if(x >= 100) x *= 1.15;
    printf("Preco novo: R$%.2f.\n", x);
    if(x < 80) printf("Barato.\n\n");
    if(x >= 80 && x <= 120) printf("Normal.\n\n");
    if(x > 120 && x <= 200) printf("Caro.\n\n");
    if(x > 200) printf("Muito caro.\n\n");
    system("pause");
    return 0;
}