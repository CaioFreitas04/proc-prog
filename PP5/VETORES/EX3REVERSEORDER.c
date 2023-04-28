#include <stdio.h>
#include <stdlib.h>

int main(){
    //var
    int array[6], i;
    printf("Insira seis valores inteiros.\n");
    for(i = 0; i < 6; i++){
        scanf("%d", &array[i]);
    }

    printf("Em ordem reversa: ");
    for(i = 5; i >= 0; i--){
        printf("%d ", array[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}