#include <stdio.h>
#include <stdlib.h>

int main(){
    //var.
    int A[6] = {1, 0, 5, -2, -5, 7}, soma, i;

    soma = A[0] + A[1] + A[5];
    printf("%d\n\n", soma);
    A[4] = 100;

    for(i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }
    printf("\n");
    
    system("pause");
    return 0;
}