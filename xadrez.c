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

    // --- Implementação do CAVALO ---

    // O Cavalo se move em "L": 2 casas para Baixo e 1 para a Esquerda.
    // Utilizei loops aninhados para representar essa composição de movimento.
    
    printf("Movimentação do Cavalo:\n");

    // Loop externo (FOR): Gerencia a parte vertical (2 casas para baixo)
    for (int vertical = 1; vertical <= 1; vertical++) {
        
        // Loop interno (WHILE): Executa as casas para baixo
        int baixo = 1;
        while (baixo <= 2) {
            printf("Baixo\n");
            baixo++;
        }
        
        // Após as duas casas para baixo, completa o "L" movendo para a esquerda
        int esquerda = 1;
        while (esquerda <= 1) {
            printf("Esquerda\n");
            esquerda++;
        }
    }

    return 0;
}
