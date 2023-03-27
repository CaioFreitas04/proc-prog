#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento.
    float a, b, c;
    printf("Insira o comprimento dos tres lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    //testando se é um triângulo, em primeiro lugar.
    if(a <= 0 || b <= 0 || c <= 0){
        printf("Lados insuficientes :|\n");
        system("pause");
        return 0;
    }
    if(a + b <= c || a + c <= b || b + c <= a){
        printf("Lados nao descrevem um triangulo!\nEncerrando...\n");
    }
    else{
        //operação normal, caso trianguleza(?) seja determinada.
        if(a == b && a == c && b == c){
            printf("Tipo de triangulo: equilatero.\n");
        }
        else if(a == b || a == c || b == c){
            printf("Tipo de triangulo: isosceles.\n");
        }
        else{
            printf("Tipo de triangulo: escaleno.\n");
        }
    }
    system("pause");
    return 0;
}