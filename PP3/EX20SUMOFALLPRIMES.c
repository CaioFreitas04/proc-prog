#include <stdio.h>
#include <stdlib.h>

long prime(long num); //função da soma de números primos.

int main(){

    //var.
    long long int sum = 0, i;
    //cálculo da soma dos números primos de 1 a 2000000
    for(i = 1; i < 2000000; i++){
        sum += prime(i);
    }
    printf("A soma de todos os numeros primos menores do que 2000000 eh: ");
    printf("%lld.\n", sum);
    system("pause");
    return 0;
}


long prime(long num){
    long i;
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
