#include <stdio.h>

int main()
{
    int vetor[6];
    for (int i = 0; i < 6; i++){
        printf("Digite o %d numero: ", i +1);
        scanf("%d", &vetor[i]);
    }
    printf("Os numeros digitados sao: ");
    for (int i = 0; i < 6; i++)
    {     
        printf("%d", vetor[i]);
    }
    
    return 0;
}
