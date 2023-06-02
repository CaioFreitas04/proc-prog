#include <stdio.h>
#include <stdlib.h>
#include <time.h>       //para essa demonstração, serão usados números aleatórios de 1 - 10;

#define ARRLEN 10


void GrOcc(int *arr, int l, int *grt, int *occ);       //*arr é o ponteiro do vetor, l o comprimento dele, *grt armazena o maior valor, e *occ quantas vezes esse valor ocorreu;


int main(){
    int vet[ARRLEN], maior, ocorr, i;
    srand(time(NULL));
    printf("\tArray inicial:\n\t[");
    for(i = 0; i < ARRLEN; i++){
        vet[i] = (rand() % 10) + 1;
        printf("%d ", vet[i]);
    }
    GrOcc(vet, ARRLEN, &maior, &ocorr);
    printf("\b]\n\n\tO maior numero encontrado nesse array foi %d.\n\tEsse numero ocorreu %d vez(es).\n\n", maior, ocorr);
    system("pause");
    return 0;
}


void GrOcc(int *arr, int l, int *grt, int *occ){
    int i;
    *grt = arr[0];
    *occ = 0;
    for(i = 0; i < l; i++){
        if(arr[i] > *grt) *grt = arr[i];
    }
    for(i = 0; i < l; i++){
        if(arr[i] == *grt) (*occ)++;
    }
}