#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e GUI.
    float FACTORY, TOTAL;
    do{
        printf("Insira o custo de fabrica do veiculo: ");
        scanf("%f", &FACTORY);
        if(FACTORY < 0) printf("Preco invalido!\n\n");
    }while(FACTORY < 0);
    
    //calculando o preço total.
    if(FACTORY < 12000){
        TOTAL = FACTORY * 1.05;
    }
    else if(FACTORY <= 25000){
        TOTAL = FACTORY * 1.10;
        TOTAL += FACTORY * 0.15;
    }
    else{
        TOTAL = FACTORY * 1.15;
        TOTAL += FACTORY * 0.2;
    }
    printf("Custo de compra: R$%.2f.\n\n", TOTAL);

    system("pause");
    return 0;
}