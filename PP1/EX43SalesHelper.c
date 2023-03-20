#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e uma introdução amigável.
    float Prec;
    printf("Bem-vindo ao Ajudante do Vendedor(tm), insira o valor do produto a ser vendido:\n");

    //escaneamento e teste de verdade.
    scanf("%f", &Prec);
    if(Prec < 0){
        printf("Valor invalido!\n");
        system("pause");
        return 0;
    }

    //averiguada a verdade, continuar com cálculos e apresentação dos resultados.
    printf("Total a pagar a vista (desconto de 10 por cento): R$%.2f.\n", Prec * 0.9);
    system("pause");
    printf("OU tres parcelas de R$%.2f cada!\n", Prec / 3);
    system("pause");
    printf("Sua comissao sera de R$%.2f no pagamento a vista.\n", (Prec * 0.9) * 0.05);
    system("pause");
    printf("OU de R$%.2f no pagamento parcelado em tres vezes!\n\n", Prec * 0.05);
    printf("Concluido, o programa sera encerrado...\n");
    system("pause");
    return 0;
}