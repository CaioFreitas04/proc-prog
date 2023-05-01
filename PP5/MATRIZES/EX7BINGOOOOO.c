#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Nd100();                            //gera valores de 0 a 99 (não é um d100 real :<);
int arrayCheck(int array[], int pos); //função checadora de vetores, garantindo que todos os valores neste sejam diferentes.

int main(){
    //var. check[25] conterá uma cópia de todos os números na cartela até o momento. Servirá para checar se
    //não há repetição de valores, juntamente com a variável test.
    int bingo[5][5], i, j, check[25], test;

    //inicializando a seed.
    srand(time(NULL));

    //inicializando check[] com -1 em todas as posições;
    for(i = 0; i < 25; i++) check[i] = -1;

    printf("Gerando cartela de bingo...\n\n");

    //gerando a cartela e garantindo que não há repetição de valores;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            do{
                //i + 5j == à posição [i, j] em uma matriz 5x5;
                //código roubado do LAB5_M_EX8DIFFNUMS;
                check[i + (5 * j)] = Nd100();
                test = arrayCheck(check, (i + (5 * j)));
            }while(test);

            bingo[i][j] = check[i + (5 * j)];
        }
    }
    printf("\n\n");

    //imprimindo a matriz.
    for(i = 0; i < 5; i++){
        printf("\t");
        for(j = 0; j < 5; j++){
            printf("%3d", bingo[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    system("pause");
    return 0;
}

int Nd100(){

    int d;
    d = rand() % 100;
    d;
    return d;

}

int arrayCheck(int array[], int pos){
    //var. curr armazena o valor da posição atual do vetor.
    int curr = array[pos], i;

    //loop principal.
    for(i = 0; i < pos; i++){
        if(curr == array[i]){
            return 1;
        }
        else continue;
    }
    return 0;
}
/*Essa função testa se cada elemento presente no vetor é igual ao atual. Se algum elemento for detectado,
a função retorna 1. Senão, retorna 0.*/