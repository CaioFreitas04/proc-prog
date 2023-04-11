#include <stdio.h>
#include <stdlib.h>

int dig_inverter(int num); //função inversora de dígitos.

int main(){

    //var. x e y são os fatores, prod é o produto, palin é o oposto, e gr_palin é o maior palíndromo encontrado.
    //x1 e y1 são os fatores do maior palíndromo encontrado.
    int x = 100, y = 100, prod, palin = 0, gr_palin = 0, x1, y1;
    printf("Calculando o maior palindromo resultante do produto de dois numeros de tres digitos...");
    while(x <= 999){

        while(y <= 999){
            prod = x * y;
            if(prod % 10 != 0) palin = dig_inverter(prod); //otimização: não testa produtos com 0 nas unidades.
            if(palin == prod){
                if(palin > gr_palin){
                    gr_palin = palin;
                    x1 = x;
                    y1 = y;
                }
            }
            y++;
        }

        y = 100;
        x++;
    }
    printf("\nO maior palindromo eh %d * %d = %d.\n\n", x1, y1, gr_palin);

    system("pause");
    return 0;
}


int dig_inverter(int num){
    
    int invert = 0, mult = 1;

    if (num < 10) return num;

    while(num / mult != 0){     //esse bloco determina o tamanho do número, em dígitos. O mult /= 10; é preciso para
        mult *= 10;             //corrigir esse tamanho e realizar o cálculo corretamente.
    }
    mult /= 10;


    while(num > 0){
        invert = invert + ((num % 10) * mult);
        num /= 10;
        mult /= 10;
    }  
    //o verdadeiro inversor: ele pega cada dígito e multiplica-o pelo "mult" determinado no bloco anterior.
    //dessa forma, o número é desconstruído e reconstruído ao contrário.

    return invert;
}