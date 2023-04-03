#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    //variáveis.
    int d1, d2, NUM;
    srand(time(NULL));
    //teste de realidade.
    do{
        printf("Quantas vezes devemos rodar os 2d6? ");
        scanf("%d", &NUM);
        if(NUM <= 0) printf("Valor invalido!\n\n");
    }while(NUM <= 0);
    
    //loop principal.
    while(NUM > 0){
        //gera dois números de 1 a 6 e os compara.
        d1 = (rand() % 6) + 1;
        //sleep adicionado para melhor geração de seed pseudorandom:
        sleep(1);
        d2 = (rand() % 6) + 1;
        if (d1 > d2){
            printf("%d > %d\n", d1, d2);
        }
        else if(d1 < d2){
            printf("%d < %d\n", d1, d2);
        }
        else printf("%d = %d\n", d1, d2);
        NUM--;
    }
    sleep(1);
    printf("\n");
    printf("Concluido...\n\n");
    system("pause");
    return 0;
}