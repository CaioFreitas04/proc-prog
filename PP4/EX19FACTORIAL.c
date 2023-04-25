#include <stdio.h>
#include <stdlib.h>

unsigned long long fact(unsigned long long n);      //função fatorial.

int main(){
    //var.
    unsigned long long num;
    printf("\t--FATORIAIS--\n\n");
    printf("Insira um numero.\n>> ");
    scanf("%llu", &num);
    printf("%llu! = %llu\n\n", num, fact(num));
    system("pause");
    return 0;
}


unsigned long long fact(unsigned long long n){
    if(n == 1) return 1;
    else return (n * fact(n-1));
}