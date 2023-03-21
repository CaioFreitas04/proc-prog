#include <stdio.h>
#include <stdlib.h>

int main(){

    //Variáveis.
    int inputSec, hr, min, sec;
    printf("Insira tempo em segundos:\n");
    scanf("%d", &inputSec);

    //teste de realidade.
    if(inputSec < 0){
        printf("Tempo negativo??? Encerrando programa...\n");
    }
    else{
        //realizando cálculos.
        hr = inputSec / 3600;
        printf("Equivalente a %d horas, ", hr);
        //é vital subtrair o tempo já considerado das variáveis, senão seriam contados segundos extras.
        min = inputSec / 60;
        min = min - (hr * 60);
        printf("%d minutos, ", min);

        sec = inputSec - ((hr * 3600) + (min * 60));
        printf("e %d segundos.\n", sec);
    }
    system("pause");
    return 0;
}