#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, *px, *py;
    px = &x;
    py = &y;

    printf("Insira dois numeros inteiros: x e y.\n>> ");
    scanf("%d%d", px, py);
    
    printf("\n\tSOMA: %d\n", *px + *py);
    printf("\tSUBTRACAO: %d\n", *px - *py);
    printf("\tPRODUTO: %d\n", *px * *py);
    printf("\tQUOCIENTE: ");
    if(*py != 0) printf("%d\n", *px / *py);
    else printf("ERR\n");
    printf("\n\n");

    system("pause");
    return 0;
}