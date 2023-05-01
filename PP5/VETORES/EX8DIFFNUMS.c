#include <stdio.h>
#include <stdlib.h>

int arrayCheck(float array[], int pos);    //função checadora de elementos iguais em um vetor de dez lugares, até a posição pos.

int main(){

    //var. test serve para armazenar se o vetor tem mais de um número igual ou não.
    float vet[10];
    int i, test;
    printf("Insira dez numeros diferentes em um vetor (um por vez).\n");
    
    //loop principal.
    for(i = 0; i < 10; i++){
        do{
            printf(">> ");
            scanf("%f", &vet[i]);
            test = arrayCheck(vet, i);
            if(test) printf("Valor invalido!\nInsira numeros diferentes!\n");
        }while(test);
    }

    //impressão.
    for(i = 0; i < 10; i++){
        printf("[%f] ", vet[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;

}

int arrayCheck(float array[], int pos){
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