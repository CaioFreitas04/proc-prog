#include <stdio.h>
#include <stdlib.h>

int main(){

    //var.
    int MODE;
    double x, y, Ans;
    printf("\t--CALCULADORA--\n\n");
    while(1){

        //A variável-resultado "Ans" é sempre colocada em 0 antes da execução, para garantir que não haverão problemas com esta.
        Ans = 0;
        printf("Selecione a funcao desejada:\n");
        printf("1. Adicao.\n");
        printf("2. Subtracao.\n");
        printf("3. Multiplicacao.\n");
        printf("4. Divisao.\n");
        printf("5. Saida.\n\n");
        printf("Comando? >> ");
        scanf("%d", &MODE);
        if(MODE == 5) break;
        if(MODE > 5 || MODE < 1){
            printf("ERR1: Comando_invalido\n\n");
            continue;
        }
        //seleção de operação dependendo da escolha do usuário.
        else switch(MODE){
            case 1:
                printf("Insira duas parcelas: ");
                scanf("%lf %lf", &x, &y);
                Ans = x + y;
                break;
            case 2:
                printf("Insira um minuendo e um subtraendo: ");
                scanf("%lf %lf", &x, &y);
                Ans = x - y;
                break;
            case 3:
                printf("Insira dois fatores: ");
                scanf("%lf %lf", &x, &y);
                Ans = x * y;
                break;
            case 4:
                printf("Insira um dividendo e um divisor: ");
                scanf("%lf %lf", &x, &y);
                if(y == 0) printf("ERR2: Divisor_0");
                else Ans = x / y;
        }
        if(MODE == 4 && y == 0) printf("\nResultado = ERR\n\n");
        else printf("\nResultado = %lf\n\n", Ans);

    }
    printf("\nEncerrando...\n\n");
    system("pause");
    return 0;
}