#include <stdio.h>

int main(void){

float temp, fahrenheit;

printf("Digite a temperatura em Celsius: ");
scanf("%f", &temp);

fahrenheit = temp * (9.0/5.0) + 32.0;

printf("%.2fF \n", fahrenheit);

return 0;    
}