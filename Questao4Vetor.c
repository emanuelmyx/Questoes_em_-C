#include <stdio.h>

int main() {
    int vetor[10];
    int contadorPares = 0;
    
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            contadorPares++;
        }
    }

    printf("Número de valores pares no vetor: %d\n", contadorPares);

    return 0;
}