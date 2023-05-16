#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct carta{   //uma carta tem um valor e um naipe;
    unsigned int val, nai;
} crd;


crd randCard();                                         //função que gera uma carta aleatória;
void cPrint(unsigned int val, unsigned int nai);        //imprime os valores de uma carta dependendo dos parâmetros;


int main(){
    //var. p1 e p2 são as mãos dos jogadores, used registra as cartas já usadas;
    //chk é uma flag que testa se uma dada carta já está presente nas mãos dos jogadores;
    crd p1[3], p2[3], used[6];
    int i, j = 0, chk = 0;

    srand(time(NULL));      //seed aleatória;
    //inicializando used com 0 em todas as posições;
    for(i = 0; i < 6; i++){
        used[i].val = 0;
        used[i].nai = 0;
    }

    printf("\tCARTEADO\n\n");
    printf("Aperte qualquer botao para gerar duas maos de tres cartas.\n\n");
    system("pause");
    printf("\n\n");

    for(i = 0; i < 3; i++){
        do{
            chk = 0;
            p1[i] = randCard();
            for(j = 0; j < 6; j++){     //testando se a carta já foi retirada do baralho;
                if(p1[i].val == used[j].val && p1[i].nai == used[j].nai){
                    chk = 1;
                }
                else if(j == 5 && chk == 0){
                    used[i].val = p1[i].val;
                    used[i].nai = p1[i].nai;
                    //printf("V%u N%u\n", p1[i].val, p1[i].nai);        //debug;
                }
            }

        }while(chk);
        do{
            chk = 0;
            p2[i] = randCard();
            for(j = 0; j < 6; j++){     //testando se a carta já foi retirada do baralho;
                if(p2[i].val == used[j].val && p2[i].nai == used[j].nai){
                    chk = 1;
                }
                if(j == 5 && chk == 0){
                    used[i].val = p2[i].val;
                    used[i].nai = p2[i].nai;
                    //printf("V%u N%u\n", p2[i].val, p2[i].nai);        //debug;
                }
            }

        }while(chk);
    }

    //impressão dos resultados;
    printf("\tJOGADOR 1.");
    for(i = 0; i < 3; i++){
        printf("\n");
        printf("\t> ");
        cPrint(p1[i].val, p1[i].nai);
    }
    printf("\n\n");

    printf("\tJOGADOR 2.");
    for(i = 0; i < 3; i++){
        printf("\n");
        printf("\t> ");
        cPrint(p2[i].val, p2[i].nai);
    }
    printf("\n\n");

    system("pause");
    return 0;
}


crd randCard(){
    //var;
    crd output;
    output.val = ((rand() % 13) + 1);
    output.nai = (rand() % 4);

    return output;
}

void cPrint(unsigned int val, unsigned int nai){
    switch(val){
        case 1: printf("As "); break;
        case 11: printf("Valete "); break;
        case 12: printf("Rainha "); break;
        case 13: printf("Rei "); break;
        default: printf("%d ", val); break;
    }
    switch(nai){
        case 0: printf("de Paus"); break;
        case 1: printf("de Copas"); break;
        case 2: printf("de Ouros"); break;
        case 3: printf("de Espadas"); break;
        default: printf("ERR");
    }

    return;
}