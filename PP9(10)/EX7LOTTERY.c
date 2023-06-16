#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    //var;
    int ticket[6] = {0, 0, 0, 0, 0, 0}, luckynums[6] = {0, 0, 0, 0, 0, 0}, *correct, N, i, j, check = 0;

    //gerando números de 1-60 para fazer o sorteio;
    srand(time(NULL));

    //esse loop garante que os números sorteados não terão repetições;
    for(i = 0; i < 6; i++){
        while(1){
            check = 1;
            luckynums[i] = (rand() % 60) + 1;
            for(j = 0; j < 6; j++){
                if(i == j) continue;
                if(luckynums[i] == luckynums[j]){
                    check = 0;
                    break;
                }
            }
            if(check) break;
        }
    }

    printf("\t--LOTERIA COMPUTARIA(tm)--\n\n");
    printf("Insira seu bilhete de loteria (valores de 1 - 60).\n");

    //esse loop gigante garante que o bilhete terá números diferentes;
    for(i = 0; i < 6; i++){
        printf("#%d: ", i+1);
        while(1){
            check = 1;
            scanf("%d", &ticket[i]);
            for(j = 0; j < 6; j++){
                if(i == j) continue;
                if(ticket[i] < 0 || ticket[i] > 60){
                    printf("Invalido: fora do intervalo.\n");
                    check = 0;
                    break;
                }
                if(ticket[i] == ticket[j]){
                    printf("Detectado valor repetido!\n");
                    check = 0;
                    break;
                }
            }
            if(check) break;
        }
    }

    N = 1;
    correct = (int*) calloc(N, sizeof(int));
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(ticket[i] == luckynums[j]){
                correct[N - 1] = ticket[i];
                correct = realloc(correct, (++N)*sizeof(int));
                break;
            }
        }
    }

    printf("\n\n\tOs numeros sorteados foram: ");
    for(i = 0; i < 6; i++){
        printf("%d ", luckynums[i]);
    }
    printf("\n\tVoce acertou: ");
    if(N == 1){
        printf("nenhum! Mais sorte na proxima!\n\n");
    }
    else{   
        for(i = 0; i < (N-1); i++){
            printf("%d ", correct[i]);
        }
        printf("\b, parabens!\n\n");
    }

    system("pause");
    return 0;
}
