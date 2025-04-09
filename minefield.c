#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
int main() {
    setlocale(LC_ALL,"portuguese");
    //DECLARAÇÃO DE VARIÁVEIS
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
    printf("\n\nCOMO JOGAR: Você terá 5 tentativas, se você não acertar uma bomba (número 0), você ganha +1 ponto. Ao atingir 5 pontos, você ganha automaticamente. Se você acertar uma bomba (número 1), você perde!\n\nBOA SORTE!!!\n\n");
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
        //EXIBINDO AS ÚLTIMAS JOGADAS
        if(pontuacao>=1) {
            printf("\nSuas últimas jogadas:\n\n");
            for(int i=0;i<j;i++) {
                printf("%dª Jogada: Linha: %d Coluna: %d\n",i+1,palpite_l[i],palpite_c[i]);
            }
        }
        //ENTRADA DE DADOS
        printf("\nDigite uma linha: ");
        scanf("%d",&palpite_l[j]);
        printf("\nDigite uma coluna: ");
        scanf("%d",&palpite_c[k]);
        if(campo_minado[palpite_l[j]][palpite_c[k]]==0) { //CONDIÇÃO DE ACERTO
            system("cls");
            printf("Você está indo bem! Ganhou +1 ponto!\n\n");
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
        } else { //CONDIÇÃO DE ERRO
            system("cls");
            printf("Você acertou uma bomba! Sua pontuação total foi %d!\n\n", pontuacao);
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
    //CONDIÇÃO DE VITÓRIA
    if(pontuacao==5) {
        system("cls");
        printf("Parabéns! Você ganhou!!! Sua pontuação foi máxima!");
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
