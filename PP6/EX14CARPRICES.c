#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct carro{   //marca, ano, preço;
    char marca[17];
    unsigned int ano, prec;
} car;


int main(){
    //var. prec é o preço requisitado pelo usuário. count conta quantos carros caem na faixa de preço especificada;
    car c[5];
    unsigned int i, j, prec, count;

    printf("\tCOMPARADOR DE PRECOS DE CARROS.\n\n");
    for(i = 0; i < 5; i++){
        printf("Insira a marca do %uo carro (max 15 caracteres).\n>> ", i+1);
        setbuf(stdin, NULL);
        fgets(c[i].marca, 17, stdin);
        for(j = 0; c[i].marca[j] < 15; j++){             //removedor de \n;
            if(c[i].marca[j] == '\n') c[i].marca[j] == 0;
        }

        printf("Insira o ano de fabricacao do %uo carro.\n>> ", i+1);
        scanf("%u", &c[i].ano);

        printf("Insira o preco do %uo carro.\n>> ", i+1);
        scanf("%u", &c[i].prec);
    }

    //coletados os dados, agora a parte lógica que SÓ mostra os carros com preços menores do que prec!;
    do{
        count = 0;
        printf("\n\n(insira 0 para sair!)\nMostrar somente carros com preco ate R$");
        scanf("%u", &prec);
        for(i = 0; i < 5; i++){
            if(c[i].prec < prec){
                printf("\t%s\t%u\tR$%u.00\n", c[i].marca, c[i].ano, c[i].prec);
                count++;
            }
        }
        if(count == 0) printf("Nenhum carro da lista eh mais barato do que R$%u.00.\n", prec);
        printf("\n= = = = = = = = =\n");
    }while(prec != 0);

    printf("\nEncerrando...\n\n");
    system("pause");
    return 0;
}