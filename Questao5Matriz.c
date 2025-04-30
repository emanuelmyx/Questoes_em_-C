#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i != j && i + j != 4) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\nA soma dos elementos que não pertencem às diagonais é: %d\n", soma);

    return 0;
}