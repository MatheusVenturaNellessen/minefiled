#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
int main() {
    setlocale(LC_ALL,"portuguese");
    //DECLARA��O DE VARI�VEIS
    int campo_minado[10][10];
    int l, c, j=0, k=0, pontuacao=0, palpite_l[5], palpite_c[5];
    //SORTEANDO AS BOMBAS
    srand(time(NULL));
    for(l=0;l<10;l++) {
        for(c=0;c<10;c++) {
            campo_minado[l][c]=rand()%2;
        }
    }
    printf("Bem vindo ao Campo Minado!");
    Sleep(1000);
    printf("\n\nCOMO JOGAR: Voc� ter� 5 tentativas, se voc� n�o acertar uma bomba (n�mero 0), voc� ganha +1 ponto. Ao atingir 5 pontos, voc� ganha automaticamente. Se voc� acertar uma bomba (n�mero 1), voc� perde!\n\nBOA SORTE!!!\n\n");
    Sleep(2000);
    //EXIBINDO A MATRIZ
    for(l=0;l<10;l++) {
        for(c=0;c<10;c++) {
            printf("?   ");
            Sleep(20);
        }
        printf("\n");
    }
    for(int i=0;i<5;i++) {
        //EXIBINDO AS �LTIMAS JOGADAS
        if(pontuacao>=1) {
            printf("\nSuas �ltimas jogadas:\n\n");
            for(int i=0;i<j;i++) {
                printf("%d� Jogada: Linha: %d Coluna: %d\n",i+1,palpite_l[i],palpite_c[i]);
            }
        }
        //ENTRADA DE DADOS
        printf("\nDigite uma linha: ");
        scanf("%d",&palpite_l[j]);
        printf("\nDigite uma coluna: ");
        scanf("%d",&palpite_c[k]);
        if(campo_minado[palpite_l[j]][palpite_c[k]]==0) { //CONDI��O DE ACERTO
            system("cls");
            printf("Voc� est� indo bem! Ganhou +1 ponto!\n\n");
            pontuacao++;
            for(l=0;l<10;l++) {
                for(c=0;c<10;c++) {
                    if(l==palpite_l[j]&&c==palpite_c[k]) {
                        printf("%d   ",campo_minado[l][c]);
                        Sleep(20);
                    } else {
                        printf("?   ");
                        Sleep(20);
                    }
                }
                printf("\n");
            }
            j++;
            k++;
        } else { //CONDI��O DE ERRO
            system("cls");
            printf("Voc� acertou uma bomba! Sua pontua��o total foi %d!\n\n", pontuacao);
            for(l=0;l<10;l++) {
                for(c=0;c<10;c++) {
                    printf("%d   ",campo_minado[l][c]);
                }
                printf("\n");
            }
            Sleep(1000);
            printf("\nOBRIGADO POR JOGAR!\n");
            break;
        }
    }
    //CONDI��O DE VIT�RIA
    if(pontuacao==5) {
        system("cls");
        printf("Parab�ns! Voc� ganhou!!! Sua pontua��o foi m�xima!");
        for(l=0;l<10;l++) {
            for(c=0;c<10;c++) {
                printf("%d   ",campo_minado[l][c]);
            }
            printf("\n");
        }
        Sleep(1000);
        printf("\nOBRIGADO POR JOGAR!\n");
    }
    return 0;
}
