#include <stdio.h>
#include <stdlib.h>

int main(){

    //variáveis e escaneamento.
    int age, wyr;
    printf("Insira a sua idade.\n");
    scanf("%d", &age);
    printf("Insira seu tempo de servico.\n");
    scanf("%d", &wyr);

    //testando se é possível se aposentar: as condições são:
    //65 anos de idade.
    //trabalho por 30 anos.
    //ter pelo menos 60 anos de idade e 25 de serviço.
    if(age >= 65 || wyr >= 30 || (age >= 60 && wyr >= 25)){
        printf("Voce pode se aposentar! :D\n");
    }
    else{
        printf("Voce ainda nao pode se aposentar :(\n");
    }
    system("pause");
    return 0;
}
