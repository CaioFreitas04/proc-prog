#include <stdio.h>
#include <stdlib.h>

int main(){
    //var.
    int array[50], i;

    for(i = 0; i < 50; i++){
        array[i] = (i + 5 * i) % (i + 1);
    }

    for(i = 0; i < 50; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}