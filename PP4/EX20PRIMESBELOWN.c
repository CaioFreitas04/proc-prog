#include <stdio.h>
#include <stdlib.h>

unsigned long long prime(unsigned long long num);   //testa se um número é primo. Roubada do PP3_EX21PRIMESBETWEEN.c
unsigned long long PrimesSmaller(unsigned long long N);    //determina quantos primos hão abaixo de N.

int main(){

    //var.
    unsigned long long input;
    printf("\t--PRIMOS ABAIXO DE N--\n\n");
    printf("Insira o valor N.\n>> ");
    scanf("%llu", &input);
    printf("Hao %llu primos abaixo de %llu.\n\n", PrimesSmaller(input), input);
    system("pause");
    return 0;
}

unsigned long long PrimesSmaller(unsigned long long N){

    //var. count é a quantidade de primos contada. current é o valor atual.
    unsigned long long i, count = 0, current;
    for(i = 2; i <= N; i+=2){
        current = prime(i);
        if(current) count++;
        if(i == 2) i = 1;               //2 -> 3 -> 5 -> 7 -> 9...
    }

    return count;
}


unsigned long long prime(unsigned long long num){

    //var.
    unsigned long long i;
    int count = 0;
    if(num == 1) return 0;
    if(num == 2) return 2;
    if(num == 3) return 3;
    if(num == 5) return 5;
    if(num == 7) return 7;
    //a função está otimizada ao máximo para testar se um dado número é primo. Ela é chamada diversas vezes pelo programa.
    //Se o número for primo, ela retorna 0. Do contrário, ela retorna o próprio número.
    if((num % 2) == 0 || (num % 3) == 0 || (num % 5) == 0 || (num % 7) == 0) return 0;
    for(i = 7; i <= ((num / 2) + 1); i += 2){
        if((num % i) == 0){
            count++;
            break;
        }
    }
    if(count == 0) return num;
    else return 0;
}

