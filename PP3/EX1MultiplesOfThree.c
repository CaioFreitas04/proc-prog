#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e programa.
    int mult = 1;
    printf("Multiplos de tres:\n");
    while(mult <= 5){
        printf("%d ", 3 * mult);
        mult++;
    }
    printf("\n");
    system("pause");
    return 0;
}