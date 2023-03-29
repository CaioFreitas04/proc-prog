#include <stdio.h>
#include <stdlib.h>

int main(){

    //Variáveis.
    int x, y, z;
    printf("Escreva tres numeros.\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("Em ordem crescente: ");
    if(x < y && x < z){
        if(y < z) printf("%d %d %d", x, y, z);
        else printf("%d %d %d", x, z, y);
    }
    if(y < x && y < z){
        if(x < z) printf("%d %d %d", y, x, z);
        else printf("%d %d %d", y, z, x);
    }
    if(z < x && z < y){
        if(x < y) printf("%d %d %d", z, x, y);
        else printf("%d %d %d", z, y, x);
    }
    if(x == y && y == z) printf("%d %d %d", x, y, z);
    printf("\n");
    system("pause");
    return 0;
}