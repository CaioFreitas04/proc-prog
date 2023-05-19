#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[6], *p, i;
    p = &arr[0];
    for(i = 0; i < 6; i++){
        printf("Insira o %do numero do vetor.\n>> ", i+1);
        scanf("%d", p);
        p++;
    }
    p = &arr[0];
    for(i = 0; i < 6; i++){
        printf("\tarr[%d] = %d\t---\tadd. %p\n", i, *p, p);
        p++;
    }
    printf("\n");
    system("pause");
    return 0;
}