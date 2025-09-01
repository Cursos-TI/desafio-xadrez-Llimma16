
#include <stdio.h>
 
int main() {
    // Número de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int repetiçoescavalo = 1;  // Quantas vezes simular o movimento do Cavalo em "L"

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

    printf("Movimento do Bispo:\n");
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

    
        printf("\n");

    // Movimento do Cavalo
    // O Cavalo move-se em "L": duas casas em uma direção e depois uma perpendicular
    // Neste exemplo: duas casas para baixo e uma para a esquerda

    printf("Movimento do Cavalo: \n");
    
        while (repetiçoescavalo--)
        {
        for (int i = 0; i < 2; i++){
            printf("Baixo\n");  //Imprime duas casas para "baixo"
         }
         printf("Esquerda\n");  //Imprime uma casas para "Esquerda"
        }

    return 0;

}