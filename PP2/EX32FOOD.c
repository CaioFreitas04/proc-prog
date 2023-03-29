#include <stdio.h>
#include <stdlib.h>

int main(){
    //variáveis e escaneamento.
    int CODE, QTD;
    float PRICE;
    do{
        printf("Insira o codigo do produto: ");
        scanf("%d", &CODE);
        if(CODE < 100 || CODE > 106){
            printf("Produto invalido!\n\n");
        }
    } while(CODE < 100 || CODE > 106);
    do{
        printf("Insira a quantidade desejada: ");
        scanf("%d", &QTD);
        if(QTD < 1){
            printf("Quantidade invalida!\n\n");
        }
    } while(QTD < 1);
    switch(CODE){
        case 100: PRICE = QTD * 1.20; break;
        case 101: PRICE = QTD * 1.30; break;
        case 102: PRICE = QTD * 1.50; break;
        case 103: PRICE = QTD * 1.20; break;
        case 104: PRICE = QTD * 1.70; break;
        case 105: PRICE = QTD * 2.20; break;
        case 106: PRICE = QTD * 1.00; break;
    }
    printf("Total: R$%.2f.\n", PRICE);
    system("pause");
    return 0;
}