#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct data{                //dias, meses, anos;
    unsigned int day, mon, yr;
} data;

typedef struct dados{       //nome, endereço, CEP, cidade, data de nascimento, e e-mail;
    char nom[256], end[256], cid[256], cep[10], mai[256];
    data nas;
} dds;


int mailCheck(char str[]);  //checa se um e-mail tem as características de um e-mail;
int CEPCheck(char str[]);   //checa se um CEP tem as características de um CEP;
int dateCheck (data d);     //checa se uma data é real;


int main(){
    //var. As variáveis "chk" servem de flag para indicar se um dado componente é valido ou não;
    dds a;
    int chkMail = 0, chkCEP = 0, chkDat = 0;
    int i;

    printf("\tAUDITORIA DE DADOS\n\n");
    
    //escaneamento de dados.
    printf("Insira seu nome.\n>> ");
    setbuf(stdin, NULL);
    fgets(a.nom, 256, stdin);
    for(i = 0; a.nom[i] != '\0'; i++){      //loop para remover o \n do fgets();
        if(a.nom[i] == '\n') a.nom[i] = 0;
    }

    printf("Insira seu endereco.\n>> ");
    setbuf(stdin, NULL);
    fgets(a.end, 256, stdin);
    for(i = 0; a.end[i] != '\0'; i++){      //loop para remover o \n do fgets();
        if(a.end[i] == '\n') a.end[i] = 0;
    }

    printf("Insira seu CEP (sem hifen).\n>> ");
    setbuf(stdin, NULL);
    fgets(a.cep, 10, stdin);
    for(i = 0; a.cep[i] != '\0'; i++){      //loop para remover o \n do fgets();
        if(a.cep[i] == '\n') a.cep[i] = 0;
    }
    
    printf("Insira sua cidade.\n>> ");
    setbuf(stdin, NULL);
    fgets(a.cid, 256, stdin);
    for(i = 0; a.cid[i] != '\0'; i++){      //loop para remover o \n do fgets();
        if(a.cid[i] == '\n') a.cid[i] = 0;
    }

    printf("Insira seu e-mail.\n>> ");
    setbuf(stdin, NULL);
    fgets(a.mai, 256, stdin);
    for(i = 0; a.mai[i] != '\0'; i++){      //loop para remover o \n do fgets();
        if(a.mai[i] == '\n') a.mai[i] = 0;
    }

    printf("Insira sua data de nascimento (dd mm yyyy).\n>> ");
    scanf("%u%u%u", &a.nas.day, &a.nas.mon, &a.nas.yr);
    printf("\n\n");

    //averiguação de dados e apresentação de resultados;
    chkMail = mailCheck(a.mai);
    chkCEP = CEPCheck(a.cep);
    chkDat = dateCheck(a.nas);

    if(chkMail != 1 || chkCEP != 1 || chkDat != 1){
        if(chkMail != 1) printf("E-mail invalido.\n");
        if(chkCEP != 1) printf("CEP invalido.\n");
        if(chkDat != 1) printf("Data de nascimento invalida.\n");
    }
    else{
        printf("Nome: %s.\n", a.nom);
        printf("Endereco: %s.\n", a.end);
        printf("CEP: %s.\n", a.cep);
        printf("Cidade: %s.\n", a.cid);
        printf("E-mail: %s.\n", a.mai);
        printf("Data de nascimento: %u/%u/%u.\n", a.nas.day, a.nas.mon, a.nas.yr);
    }
    printf("\n");

    system("pause");
    return 0;
}

//!!TODAS AS FUNÇÕES ABAIXO RETORNAM 1 SE O VALOR É VÁLIDO E 0 SE FOR INVÁLIDO!!

int mailCheck(char str[]){  //um e-mail válido deve ter @ e um domínio após esse;
    //var. chkAt registra se @ foi encontrado. chkDom determina se um domínio existe após @;
    int chkAt = 0, chkDom = 0, i, j;

    //a definição de "domínio" usada é, honestamente, *bem ampla*. Um domínio é determinado por um ponto que
    //se encontra à direita da @. Ou seja, numa posição x de número maior do que a posição da @;

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == '@'){
            chkAt = i;
            if(str[i] == 32) return 0;
        }
    }
    if(chkAt){
        for(j = i; str[j] != '\0'; j++){    //isso é eficiente (acho), E impede que "@domain.com" seja um email válido!
            if(str[j] == '.'){
                chkDom = 1;
                if(str[i] == 32) return 0;
            }
        }
    }

    if(chkAt != 0 && chkDom != 0) return 1;
    else return 0;
}

int CEPCheck(char str[]){   //um CEP válido tem exatamente 8 caracteres numéricos;
    //var. chkT serve para registrar se o CEP é válido;
    int i, chkT = 0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] < 48 || str[i] > 57) return 0;
    }
    i = strlen(str);
    if(i == 8) return 1;
}

int dateCheck (data d){     //uma data válida tem... regras demais;

    //checagens mais básicas, do tipo "você colocou dia 32 do mês 0";
    if(d.day > 31 || d.day == 0) return 0;
    if(d.mon > 12 || d.mon == 0) return 0;

    //checando se os dias correspondem aos meses. Ainda bem que tem código pra roubar do LAB2;
    if(d.mon == 1 || d.mon == 3 || d.mon == 5 || d.mon == 7 || d.mon == 8 || d.mon == 10 || d.mon == 12) return 1;

    //esses condicionais gigantes ainda são horrendos;
    else if(d.mon == 4 || d.mon == 6 || d.mon == 9 || d.mon == 11){
        if(d.day == 31) return 0;
        else return 1;
    }
    //fevereiro tem oitenta mil condições próprias por causa da infeliz existência de anos bissextos;
    else if(d.mon == 2){
        if(d.yr % 400 == 0 || (d.yr % 4 == 0 && d.yr % 100 != 0)){
            if(d.day >= 29) return 1;
        }
        else if(d.day >= 28) return 1;
        else return 0;
    }

    //feio.
}