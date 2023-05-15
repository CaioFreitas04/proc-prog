#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{  //Armazena o nome, o endereço, e o telefone do indivíduo;
    char nom[256], end[256], tel[20];
} psn;


int StrComp(char a[], char b[]);    //compara duas strings de uma forma específica;


int main(){
    //var. a é o vetor principal, e b será utilizado para armazenar elementos para a bubblesort;
    //int chk servirá como flag para sinalizar se a está ordenada ou não;
    psn a[5], b;
    int i, j, chk = 0;
    
    printf("\tLISTA TELEFONICA\n\n");
    for(i = 0; i < 5; i++){
        printf("Insira o nome do %do contato.\n>> ", i+1);
        setbuf(stdin, NULL);
        fgets(a[i].nom, 256, stdin);
        for(j = 0; a[i].nom[j] != '\0'; j++){           //removendo o \n da string;
            if(a[i].nom[j] == '\n') a[i].nom[j] = 0;
        }
        printf("Insira o endereco do %do contato.\n>> ", i+1);
        setbuf(stdin, NULL);
        fgets(a[i].end, 256, stdin);
        for(j = 0; a[i].end[j] != '\0'; j++){           //removendo o \n da string;
            if(a[i].end[j] == '\n') a[i].end[j] = 0;
        }
        printf("Insira o numero do %do contato.\n>> ", i+1);
        setbuf(stdin, NULL);
        fgets(a[i].tel, 20, stdin);
        for(j = 0; a[i].tel[j] != '\0'; j++){           //removendo o \n da string;
            if(a[i].tel[j] == '\n') a[i].tel[j] = 0;
        }
        printf("\n= = = = = = = = =\n\n");
    }

    //antes de tudo ser ordenado, TODAS AS LETRAS DE NOME serão passadas para maiúsculas;
    //porque senão eu vou ter um ataque tentando ordenar letras =);
    for(i = 0; i < 5; i++){
        for(j = 0; a[i].nom[j] != '\0'; j++){
            if(a[i].nom[j] >= 97 && a[i].nom[j] <= 122) a[i].nom[j] -= 32;
        }
    }

    //bubblesort;
    j = 0;
    do{
        chk = 0;
        for(i = 0; i < 5; i++){

            //se as palavras comparadas tiverem letras iniciais iguais, isso vai testar a próxima letra,
            //até que sejam diferentes e, portanto, comparáveis;
            while(a[i].nom[j] == a[i+1].nom[j]){
                j++;
            }

            if(a[i].nom[j] > a[i+1].nom[j] && i != 4){
                strcpy(b.nom, a[i].nom);        //passando os dados de a[i] para b;
                strcpy(b.end, a[i].end);
                strcpy(b.tel, a[i].tel);

                strcpy(a[i].nom, a[i+1].nom);   //copiando os termos do segundo ao primeiro...;
                strcpy(a[i].end, a[i+1].end);
                strcpy(a[i].tel, a[i+1].tel);

                strcpy(a[i+1].nom, b.nom);      //e de b para o segundo!;
                strcpy(a[i+1].end, b.end);
                strcpy(a[i+1].tel, b.tel);

                chk = 1;    //essa flag é ativada, para apontar que a lista não estava ordenada;
                            //isso é feito para que o processo sejá repetido até que esteja;
            }
            j = 0;          //ao final, j é resetado para 0 caso tenha sido alterado;
        }
    }while(chk);
    //provavelmente a pior bubblesort de todas. Eu culpo strings;


    //impressão dos resultados;
    for(i = 0; i < 5; i++){
        printf("\t%d. %s\t%s\t%s\n", i+1, a[i].nom, a[i].end, a[i].tel);
    }
    printf("\n");
    system("pause");
    return 0;
}