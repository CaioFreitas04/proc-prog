#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arrayMult(int num[], int l);    //multiplica todos os números de um vetor e retorna o produto;
int charToInt(char c);              //converte um char de número para int, e o retorna;
int intsToInt(int num[], int l);    //converte uma sequência de algarismos em um único inteiro;

//declarando o número capetosamente gigante do enunciado como variável global, só pra garantir;
char GIGASEQ[1001] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530";

int main(){

    //var. sec[] armazena um "setor" do número, uma sequência de 5 caracteres. Larg[] armazena duas informações:
    //larg[0] armazena a sequência que gerou o maior número, e larg[1] o produto dessa sequência. conInt[] armazena
    //os cinco caracteres da sequência escolhida. mult é o produto dos ints de conInt;
    char sec[5];
    int larg[2] = {0, 0}, conInt[5], mult, i, j;

    printf("Considerando a sequencia\n%s\no maior produto formado por cinco digitos consecutivos nela eh...\n\n", GIGASEQ);

    //loop principal;
    for(i = 0; i < 1001; i++){
        for(j = 0; j < 5; j++){
            if(GIGASEQ[i+j] == '\0'){
                conInt[j] = 0;
                break;
            }
            sec[j] = (GIGASEQ[i+j]);       //isso vai ler todas as sequências possíveis;
            conInt[j] = charToInt(sec[j]);
        }

        mult = arrayMult(conInt, 5);

        if(mult > larg[1]){    //se o produto dos conInts for maior do que larg[1], este será atualizado;
            larg[1] = mult;
            larg[0] = intsToInt(conInt, 4);
        }
    }

    printf("%d, formado pela sequencia %d.\n\n", larg[1], larg[0]);

    system("pause");
    return 0;
}


int arrayMult(int num[], int l){

    //var. prod é o produto a ser retornado;
    int i, prod = 1;
    for(i = 0; i < l; i++){
        prod *= num[i];
    }

    return prod;
}


int charToInt(char c){      //todo inteiro na tabela ASCII é igual a si mesmo + 48;
    if(c > 47 && c < 58){
        c -= 48;
    }

    return c;
}


int intsToInt(int num[], int l){

    //var. mult é um multiplicador, e sum é o inteiro final;
    int i, mult = 1, sum = 0;
    for(i = l; i >= 0; i--){
        sum += (num[i] * mult);
        mult *= 10;
    }
    return sum;
}