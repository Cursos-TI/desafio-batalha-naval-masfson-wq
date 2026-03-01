#include <stdio.h> // Biblioteca padrão para usar comandos de entrada e saída (como o printf)

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    int tabuleiro[10][10];               // Cria uma matriz (grade) de 10x10 para o jogo
    int navioHorizontal[3] = {3, 3, 3};  // Vetor que representa um navio de tamanho 3
    int navioVertical[3] = {3, 3, 3};    // Vetor que representa outro navio de tamanho 3
    int tamanhoNavio = 3;                // Variável auxiliar para controlar o tamanho nos loops

    // --- 1. INICIALIZAÇÃO (PREPARANDO O TERRENO) ---
    // Usamos dois loops 'for' para passar por cada uma das 100 casas do tabuleiro
    for(int i = 0; i < 10; i++) {        // Percorre as linhas (i)
        for(int j = 0; j < 10; j++) {    // Percorre as colunas (j)
            tabuleiro[i][j] = 0;         // Coloca 0 (água) em todas as posições
        }
    }

    // --- 2. POSICIONAMENTO DOS NAVIOS (CARIMBANDO A MATRIZ) ---
    
    // Posicionando o Navio Horizontal na Linha 2, Colunas 1, 2 e 3
    // Atribuímos o valor do vetor 'navioHorizontal' diretamente nas coordenadas
    tabuleiro[2][1] = navioHorizontal[0];
    tabuleiro[2][2] = navioHorizontal[1];
    tabuleiro[2][3] = navioHorizontal[2];

    // Posicionando o Navio Vertical na Coluna 5, Linhas 4, 5 e 6
    // Aqui a coluna permanece a mesma (5), mas a linha muda (4, 5, 6)
    tabuleiro[4][5] = navioVertical[0];
    tabuleiro[5][5] = navioVertical[1];
    tabuleiro[6][5] = navioVertical[2];

    // --- 3. EXIBIÇÃO DO RESULTADO ---
    printf("Tabuleiro 10 x 10 criado com sucesso!\n");
    printf("\n--- TABULEIRO DE BATALHA NAVAL ---\n\n");

    // Loop para imprimir a matriz no console de forma organizada
    for(int i = 0; i < 10; i++) {        // Para cada linha...
        for(int j = 0; j < 10; j++) {    // Imprima cada coluna daquela linha...
            printf("%d ", tabuleiro[i][j]); // O espaço " " serve para separar os números
        }
        printf("\n"); // Quando terminar uma linha, pula para a linha de baixo no terminal
    }

    return 0; // Indica que o programa terminou sem erros
}