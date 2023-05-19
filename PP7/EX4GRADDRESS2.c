#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;


    printf("Preencha a variavel x.\n>> ");
    scanf("%d", &x);
    printf("Preencha a variavel y.\n>> ");
    scanf("%d", &y);

    if(&x > &y) printf("\n\nO conteudo da variavel de maior endereco eh %d.\n\n", x);
    else printf("\n\nO conteudo da variavel de maior endereco eh %d.\n\n", y);
    
    system("pause");
    return 0;
}