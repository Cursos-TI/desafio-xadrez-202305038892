#include <stdio.h>

// Definição das constantes para a movimentação das peças
#define MOVIMENTO_BISPO 5  // O Bispo se move 5 casas na diagonal superior direita
#define MOVIMENTO_TORRE 5  // A Torre se move 5 casas para a direita
#define MOVIMENTO_RAINHA 8 // A Rainha se move 8 casas para a esquerda

// Função para movimentação do Bispo
void moverBispo() {
    int i;
    // O Bispo se move na diagonal superior direita
    for (i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Diagonal Superior Direita\n");
    }
}

// Função para movimentação da Torre
void moverTorre() {
    int i;
    // A Torre se move 5 casas para a direita
    for (i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
}

// Função para movimentação da Rainha
void moverRainha() {
    int i;
    // A Rainha se move 8 casas para a esquerda
    for (i = 0; i < MOVIMENTO_RAINHA; i++) {
        printf("Esquerda\n");
    }
}

int main() {
    // Variáveis para controlar qual peça será movida
    int escolha;

    // Mensagem de introdução ao programa
    printf("Escolha a peça que deseja mover:\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("Digite o número da peça (1-3): ");
    scanf("%d", &escolha);

    // Estrutura condicional para mover a peça escolhida
    switch (escolha) {
        case 1:
            printf("\nMovimentando o Bispo...\n");
            moverBispo();
            break;
        case 2:
            printf("\nMovimentando a Torre...\n");
            moverTorre();
            break;
        case 3:
            printf("\nMovimentando a Rainha...\n");
            moverRainha();
            break;
        default:
            printf("Escolha inválida!\n");
            break;
    }

    return 0;
}
