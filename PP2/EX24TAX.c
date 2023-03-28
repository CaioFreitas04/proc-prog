#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e introdução do programa.
    float price;
    int ST;

     //garante que o usuário colocará valores reais.
    do{
        printf("Insira o preco do produto: ");
        scanf("%f", &price);
        printf("Selecione o estado-destino:\n1. Minas Gerais.\n2. Sao Paulo.\n3. Rio de Janeiro.\n4. Mato Grosso do Sul.\n");
        printf("Selecao: ");
        scanf("%d", &ST);
        if(price < 0){
            printf("Preco invalido!\n");
        }
        if(ST < 1 || ST > 4){
            printf("Estado invalido!\n");
        }
        printf("\n");
    } while(ST < 1 || ST > 4 || price < 0);

    //Garantidos bons dados, calculos serao realizados:
    switch(ST){
        case 1: price *= 1.07; break;
        case 2: price *= 1.12; break;
        case 3: price *= 1.15; break;
        case 4: price *= 1.08; break;
    }
    printf("Preco final: R$%.2f.\n", price);
    system("pause");
    return 0;
}