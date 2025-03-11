#include <stdio.h>

int main(void){

float num1, num2, num3, num4;

printf("Digite o primeiro numero: ");
scanf("%f", &num1);

printf("Digite o segundo numero: ");
scanf("%f", &num2);

printf("Digite o  terceiro numero: ");
scanf("%f", &num3);

printf("Digite o  quarto numero: ");
scanf("%f", &num4);


printf("Media: %.2f\n", (num1 + num2 + num3 + num4)/4);


return 0;    
}