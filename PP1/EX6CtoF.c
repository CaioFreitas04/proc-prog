#include <stdio.h>
#include <stdlib.h>

int main(){

    //declaração de variáveis e introdução ao programa.
    float Celsius;
    float Fahrenheit;
    printf("Inserir temperatura em Celsius:\n");

    //recebendo comando do usuário e calculando a temperatura.
    scanf("%f", &Celsius);
    Fahrenheit = Celsius * 1.8;
    Fahrenheit = Fahrenheit + 32;

    //imprimindo resultado e pausando o sistema para leitura.
    printf("\nTemperatura em Fahrenheit: %f\n", Fahrenheit);
    system("pause");
    
    return 0;
}