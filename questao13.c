#include <stdio.h>
#include <math.h>

int main(void){

float hip, a, b; 

printf("Digite o primeiro valor: ");
scanf("%f", &a);

printf("Digite o segundo cateto: ");
scanf("%f", &b);

hip = sqrt(pow(a,2) + pow(b,2));

printf("%.2f", hip);

return 0;    
}