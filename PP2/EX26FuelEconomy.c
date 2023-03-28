#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e cálculos.
    float Km, L, Ratio;
    printf("Insira uma distancia percorrida pelo seu veiculo em km, e ");
    printf("a quantidade de gasolina consumida no percurso, em L:\n");
    scanf("%f %f", &Km, &L);

    //testando se os valores são reais.
    if(Km < 0 || L < 0){
        printf("Valor(es) invalido(s)!\n");
    }
    else{
        //se a realidade for averiguada, prosseguir:
        Ratio = Km / L;
        if(Ratio < 8){
            printf("Venda o carro!");
        }
        else if(Ratio <= 14){
            printf("Economico!");
        }
        else{
            printf("Super economico!");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}