#include <stdio.h>
#include <stdlib.h>

int main(){
    //variável.
    int i, SUM;
    printf("Primeiros 1000 multiplos de 3 ou 5...\n");
    
    //loop principal.
    for(i = 0; i < 1000 ; i++){
        if(i % 3 == 0 || i % 5 == 0){
            if(i == 0) printf("%d ", i);
            else printf("+ %d ", i);
            SUM += i;
        }
    }
    printf("= %d.\n\n", SUM);

    system("pause");
    return 0;
}