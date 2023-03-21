#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento.
    int Num, Div = 1000;
    printf("Insira um numero de quatro digitos:\n");
    scanf("%d", &Num);

    //testando se o número tem quatro dígitos.
    if(Num > 9999 || Num < 1000){
        printf("Valor invalido.\n");
    }
    else{
        printf("Separando numero...\n");
        /*O algoritmo funciona da seguinte forma: como o número sempre terá quatro dígitos, é estabelecido um
        "divisor" = 1000. O programa realiza a divisão do número inserido pelo usuário por esse divisor e
        o imprime (obtendo, assim, o dígito dos milhares) antes de fazer a divisão euclidiana do número pelo
        divisor (dessa forma, removendo o dígito dos milhares) e dividindo o divisor por 10. O programa
        repete essas ações com os dígitos das centenas, dezenas, e unidades.*/
        while(Div != 0){
            printf("%d\n", Num / Div);
            Num %= Div;
            Div /= 10;
        }
    }
    system("pause");
    return 0;
}