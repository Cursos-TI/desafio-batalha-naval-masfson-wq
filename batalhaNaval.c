#include <stdio.h>

int main() {

        int tabuleiro[10][10];
        int navioHorizontal[3] = {3, 3, 3};
        int navioVertical[3] = {3, 3, 3};

    //Inicializando o tabuleiro com 0 (água)    
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    
        //Navio Horizontal
        tabuleiro[2][1] = navioHorizontal[0];

        tabuleiro[2][2] = navioHorizontal[1];

        tabuleiro[2][3] = navioHorizontal[2];

        //Navio Vertical
        tabuleiro[4][5] = navioVertical[0];

        tabuleiro[5][5] = navioVertical[1];

        tabuleiro[6][5] = navioVertical[2];


    printf("Tabulerio 10 x 10 criado com sucesso!\n");







    return 0;
}