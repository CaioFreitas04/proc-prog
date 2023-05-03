#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //var;
    char prod[256];
    float price;

    printf("Insira o nome do produto.\n>> ");
    fgets(prod, 256, stdin);

    printf("Insira o preco do produto.\n>> ");
    scanf("%f", &price);

    printf("\n\t>>%s", prod);
    printf("\n\tR$%.2f base...\n\tR$%.2f de desconto...\n\t--R$%.2f total!--\n\n", price, (price / 10), (price * 0.9));

    system("pause");
    return 0;
}