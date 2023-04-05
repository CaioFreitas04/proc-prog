#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //var: SAL -> salário. RATE -> taxa de aumento. YEAR -> ano atual.
    double SAL = 2000, RATE = 0.015;
    int YEAR;
    printf("Voce foi contratado em 1995 com salario de R$2000.00. Considerando que voce recebe aumento anual, seu salario aumentara com o passar dos anos.\n");
    printf("Qual o ano atual? >> ");
    scanf("%d", &YEAR);
    if(YEAR < 1995) printf("Ano invalido.\n");
    else if(YEAR == 1995) printf("...seu salario ainda eh R$2000.00.\n");
    else{
        printf("No ano de %d, seu salario eh ", YEAR);
        while(YEAR > 1995){
            SAL = SAL * (1 + RATE);
            RATE = RATE * 2.0;
            YEAR--;
        }
        printf("R$%.2lf.\n\n", SAL);
    }
    system("pause");
    return 0;
}