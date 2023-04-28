#include <stdio.h>
#include <stdlib.h>

long prime(long num);                   //função que testa se um número é primo.
                                        //roubada do PP3_EX20SUMOFALLPRIMES.
int main(){
    //var.
    long array[10];
    int i;

    printf("\t[CHECAGEM DE PRIMOS EM MASSA]\n\n");

    printf("Insira 10 numeros inteiros.\n>> ");
    for(i = 0; i < 10; i++){
        scanf("%ld", &array[i]);
    }

    printf("\n\n");
    //testando cada número e apresentando as posições e valores dos primos.
    for(i = 0; i < 10; i++){
        if(prime(array[i])){
            printf("> %da posicao: %ld eh primo!\n", (i + 1), array[i]);
        }
    }

    printf("\n");
    system("pause");
    return 0;
}


long prime(long num){
    long i;
    int count = 0;
    if(num <= 0) return 0;
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