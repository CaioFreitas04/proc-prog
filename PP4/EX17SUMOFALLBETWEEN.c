#include <stdio.h>
#include <stdlib.h>

void InterSum(unsigned long long x, unsigned long long y); //função que soma todos os valores entre dois números.

int main(){

    //var. (Nota: *unsigned long long* é uma das coisas mais aberrantes de se escrever, por algum motivo.)
    unsigned long long n1, n2;
    printf("\t[SOMA ENTRE DOIS NUMEROS]\n\n");
    printf("Insira dois numeros inteiros positivos.\n>> ");
    scanf("%llu %llu", &n1, &n2);
    InterSum(n1, n2);
    system("pause");
    return 0;
}

void InterSum(unsigned long long x, unsigned long long y){

    //var. Variável soma.
    unsigned long long sum = 0;

    printf("Soma de todos os numeros entre N1 e N2: ");
    if(x == y){
        printf("0");
        return;
    }
    if(x < y){
        while(x < (y-1)){
            x++;
            sum += x;
        }
        printf("%llu", sum);
    }
    else{
        while(y < (x-1)){
            y++;
            sum += x;
        }
        printf("%llu", sum);
    }
    printf("\n\n");
}