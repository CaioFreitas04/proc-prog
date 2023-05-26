#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5], *ip, i;
    ip = arr;
    for(i = 0; i < 5; i++){
        printf("Insira o %do de cinco numeros inteiros.\n>> ", i+1);
        scanf("%d", ip+i);
    }
    printf("O dobro dos numeros dessa array eh:\n\n\t");
    for(i = 0; i < 5; i++){
        printf("%d   ", *(ip+i)*2);
    }

    printf("\n\n");
    system("pause");
    return 0;
}