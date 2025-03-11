#include <stdio.h>

int main(void){

int antecessor, num, sucessor;  

printf("Digite seu numero: ");
scanf("%i", &num);

antecessor =  num - 1;
sucessor = num + 1;

printf("%i e", antecessor);
printf(" %i", sucessor);


return 0;
}