#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis.
    int count;

    //utilizando for.
    count = 1;
    printf("1-100: com for: ");
    for(count = 1; count <= 100; count++) printf("%d ", count);


    //utilizando while.
    count = 1;
    printf("\n\n1-100: com while: ");
    while(count <= 100){
        printf("%d ", count);
        count++;
    }

    //utilizando do-while.
    count = 1;
    printf("\n\n1-100: com do-while: ");
    do{
        printf("%d ", count);
        count++;
    }while(count <= 100);
    printf("\n");
    
    system("pause");
    return 0;
}