#include <stdio.h>
#include <stdlib.h>

int main(){

    //introduzindo o programa.
    float Sal;
    printf("Insira o seu salario:\n");

    //escaneamento de salário e cálculo.
    scanf("%f", &Sal);
    Sal *= 1.25;

    //apresentação de resultado.
    printf("Seu salario, apos um aumento de 25 por cento, sera: %.2f R$.\n", Sal);

    system("pause");
    return 0;
}