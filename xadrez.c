
#include <stdio.h>
 
int main() {
    //Número de cada casa que cada peças se movem
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre
    // A Torre move-se em linha reta horizontal ou vertical
    // Neste exemplo, simula 5 casas para a direita usando "for"
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
         printf("Direita\n");
        }

    printf("\n");

    // Movimento do Bispo
    // O Bispo move-se na diagonal
    // Simula 5 casas para cima e à direita usando "while"
    printf("Movimentação da Bispo:\n");
    int contBispo = 0;
        while (contBispo < casasBispo) {
            printf("Cima, Direita\n");
            contBispo++;
        }

        printf("\n");

    // Movimento da Rainha
    // A Rainha move-se em todas as direções
    // Neste exemplo, simula 8 casas para a esquerda usando "do-while"
    printf("Movimentação da Rainha: \n");
    int contRainha = 0;
    do {
        printf("Esquerda\n");
        contRainha++;
    } while (contRainha < casasRainha);

    return 0;

}