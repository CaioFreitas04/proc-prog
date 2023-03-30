#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento.
    float SALE, PAY;
    do{
        printf("Insira sua venda mensal em reais: ");
        scanf("%f", &SALE);
        //garantindo valor de venda real.
        if(SALE < 0) printf("Valor invalido!\n\n");
    }while(SALE < 0);

    //determinando a faixa de comissão.
    if(SALE < 20000) PAY = SALE * 0.14 + 400;
    else if(SALE < 40000) PAY = SALE * 0.14 + 500;
    else if(SALE < 60000) PAY = SALE * 0.14 + 550;
    else if(SALE < 80000) PAY = SALE * 0.14 + 600;
    else if(SALE < 100000) PAY = SALE * 0.14 + 650;
    else PAY = SALE * 0.16 + 700;

    //apresentando o resultado.
    printf("Comissao: R$%.2f.\n\n", PAY);

    system("pause");
    return 0;
}