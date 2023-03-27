#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento.
    float P1, P2, P3, PT;
    printf("Insira as notas dos trabalhos de laboratorio, da avaliacao semestral, e do exame final (0.0 a 10.0):\n");
    scanf("%f %f %f", &P1, &P2, &P3);

    //teste de realidade: ninguém tira nota negativa. Certo? CERTO?
    if(P1 < 0 || P2 < 0 || P3 < 0 || P1 > 10 || P2 > 10 || P3 > 10){
        printf("Nota(s) invalida(s).\n");
        system("pause");
        return 0;
    }
    //cálculo da média e apresentação dos resultados.
    PT = ((2 * P1) + (3 * P2) + (5 * P3)) / 10;
    printf("A media desse aluno foi %.1f.\n", PT);
    if(PT < 3.0){
        printf("O aluno foi reprovado! :<\n");
    }
    else if(PT < 5.0){
        printf("O aluno esta de recuperacao! :O\n");
    }
    else{
        printf("O aluno foi aprovado! :D\n");
    }
    
    system("pause");
    return 0;
}