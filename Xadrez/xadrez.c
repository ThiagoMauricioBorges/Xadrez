#include <stdio.h>

// movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1);
}

// movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return; 
    printf("Cima, Direita\n");
    moverBispo(casas - 1); 
}

// movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// movimento do cavalos com loops complexos
void moverCavalo() {
    for (int i = 1; i <= 2; i++) { // Loop duas casas para cima
        printf("Cima\n");
    }
    for (int j = 1; j <= 1; j++) { // Loop uma casa para a direita
        printf("Direita\n");
    }
}

// movimento do Bispo com loops aninhados
void moverBispoComLoopsAninhados() {
    for (int vertical = 1; vertical <= 5; vertical++) { // Loop vertical
        for (int horizontal = 1; horizontal <= 5; horizontal++) { // Loop horizontal
            if (vertical == horizontal) { // Movimento na diagonal
                printf("Cima, Direita\n");
                break; // Sai do loop horizontal após imprimir a direção
            }
        }
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5); // Simula 5 casas para a direita

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5); // Simula 5 casas na diagonal

    // Movimento da Rainha com recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(8); // Simula 8 casas para a esquerda

    // Movimento do Cavalo com loops complexos
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(); // Simula o movimento em L

    // Movimento do Bispo com loops aninhados
    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    moverBispoComLoopsAninhados(); // Simula o movimento na diagonal

    return 0;
}