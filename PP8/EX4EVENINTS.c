#include <stdio.h>
#include <stdlib.h>

int main(){
    //var. count armazena quantos numeros pares foram armazenados;
    int arr[5], *ip, i, count = 0;
    ip = arr;
    for(i = 0; i < 5; i++){
        printf("Insira o %do de cinco numeros inteiros.\n>> ", i+1);
        scanf("%d", ip+i);
    }
    printf("Os valores pares dessa array sao:\n\n\t");
    for(i = 0; i < 5; i++){
        if(*(ip+i) % 2 == 0){
            printf("%d   ", *(ip+i));
            count++;
        }
    }
    if(count == 0) printf("Nenhum!");

    printf("\n\n");
    system("pause");
    return 0;
}