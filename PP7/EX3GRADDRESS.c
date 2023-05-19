#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;


    printf("Preencha a variavel x.\n>> ");
    scanf("%d", &x);
    printf("Preencha a variavel y.\n>> ");
    scanf("%d", &y);

    if(&x > &y) printf("\n\nA variavel x tem o maior endereco.\n\n");
    else printf("\n\nA variavel y tem o maior endereco.\n\n");
    
    system("pause");
    return 0;
}