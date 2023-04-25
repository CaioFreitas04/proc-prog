#include <stdio.h>
#include <stdlib.h>

double modecalc(double x, double y, char MODE);   //função calculadora.
int gui();                                  //função de interface.

int main(){                                 //esse código foi roubado do PP3_EX16FULLCALC.

    //var.
    int dummy;                              //essa variável serve para reinicializar a interface se houver input inválido.
    printf("\t--CALCULADORA--\n\n");
    do{
        fflush(stdin);
        dummy = gui();
    }while(dummy);
    printf("\nEncerrando...\n\n");
    system("pause");
    return 0;
}


int gui(){

    char MODE;
    double x, y;

    printf("Selecione a funcao desejada:\n");
    printf("+) Adicao.\n");
    printf("-) Subtracao.\n");
    printf("*) Multiplicacao.\n");
    printf("/) Divisao.\n");
    printf("E) Saida.\n\n");
    printf("Comando? >> ");
    scanf("%c", &MODE);
    if(MODE == 'E') return 0;
    if(MODE != '+' && MODE != '-' && MODE != '*' && MODE != '/'){
        printf("ERR1: Comando_invalido\n\n");
        return 1;
    }    

    printf("Insira suas duas parcelas:\n>> ");
    scanf("%lf %lf", &x, &y);
    modecalc(x, y, MODE);
    return 0;
}

double modecalc(double x, double y, char MODE){
    
    //seleção de operação dependendo da escolha do usuário.
        double Ans;
        switch(MODE){
            case '+': Ans = x + y; break;
            case '-': Ans = x - y; break;
            case '*': Ans = x * y; break;
            case '/':
                if(y == 0) printf("ERR2: Divisor_0");
                else Ans = x / y;
                break;
        }
        if(MODE == '/' && y == 0) printf("\nResultado = ERR\n\n");
        else printf("\nResultado = %lf\n\n", Ans);
}
