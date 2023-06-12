#include <stdio.h>
#include <stdlib.h>

int main(){

    //var;
    int *arr, i;

    arr = (int*) calloc(5, sizeof(int));
    printf("Insira cinco valores inteiros.\n");
    for(i = 0; i < 5; i++){
        printf(">> ");
        scanf("%d", &arr[i]);
    }
    printf("\n\n");
    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    printf("\n");

    system("pause");
    return 0;
}