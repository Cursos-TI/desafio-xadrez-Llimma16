#include <stdio.h>

/*
 Função recursiva para movimentar a Torre.
 A cada chamada imprime "Direita" até que o número de casas seja 0.
*/
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva para próxima casa
    }
}

/*
 Função recursiva para movimentar o Bispo.
 Cada movimento do Bispo será em diagonal:
 - Um loop externo representa o movimento vertical ("Cima")
 - Um loop interno representa o movimento horizontal ("Direita")
 Depois, a função chama a si mesma para continuar a diagonal.
*/
void moverBispo(int casas) {
    if (casas > 0) {
        for (int v = 0; v < 1; v++) { // movimento vertical
            printf("Cima\n");
            for (int h = 0; h < 1; h++) { // movimento horizontal
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1); // chamada recursiva para continuar o movimento diagonal
    }
}

/*
 Função recursiva para movimentar a Rainha.
 A cada chamada imprime "Esquerda" até que o número de casas seja 0.
*/
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva para próxima casa
    }
}

/*
 Função para movimentar o Cavalo.
 Movimento em "L": duas casas para cima e uma para a direita.
 Implementado com loops aninhados, múltiplas variáveis e controle de fluxo (continue/break).
*/
void moverCavalo(int repeticoes) {
    for (int r = 0; r < repeticoes; r++) {
        int movimentos = 0;

        for (int i = 0, j = 0; i < 3; i++) {
            if (i < 2) {
                printf("Cima\n"); // duas casas para cima
                movimentos++;
            } else {
                if (j == 0) {
                    printf("Direita\n"); // uma casa para direita
                    movimentos++;
                    j++;
                } else {
                    continue; // evita imprimir movimento extra
                }
            }

            if (movimentos == 3) {
                break; // encerra o "L" após 2x cima + 1x direita
            }
        }

        // separador entre movimentos
        if (r < repeticoes - 1) {
            printf("--- Próximo movimento do Cavalo ---\n");
        }
    }
}

int main() {
    // Variáveis definidas diretamente no código
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int repeticoesCavalo = 2;

    // Movimento da Torre
    printf("Movimentação da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Movimento do Bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // Movimento da Rainha
    printf("Movimentação da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimentação do Cavalo:\n");
    moverCavalo(repeticoesCavalo);

    return 0;
}