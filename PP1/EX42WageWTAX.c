#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //variáveis e escaneamento.
    float Sal;
    float Imp;
    printf("Insira seu salario-base.\n");
    scanf("%f", &Sal);

    //teste de verdade.
    if(Sal < 0){
        printf("Salario invalido.\n");
        system("pause");
        return 0;
    }

    //averiguada a possibilidade do salário existir, continua com cálculos.
    Imp = Sal * 0.07;
    printf("Seu salario total sera de R$ %.2f.\n", (Sal * 1.05) - Imp);
    system("pause");
    return 0;
}