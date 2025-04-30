#include <stdio.h>

int main()
{
    int matriz[4][4] = {
        {5, -8, 10, 9},
        {1, 2, 15, 8},
        {25, 10, 7, 5},
        {30, 24, 7, 6}
    };

    int maior = 0;

    for (int i = 0; i < 4; i++) {
     for (int j = 0; j < 4; j++){
        if( matriz[i][j] > maior){
            maior = matriz[i][j];
        }
    }
    }

    printf("O menor valor da matriz e: %i", maior);

    return 0;
}
