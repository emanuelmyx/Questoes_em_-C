#include <stdio.h>

int main()
{
    int matriz[3][3] = {
        {5, -8, 10},
        {1, 2, 15},
        {25, 10, 7}
    };

    int menor = 0;

    for (int i = 0; i < 3; i++) {
     for (int j = 0; j < 3; j++){
        if( matriz[i][j] < menor){
            menor = matriz[i][j];
        }
    }
    }

    printf("O menor valor da matriz e: %i", menor);

    return 0;
}
