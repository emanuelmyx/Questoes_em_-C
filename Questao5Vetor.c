#include <stdio.h>

int main() {

    float numeros[10];
    int negativos = 0;
    float somaPositivos = 0.0;

    printf("Digite 10 numeros reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numeros[i] < 0) {
            negativos++;
        } else if (numeros[i] > 0) {
            somaPositivos += numeros[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %f\n", somaPositivos);

    return 0;
}