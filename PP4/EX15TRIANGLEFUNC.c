#include <stdio.h>
#include <stdlib.h>

void triangle(float a, float b, float c);                        //função de checagem de triângulos.
void triType(float a, float b, float c);                         //função de classificação de triângulos.

int main(){        

    //var. Os lados do triângulo.
    float l1, l2, l3;
    printf("\t--TRIANGULOS--\n\n");
    printf("Insira os lados de seu triangulo.\n>> ");
    scanf("%f%f%f", &l1, &l2, &l3);
    triangle(l1, l2, l3);
    system("pause");
    return 0;
}


void triangle(float a, float b, float c){                        //Código roubado do PP2_EX20TRIANGLE.


    //testando se é um triângulo, em primeiro lugar.
    if(a <= 0 || b <= 0 || c <= 0){
        printf("Lados insuficientes :|\n\n");
        return;
    }
    if(a + b <= c || a + c <= b || b + c <= a){
        printf("Lados nao descrevem um triangulo!\nEncerrando...\n\n");
    }
    else{
        //operação normal, caso trianguleza(?) seja determinada.
        triType(a, b, c);
    }
}

void triType(float a, float b, float c){

    if(a == b && a == c && b == c){
            printf("Tipo de triangulo: equilatero.\n\n");
        }
        else if(a == b || a == c || b == c){
            printf("Tipo de triangulo: isosceles.\n\n");
        }
        else{
            printf("Tipo de triangulo: escaleno.\n\n");
        }

}