#include <stdio.h>

// Desafio Batalha Naval - MateCheck

void exibirTabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[10][10] = {0};

    // Posicionando dois navios: um verticalmente e outro horizontalmente
    tabuleiro[1][2] = 3; // Vertical
    tabuleiro[2][2] = 3;
    tabuleiro[3][2] = 3;

    tabuleiro[5][4] = 3; // Horizontal
    tabuleiro[5][5] = 3;
    tabuleiro[5][6] = 3;

    printf("Tabuleiro com dois navios posicionados (nível Novato):\n");
    exibirTabuleiro(tabuleiro);
    printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Adicionando dois navios na diagonal
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[9][9] = 3;

    tabuleiro[7][1] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[9][3] = 3;

    printf("Tabuleiro com quatro navios (nível Aventureiro):\n");
    exibirTabuleiro(tabuleiro);
    printf("\n");

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Exemplo de habilidade em cone
    int cone[5][5] = { 
        {0, 0, 1, 0, 0}, 
        {0, 1, 1, 1, 0}, 
        {1, 1, 1, 1, 1}, 
        {0, 0, 0, 0, 0}, 
        {0, 0, 0, 0, 0} 
    };

    printf("Habilidade especial - Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Exemplo de habilidade em octaedro
    int octaedro[5][5] = { 
        {0, 0, 1, 0, 0}, 
        {0, 1, 1, 1, 0}, 
        {1, 1, 1, 1, 1}, 
        {0, 1, 1, 1, 0}, 
        {0, 0, 1, 0, 0} 
    };

    printf("Habilidade especial - Octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Exemplo de habilidade em cruz
    int cruz[5][5] = { 
        {0, 0, 1, 0, 0}, 
        {1, 1, 1, 1, 1}, 
        {0, 0, 1, 0, 0}, 
        {0, 0, 0, 0, 0}, 
        {0, 0, 0, 0, 0} 
    };

    printf("Habilidade especial - Cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
