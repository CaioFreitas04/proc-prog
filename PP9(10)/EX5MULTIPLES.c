#include <stdio.h>
#include <stdlib.h>


int main(){
    
    //var;
    int *p,  i, N, num, count = 0;

    printf("Quao grande sera seu array de inteiros?\n");
    do{
        printf(">> ");
        scanf("%d", &N);
        if(N <= 0) printf("Valor invalido.\n\n");
    }while(N <= 0);

    //alocando memória e preenchendo o vetor;
    p = (int*) calloc(N, sizeof(int));
    for(i = 0; i < N; i++){
        printf("%do valor do array: ", i+1);
        scanf("%d", &p[i]);
    }

    //contando os múltiplos;
    printf("Insira um numero inteiro.\n>> ");
    scanf("%d", &num);
    printf("\nOs multiplos desse numero sao: ");
    for(i = 0; i < N; i++){
        if(p[i] % num == 0){
            printf("%d, ", p[i]);
            count++;
        }
    }
    printf("\b\b\nNo total, contei %d multiplos de seu numero no vetor.\n\n", count);

    system("pause");
    return 0;
}