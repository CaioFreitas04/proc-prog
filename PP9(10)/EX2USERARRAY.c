#include <stdio.h>
#include <stdlib.h>


int main(){
    
    //var;
    int *arr, i, N;

    printf("Quantos espacos tera seu vetor de inteiros?\n");
    do{
        printf(">> ");
        scanf("%d", &N);
    }while(N <= 0);

    arr = (int*) calloc(N, sizeof(int));
    printf("\nPreencha seu vetor de inteiros.\n");
    for(i = 0; i < N; i++){
        printf("[%d] >> ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n\n");
    for(i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    printf("\n\n");
    system("pause");
    return 0;
}