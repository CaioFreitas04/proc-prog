#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis para ambas as escalas e introdução do programa.
    float Kelvin;
    float Celsius;
    printf("Insira temperatura em graus Celsius:\n");

    /*recebendo dados e realizando teste de realidade: uma temperatura em Kelvins
    não pode ser menor do que 0.*/
    scanf("%f", &Celsius);
    if(Celsius < -273.15){

        printf("\nTemperatura impossivel.\n");
        system("pause");
        return 0;

    }
    //se o teste der negativo, continuar com programa.
    Kelvin = Celsius + 273.15;
    printf("Temperatura em Kelvins: %f\n", Kelvin);
    system("pause");

    return 0;

}