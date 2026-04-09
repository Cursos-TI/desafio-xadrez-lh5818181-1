#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    // Definição das constantes de movimento para cada peça

    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    // --- Implementação da TORRE ---

    // Movimento: 5 casas para a Direita.
    // Estrutura escolhida: FOR (ideal quando o número de repetições é fixo e conhecido).

    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n"); 

    // --- Implementação do BISPO ---

    // Movimento: 5 casas na Diagonal (Cima e Direita).
    // Estrutura escolhida: WHILE (executa enquanto a condição for verdadeira).

    printf("Movimentação do Bispo:\n");
    int b = 1;
    while (b <= MOVIMENTO_BISPO) {
        printf("Cima Direita\n");
        b++; 
    }
    printf("\n");

    // --- Implementação da RAINHA ---

    // Movimento: 8 casas para a Esquerda.
    // Estrutura escolhida: DO-WHILE (garante que o movimento ocorra pelo menos uma vez).

    printf("Movimentação da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= MOVIMENTO_RAINHA);
    printf("\n");

    return 0;
}
