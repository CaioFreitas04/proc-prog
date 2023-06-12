#include <stdio.h>
#include <stdlib.h>


int OE(int n);              //lê um inteiro e retorna se é ímpar ou par;


int main(){

    //var;
    int *arr, i, N, impar = 0, par = 0;
    printf("Quantos inteiros serao analisados?\n");
    do{
        printf(">> ");
        scanf("%d", &N);
    }while (N <= 0);

    arr = (int*) calloc(N, sizeof(int));

    printf("\nPreencha sua lista de inteiros a serem analisados.\n");
    for(i = 0; i < N; i++){
        printf(">> ");
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < N; i++){
        if(OE(arr[i])) impar++;
        else par++;
    }
    
    free(arr);

    printf("\nDa sua lista, %d numero(s) era(m) par(es), e %d, impar(es)!\n\n", par, impar);
    system("pause");
    return 0;
}


int OE(int n){              //retorna 1 se n for ímpar, e 0, senão.
    if(n % 2) return 1;
    else return 0;
}