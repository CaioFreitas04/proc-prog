#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10], i, *ip;

    ip = arr;
    printf("Insira um numero inteiro.\n>> ");
    scanf("%d", ip);
    for(i = 1; i < 10; i++){
        *(ip+i) = *ip;
    }

    printf("Array preenchida:\n\n\t");
    for(i = 0; i < 10; i++){
        printf("%d   ", *(ip+i));
    }
    printf("\n\n");
    system("pause");
    return 0;
}