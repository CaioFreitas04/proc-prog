#include <stdio.h>
#include <stdlib.h>

int sign(int x);

int main(){
    //var.
    int x;

    printf("Insira um numero: ");
    scanf("%d", &x);
    x = sign(x);

    if(x == -1) printf("Numero negativo!");
    else if(x == 0) printf("Numero zero!");
    else printf("Numero positivo!");
    
    printf("\n\n");
    system("pause");
    return 0;
}


int sign(int x){
    if(x < 0) return -1;
    else if (x == 0) return 0;
    else return 1;
}