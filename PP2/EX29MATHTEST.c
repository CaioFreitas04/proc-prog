#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Variáveis.
    int x, y, ANS = 0, CORRECT = 0, inc = 0;
    //Colocando a seed do rand() como o tempo definido na library time.h.
    srand(time(0));
    printf("Pressione qualquer tecla para iniciar a prova de matematica!\n\n");
    system("pause");
    //A prova em si.
    do{
        //Gera números aleatórios de 1 a 100.
        x = (rand() %100 + 1);
        y = (rand() %100 + 1);
        printf("Qual a soma de %d + %d?\n", x, y);
        scanf("%d", &ANS);
        if(ANS == x + y){
            printf("Correto!\n\n");
            //incrementa o contador de acertos por um.
            CORRECT++;
        }
        else{
            printf("Incorreto!\n");
            printf("Resposta correta: %d.\n\n", x + y);
        }
        inc++;
    }while(inc < 5);
    
    //apresentação dos resultados.
    printf("Encerrado! ]NOTA FINAL: %d/5.\n\n", CORRECT);
    system("pause");
    return 0;
}