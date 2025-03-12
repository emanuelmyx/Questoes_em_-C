#include <stdio.h>

int main(void){

float num1, num2;

scanf("%f", &num1);
scanf("%f", &num2);

if(num1 > num2 ){
    printf("o maior e: %.1f", num1);
}

if (num2 > num1)
{
    printf("o maior e: %.1f", num2);
}

if ( num1 == num2 && num2 == num1){
    printf(" os numeros sao iguais!");
}

return 0;    
}