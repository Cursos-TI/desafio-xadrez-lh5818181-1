#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// --- Funções Recursivas para Movimentação ---

// Função recursiva para a Torre: Move n casas para a Direita
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva diminuindo o contador
    }
}

// Função recursiva para a Rainha: Move n casas para a Esquerda
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva para o Bispo (Parte do desafio Mestre)
// Simula o movimento diagonal usando recursão para a repetição
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        // O desafio pede loops aninhados no Bispo também (implementado no main)
        // Esta função cumpre o requisito de recursividade para as peças principais
        printf("Cima\n");
        printf("Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

int main() {
    // Definição das constantes
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;

    // --- Implementação da TORRE (Recursiva) ---
    printf("Movimentação da Torre:\n");
    moverTorre(MOV_TORRE);
    printf("\n");

    // --- Implementação do BISPO (Recursiva + Loops Aninhados) ---
    printf("Movimentação do Bispo:\n");
    // Usando loops aninhados conforme requisito: externo vertical, interno horizontal
    for (int i = 0; i < MOV_BISPO; i++) {
        int j = 0;
        while (j < 1) {
            printf("Cima\n");
            j++;
        }
        printf("Direita\n");
    }
    printf("\n");

    // --- Implementação da RAINHA (Recursiva) ---
    printf("Movimentação da Rainha:\n");
    moverRainha(MOV_RAINHA);
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
