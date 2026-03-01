#include <stdio.h>

int main() {

    int tabuleiro[10][10];
    //Delclaração da matriz para o tabuleiro do jogo
    // 0 - água

    // incializando todas as posições do tabuleiro com 0 usando um loops


    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("Tabulerio 10 x 10 criado com sucesso!\n");







    return 0;
}