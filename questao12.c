#include <stdio.h>

int main(void){

float A, raio, pi = 3.14; 

printf("Digite o valor do raio: ");
scanf("%f", &raio);

A = pi * (raio * raio);

printf("%.2f", A);

return 0;    
}