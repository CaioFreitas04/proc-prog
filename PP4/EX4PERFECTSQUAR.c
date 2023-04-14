#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int perfect(int x); //função teste de quadrado perfeito.

int main(){
    //var.
    int x;
    printf("Teste de quadrado perfeito: insira um numero!\n>> ");
    scanf("%d", &x);

    if(perfect(x)) printf("Quadrado perfeito!\n\n"); //recebe o retorno da função e o interpreta.
    else printf("Quadrado imperfeito!\n\n");

    system("pause");
    return 0;
}


int perfect(int x){                  //requer math.h.
    float sqroot;
    sqroot = sqrt(x);
    if (sqroot == sqrt(x)) return 1; //se a raíz com decimais for diferente da raíz sem decimais,
    else return 0;                   //o número não é quadrado perfeito.
}