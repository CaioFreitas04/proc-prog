#include <stdio.h>
#include <stdlib.h>

int main(){

    //variável.
    int count;
    for(count = 0; count <= 100000; count += 1000) printf("%d ", count);
    printf("\n");
    system("pause");
    return 0;
}