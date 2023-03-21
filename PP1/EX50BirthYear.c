#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento de dados.
    int Age, Year;
    printf("Insira sua idade e o ano atual:\n");
    scanf("%d %d", &Age, &Year);

    //teste para garantir uma idade verdadeira.
    if(Age < 0){
        printf("Idade invalida.\n");
    }
    else{
        //execução normal.
        Year = Year - Age;
        if(Year == 0){
            Year = -1;
        }
        //implementação para datas a.C.
        if(Year < 0){
            Year *= -1;
            printf("Voce nasceu em %d a.C.!\n", Year);
        }
        else{
            printf("Voce nasceu em %d!\n", Year);
        }
    }
    system("pause");
    return 0;
}