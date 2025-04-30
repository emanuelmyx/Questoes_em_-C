#include <stdio.h>

int main()
{  
   int vetor[5];
   int soma = 0;
   int media;

   for (int i = 0; i < 5; i++){
    printf("Digite o %d numero: ", i+1);
    scanf("%d", &vetor[i]);
    soma += vetor[i];
   }
   
   printf("Os numeros digitados sao: ");
   for (int i = 0; i < 5; i++){
    printf("%d", vetor[i]);
   }

   media = soma/5;

   printf("\nA media dos numeros e: %d ", media);
   
   
   
    return 0;
}
