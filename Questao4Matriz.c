#include <stdio.h>

int main() {
    int matriz[4][4];
    int contador = 0;

    printf("Digite os valores da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }
   printf("A matriz possui %d valores maiores que 10.\n", contador);

    return 0;
}