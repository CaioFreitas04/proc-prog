#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento de dados.
    int Ihour, Imin, Isec, hr, min, sec, timeElapsed;
    printf("Insira a hora de inicio do experimento: ");
    scanf("%d", &Ihour);
    printf("Insira os minutos de inicio do experimento: ");
    scanf("%d", &Imin);
    printf("Insira os segundos de inicio do experimento: ");
    scanf("%d", &Isec);
    printf("Quanto tempo levara o experimento, em segundos?\n");
    scanf("%d", &timeElapsed);

    //teste de realidade.
    if(Ihour < 0 || Imin < 0 || Isec < 0 || timeElapsed < 0){
        printf("Valor(es) invalido(s)!");
    }
    else{
        //averiguada realidade, continuar:
        //todos os tempos são convertidos para segundos para que seja adicionado o tempo passado.
        Ihour *= 3600;
        Imin *= 60;
        timeElapsed = timeElapsed + Ihour + Imin + Isec;

        //e convertidos de volta a horas e minutos para a mostragem final.
        hr = timeElapsed / 3600;
    
        min = (timeElapsed / 60);
        min = min - (hr * 60);

        sec = timeElapsed - ((hr * 3600) + (min * 60));

        //divisão euclidiana feita para garantir valores condizentes com a realidade.
        printf("O experimento acabara as %d horas, %d minutos, e %d segundos.\n", hr % 24, min % 60, sec);
    }
    system("pause");
    return 0;
}