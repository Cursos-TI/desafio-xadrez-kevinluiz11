#include <stdio.h>

// Definição de constantes para o número de casas que cada peça pode se mover
#define TORRE_MOV 5
#define BISPO_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV_CIMA 2
#define CAVALO_MOV_DIREITA 1

// Função recursiva para movimentação da Torre
void moverTorre(int movimentos) {
    if (movimentos <= 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int movimentos) {
    if (movimentos <= 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

// Função recursiva para movimentação do Bispo com loops aninhados
void moverBispo(int movimentos, int passo) {
    if (movimentos <= 0) return;
    for (int i = 0; i < passo; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(movimentos - 1, passo);
}

int main() {
    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    moverTorre(TORRE_MOV);
    printf("\n");

    // Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(BISPO_MOV, 1);
    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(RAINHA_MOV);
    printf("\n");

    // Movimentação do Cavalo com loops aninhados e controle de fluxo
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < CAVALO_MOV_CIMA; i++) {
        printf("Cima\n");
        if (i == CAVALO_MOV_CIMA - 1) {
            for (int j = 0; j < CAVALO_MOV_DIREITA; j++) {
                printf("Direita\n");
            }
        }
    }

    return 0;
}
