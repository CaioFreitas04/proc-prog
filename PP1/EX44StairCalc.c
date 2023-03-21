#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento.
    float AltDeg;
    float AltTot;
    printf("Insira a altura do degrau da escada em metros:\n");
    scanf("%f", &AltDeg);
    printf("Insira a altura a qual o usuario deseja chegar, em metros:\n");
    scanf("%f", &AltTot);

    //teste de verdade.
    if(AltDeg < 0 || AltTot < 0){
        printf("Valor(es) invalido(s)");
    }
    else{
        //averiguada a verdade, continuar com cálculos.
        AltTot /= AltDeg;
        printf("O usuario devera subir %.0f degraus.\n", AltTot);
    }
    system("pause");
    return 0;
}