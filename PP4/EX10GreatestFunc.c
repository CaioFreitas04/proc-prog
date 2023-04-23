#include <stdio.h>
#include <stdlib.h>

int greater (int x, int y);         //função comparatora.

int main(){
    
    //var.
    int num, num1;
    printf("Insira dois numeros inteiros.\n>> ");
    scanf("%d %d", &num, &num1);
    
    printf("Maior: %d.\n\n", greater(num, num1));
    system("pause");
    return 0;
}


int greater (int x, int y){
    if(x > y) return x;
    else return y;
}