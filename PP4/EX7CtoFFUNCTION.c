#include <stdio.h>
#include <stdlib.h>

float CtoF(float C);    //conversor de Celsius para Fahrenheit.

int main(){

    //var.
    float Celsius, Fahrenheit;
    printf("\t--Conversor de Celsius para Fahrenheit--\n\n");
    printf("Insira a temperatura em Celsius.\n>> ");
    scanf("%f", &Celsius);
    Fahrenheit = CtoF(Celsius);
    if(Fahrenheit == -1){
        printf("\nTemperatura impossivel.\n\n");
    }
    else{
        printf("\nTemperatura em Fahrenheit: %f F.\n\n", Fahrenheit);
    }
    system("pause");
    return 0;

}



float CtoF(float C){

    float F;
    if(C < -273.15) return -1; //código de erro caso a temperatura seja fisicamente impossível.
    F = (C * 1.8) + 32; //1.8 = 9/5;
    return F;

}