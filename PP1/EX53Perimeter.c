#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //variáveis e escaneamento.
    float side, leng, price;
    printf("Insira as dimensoes do terreno em metros (largura e comprimento):\n");
    scanf("%f %f", &side, &leng);
    printf("Insira o preco do metro da tela:\n");
    scanf("%f", &price);

    //teste de realidade.
    if(side < 0 || leng < 0 || price < 0){
        printf("Valor(es) invalido(s)!\n");
    }
    else{
        //operação normal.
        printf("Custara %.2f para cercar o terreno com tela.\n", price * (2 * (side + leng)));
    }

    system("pause");
    return 0;
}