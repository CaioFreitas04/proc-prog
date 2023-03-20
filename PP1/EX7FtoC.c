#include <stdio.h>
#include <stdlib.h>

int main(){

    //declaração de variáveis e introdução ao programa.
    float Celsius;
    float Fahrenheit;
    printf("Inserir temperatura em Fahrenheit:\n");

    //recebendo comando do usuário e calculando a temperatura.
    scanf("%f", &Fahrenheit);
    Celsius = Fahrenheit - 32;
    Celsius = Celsius / 1.8;

    //imprimindo resultado e pausando o sistema para leitura.
    printf("\nTemperatura em Celsius: %f\n", Celsius);
    system("pause");
    
    return 0;
}