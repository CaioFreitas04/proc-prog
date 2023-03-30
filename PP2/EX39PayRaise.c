#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //variáveis.
    //a variável "check" serve para testar se o funcionário não é eligível para um aumento.
    float WAGE;
    int WYEAR, check = 0;

    //coletando dados e testando se são possíveis.
    do{
        printf("Insira seu salario atual: ");
        scanf("%f", &WAGE);
        printf("Insira seu tempo de servico em anos (arredondar para baixo): ");
        scanf("%d", &WYEAR);
        if(WAGE < 0) printf("Salario invalido!\n");
        if(WYEAR < 0) printf("Tempo de servico invalido!\n");
        printf("\n");
    }while(WAGE <= 0 || WYEAR < 0);

    //reajustando salários à partir do pagamento atual:
    if(WAGE < 500) WAGE *= 1.25;
    else if (WAGE < 1000) WAGE *= 1.20;
    else if (WAGE < 1500) WAGE *= 1.15;
    else if (WAGE < 2000) WAGE *= 1.10;
    else check++;

    //reajustando salários a partir do tempo de serviço.
    if(WYEAR < 1) check++;
    else if (WYEAR < 4) WAGE += 100;
    else if (WYEAR < 6) WAGE += 200;
    else if (WYEAR < 10) WAGE += 300;
    else WAGE += 500;

    //apresentação de resultados: o if-else testa se a variável check tem valor 2. Se sim, o funcionário
    //não recebeu bônus pelo salário atual ou pelo tempo de serviço, e notifica-o disso.
    if(check == 2) printf("Ineligivel para aumento de salario.\n\n");
    else printf("Novo salario: R$%.2f.\n", WAGE);
    system("pause");
    return 0;
}