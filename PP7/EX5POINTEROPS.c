#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, *px, *py;
    px = &x;
    py = &y;

    printf("Digite dois numeros inteiros.\n>> ");
    scanf("%d%d", &x, &y);
    *px *= 2;
    *py *= 2;
    printf("A soma do dobro desses numeros eh %d\n\n", *px + *py);
    system("pause");
    return  0;
}