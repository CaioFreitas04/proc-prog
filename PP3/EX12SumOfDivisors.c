#include <stdio.h>
#include <stdlib.h>

int main(){

    //var e teste de realidade.
    int Num, Sum = 0, div;
    do{
        printf("Insira um numero natural: ");
        scanf("%d", &Num);
        if(Num < 0) printf("Valor invalido.\n\n");
    } while(Num < 0);

    //loop do programa.
    for(div = 1; div < Num; div++){
        //testa se o número for um divisor, e imprime-o, se for o caso.
        if((Num % div) == 0){
            //if-else só para deixar a apresentação mais bonitinha, imprimindo + direito.
            if(div == 1) printf("%d ", div);
            else printf("+ %d ", div);
            Sum += (div);
        }
    }
    //resultado final.
    printf("= %d\n\n", Sum);


    system("pause");
    return 0;
}