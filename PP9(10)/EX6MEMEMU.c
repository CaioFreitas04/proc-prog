#include <stdio.h>
#include <stdlib.h>


int GUI(int *MEM, int memsize);             //menuzinho básico;
int zeroCheck(int *MEM, int memsize);       //checa quantas posições estão zeradas;
void readSlot(int *MEM, int memsize);       //lê uma posição do vetor;
void writeSlot(int *MEM, int memsize);      //sobescreve uma posição do vetor;


int main(){
    
    //var;
    int *MEM, memsize, memacc;

    printf("\t--SIMULADOR DE MEMORIA DIGITAL--\n\n");
    printf("Insira capacidade de memoria de sua maquina digital, em bytes.\n");
    do{
        printf(">> ");
        scanf("%d", &memsize);
        if(memsize <= 0) printf("Valor invalido.\n\n");
    }while(memsize <= 0);

    if((MEM = (int*) calloc(memsize, sizeof(int))) == NULL){
        printf("ERR: FALHA_DE_ALOCACAO\n\n");
        system("pause");
        exit(1);
    }
    
    printf("Memoria alocada com sucesso!\n\n");
    while(GUI(MEM, memsize))
        ;
    printf("\n\n\tEncerrando emulador...\n\n");
    system("pause");
    return 0;
}


int GUI(int *MEM, int memsize){

    //var;
    int MODE;

    printf("\n\n\n\t%d bytes totais, %d bytes livres.\n\n", memsize, zeroCheck(MEM, memsize));

    printf("\tCOMANDOS:\n\n");
    printf("\t1) LER ENDERECO\n");
    printf("\t2) SOBRESCREVER ENDERECO\n");
    printf("\t3) SAIR\n");

    printf("\n>> ");
    scanf("%d", &MODE);
    switch(MODE){
        case 1: readSlot(MEM, memsize); return 1;
        case 2: writeSlot(MEM, memsize); return 1;
        case 3: return 0;
        default: printf("Instrucao invalida!\n"); return 1;
    }
}

int zeroCheck(int *MEM, int memsize){
    
    //var;
    int i, count = 0;
    
    for(i = 0; i < memsize; i++){
        if(!MEM[i]) count++;
    }

    return count;
}

void readSlot(int *MEM, int memsize){
    
    //var;
    int slot;
    printf("Insira a posicao de memoria a ser lida.\n>> ");
    scanf("%d", &slot);
    if(slot < 0 || slot >= memsize){
        printf("\tERR: FORA_DE_MEMORIA\n\n");
        system("pause");
        return;
    }
    else printf("\n\tADD %d: %d\n", slot, MEM[slot]);
    system("pause");
    return;
}

void writeSlot(int *MEM, int memsize){

    //var;
    int slot, val;
    printf("Insira a posicao de memoria a ser editada, e o seu novo valor.\n>> ");
    scanf("%d%d", &slot, &val);
    if(slot < 0 || slot >= memsize){
        printf("\tERR: FORA_DE_MEMORIA\n\n");
        system("pause");
        return;
    }
    else MEM[slot] = val;
    printf("\n\tADD %d <- %d\n", slot, val);
    system("pause");
    return;
}
