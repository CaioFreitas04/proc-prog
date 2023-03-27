#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento.
    float P1, P2, P3, PT;
    printf("Insira as notas das provas 1, 2, e 3:\n");
    scanf("%f %f %f", &P1, &P2, &P3);

    //teste de realidade: ninguém tira nota negativa. Certo? CERTO?
    if(P1 < 0 || P2 < 0 || P3 < 0){
        printf("Nota(s) invalida(s).\n");
        system("pause");
        return 0;
    }
    //cálculo da média e apresentação dos resultados.
    PT = (P1 + P2 + (2 * P3)) / 4;
    printf("A media desse aluno foi %.1f.\n", PT);
    if(PT >= 60.0){
        printf("O aluno foi aprovado! :D\n");
    }
    else{
        printf("O aluno foi reprovado! :(\n)");
    }
    system("pause");
    return 0;
}