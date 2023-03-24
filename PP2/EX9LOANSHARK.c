#include <stdio.h>
#include <stdlib.h>

int main(){

    //variaveis, e escaneamento.
    float Sal, Emp;
    printf("Insira o seu salario: ");
    scanf("%f", &Sal);
    printf("Insira a prestacao do emprestimo: ");
    scanf("%f", &Emp);

    //Multiplicando o salário por 0.2 para descobrir 20% deste.
    Sal *= 0.2;

    if(Sal < Emp){
        printf("Emprestimo nao concedido.\n");
    }
    else{
        printf("Emprestimo concedido.\n");
    }
    system("pause");
    return 0;
}