#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;

    printf("Digite 8 valores inteiros:\n");
    for (int i = 0; i < 8; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite duas posicoes (0 a 7) para somar:\n");
    printf("Posicao X: ");
    scanf("%d", &x);
    printf("Posicao Y: ");
    scanf("%d", &y);

    if (x < 0 || x >= 8 || y < 0 || y >= 8) {
        printf("Erro: Posicoes invalidas! Devem ser entre 0 e 7.\n");
        return 1;
    }

    printf("\nSoma dos valores nas posicoes %d e %d: %d\n", x, y, vetor[x] + vetor[y]);

    return 0;
}