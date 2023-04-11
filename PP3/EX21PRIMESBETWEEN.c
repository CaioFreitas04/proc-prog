#include <stdio.h>
#include <stdlib.h>

long prime(long num); //função que determina se dado número é primo.

int main(){

    //var. Os parâmetros a e b serão introduzidos pelo usuário para que sejam determinados o número de primos
    //existentes entre eles. count conta quantos primos existem. i é um incrementador.
    long a, b, count = 0, i;

    do{             //um menu bem simples.
        printf("\t--PRIMOS ENTRE DOIS NUMEROS--\n");
        printf("Introduza os valores naturais: ");
        scanf("%ld %ld", &a, &b);
        if(a < 1 || b < 1) printf("Valor(es) invalido(s)!\n\n");
    }while(a < 1 || b < 1);
    printf("\n");

    if(a == b) count = 0; //detectando se a e b são iguais para pular a execução da função.
    else if (a < b){
        for(i = a+1; i < b; i++){
            if(prime(i)) count++;
            //se o retorno for diferente de 0, se sim, o número é primo.
        }
    } else{
        for(i = b+1; i < a; i++){
            if(prime(i)) count++;
            //se o retorno for diferente de 0, se sim, o número é primo.
        }
    }
    
    //apresentação de resultados.
    printf("Existe(m) %ld primo(s) entre ", count);
    if(a < b) printf("%ld e %ld.", a, b); //esse if-else existe literalmente só para a impressão ficar mais bonitinha.
    else printf("%ld e %ld.", b, a);
    printf("\n\n");

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