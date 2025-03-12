#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, raiz1, raiz2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao e equacao de segundo grau.\n");
    } else {

         delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Nao existe raiz real.\n");
        } else if (delta == 0) {
            raiz1 = -b / (2 * a);
            printf("Raizes identicas: x = %.2f\n", raiz1);
        } else {
            raiz1 = (-b + sqrt(delta)) / (2 * a);
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("Duas raizes reais: x1 = %.2f, x2 = %.2f\n", raiz1, raiz2);
        }
    }

    return 0;
}