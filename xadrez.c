#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// int main() {
//     // Nível Novato - Movimentação das Peças
//     // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

//     const int TORRE = 5, BISPO = 5, RAINHA = 8;

//     printf("--- Simulação de Movimentação de Xadrez ---\n\n");

//     // Implementação de Movimentação do Bispo
//     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

//     printf("\nMovimento Bispo\n");

//     int b = 1;
//     while (b <= BISPO)
//     {
//         printf("Cima, Direita\n");
//         b++;
//     }
    
//     // Implementação de Movimentação da Torre
//     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

//     // printf("\nMovimento Torre");

//     // for (int t = 0; t <= TORRE; t++)
//     // {
//     //     printf("Direita\n");
//     // }

//     // Implementação de Movimentação da Rainha
//     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

//     printf("\nMovimento Rainha");
//     int r = 0;
//     do
//     {
//         printf("Esquerda\n");
//         r++;
//     } while (r <= RAINHA);

//     // Nível Aventureiro - Movimentação do Cavalo
//     // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
//     // Um loop pode representar a movimentação horizontal e outro vertical.

//     printf("\nMovimento Cavalo\n");
//     int movimentoCavalo = 1;

//     while (movimentoCavalo > 0) {
//         for (int i = 0; i < 2; i++) {
//             printf("baixo\n");

//         }
//         printf("esquerda\n");
//         movimentoCavalo--;
//     }
    
    
    

//     // Nível Mestre - Funções Recursivas e Loops Aninhados
//     // Sugestão: Substitua as movimentações das peças por funções recursivas.
//     // Exemplo: Crie uma função recursiva para o movimento do Bispo.

//     // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
//     // Inclua o uso de continue e break dentro dos loops.

// CODIGO COMENTADO PARA EVITAR ERROS DE COMPILAÇÃO, DESAFIO MESTRE 
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }

}
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

int main() {

    const int TORRE = 5, BISPO = 5, RAINHA = 8;

    printf("\nMovimento Rainha\n");
    moverRainha(RAINHA);

    printf("\nMovimento Torre\n");
    moverTorre(TORRE);
    
    printf("movimento Bispo\n");
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) { // Loop interno (Horizontal)
           moverBispo(BISPO); 
    }

    printf("\nMovimento cavalo:\n");
        for (int i = 0, j = 0; i < 2; i++) {
            if (i < 2) {
                printf("Cima\n");
            }
   
            // Quando atingir as duas casas para cima, executa o movimento lateral
            if (i == 1) {
                printf("Direita\n");
                j++; // Sai do loop while
                break; // Interrompe o loop interno
            }
            continue; // Continua para a próxima iteração do vertical
        }
    
            

        


    return 0;
}
    
}



