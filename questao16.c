#include <stdio.h>


int main(){

float salario, prestacao;

printf("Digite o salario: ");    
scanf("%f", &salario);

printf("Digite a prestacao: ");    
scanf("%f", &prestacao);

if ( prestacao >= 0.20) 
{
    printf("Empretsimo nao concedido \n");
}
 else{
    printf("Empretsimo concedido");
 }

return 0;    
}