#include <stdio.h>
#include <stdlib.h>
#include <time.h>                   //para essa demonstração, será usado um array aleatório de comprimento 10;


int negativos(float *vet, int N);   //função que detecta e retorna quantos negativos há em um array;


int main(){
    float vet[10];
    int i;
    srand(time(NULL));

    printf("\t\tArray inicial.\n\t[");
    for(i = 0; i < 10; i++){
        vet[i] = (((rand() % 20) + 1) * (((rand() % 5) + 1) * 0.31)) - 10.0;
        printf("%.2f, ", vet[i]);
    }
    printf("\b\b]\n\n");

    printf("\tEsse array tem %d numero(s) negativo(s)!\n\n", negativos(vet, 10));
    system("pause");
    return 0;
}


int negativos(float *vet, int N){
    int i, count = 0;
    for(i = 0; i < N; i++){
        if(vet[i] < 0) count++;
    }
    return count;
}