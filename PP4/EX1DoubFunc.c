#include <stdio.h>
#include <stdlib.h>

int doub(int x);

int main(){

    //var.
    int num;
    printf("Insira um numero a ser duplicado: ");
    scanf("%d", &num);
    printf("Resultado: %d\n\n", doub(num));
    system("pause");
    return 0;
}


int doub(int x){
    x *= 2;
    return x;
}