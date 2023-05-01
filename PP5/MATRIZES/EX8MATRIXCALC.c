#include <stdio.h>
#include <stdlib.h>

char GUI();                      //função interface;
void matrixPrint(float mat[2][2]);    //imprime matrizes 2x2;

int main(){

    //var. m1 e m2 são as matrizes, c é uma constante que pode ser adicionada a elas;
    float m1[2][2], m2[2][2], c;
    int i, j;
    char MODE;

    printf("\t--CALCULADORA DE MATRIZES--\n\n");

    printf("Preencha sua primeira matriz (2x2, quatro valores):\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%f", &m1[i][j]);
        }
    }
    fflush(stdin);
    printf("\n");
    printf("Preencha sua segunda matriz (2x2, quatro valores):\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%f", &m2[i][j]);
        }
    }
    printf("\n");

    do{
        MODE = GUI();
        switch(MODE){               //operações, de acordo com as opções na função GUI();
            case 'a':
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        m2[i][j] += m1[i][j];
                    }
                }
                printf("\nSoma concluida.\n");
                break;

            case 'b':
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        m2[i][j] -= m1[i][j];
                    }
                }
                printf("\nSubtracao concluida.\n");
                break;

            case 'c':
                printf("\nInsira sua constante: ");
                scanf("%f", &c);
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        m2[i][j] += c;
                        m1[i][j] += c;
                    }
                }
                printf("\nSoma concluida.\n");
                break;

            case 'd':
                printf("Matriz 1:\n\n");
                matrixPrint(m1);
                printf("\nMatriz 2:\n\n");
                matrixPrint(m2);
                printf("\n");
                break;

            case 'e':
                printf("Encerrando...\n\n");
                break;
        }
    }while(MODE != 'e');

    system("pause");
    return 0;
    
}

char GUI(){              //a função retorna o código requisitado no scanf.
    
    //var;
    char MODE;

    printf("\n\tSelecione qual operacao deseja realizar com suas matrizes.\n\n");
    printf("(a) somar as duas matrizes, armazenando a soma na matriz 2.\n");
    printf("(b) subtrair a primeira matriz da segunda, armazenando a diferenca na matriz 2.\n");
    printf("(c) adicionar uma constante as duas matrizes.\n");
    printf("(d) imprimir as matrizes.\n");
    printf("(e) fechar o programa.\n\n");
    printf("Comando?\n>> ");
    fflush(stdin);
    scanf("%c", &MODE);

    return MODE;
}

void matrixPrint(float mat[2][2]){

    //var;
    int i, j;
    for(i = 0; i < 2; i++){
        printf("\t");
        for(j = 0; j < 2; j++){
            printf("%7.3f", mat[i][j]);
        }
        printf("\n");
    }
}