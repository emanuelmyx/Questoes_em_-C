# Questoes_em_-C
<h2>Resolução da revisão de algoritmos e lógica de programação, com conhecimentos em linguagem C.</h2>

<h3>1) Descreva as etapas da compilação.</h3>

<ul>
  <li>etapa 1 - Entrar na pasta pelo terminal com o comando: cd 'nome_da_pasta'.</li>
  <li>etapa 2 - Após entrar na pasta, digitar: gcc nome_do_arquivo.c.</li>
  <li>etapa 3 - logo em seguida será criado um executável com o nome "a.exe".</li>
  <li>etapa 4 - Digitar o nome do executável no terminal e dar um "Tab".</li>
  <li>etapa 5 - Você pode trocar o nome do executável com o comando "ren", desta forma: ren nome_do_arq_ant.c nome_do_arq_novo.c.</li>
</ul>
Assim você conseguirá compilar seu código e alterar o nome do arquivo executável se for de sua preferência.

<h3>2) Qual o efeito dos seguintes comandos de compilação?</h3>

   <b> a) gcc prog.c -o prog </b>
   <p>- Compila o arquivo fonte prog.c e gera um executável com o nome prog.exe.</p>

   <b> b) gcc prog.c </b>
   <p>- Compila o arquivo fonte prog.c e gera um executável com o nome padrão a.exe.</p>

   <b> c) gcc prog.c -o aux.c entsai.c </b>
   <p>-Há erro no comando, ele não pode ser executado.</p> 
   
   <b> d) gcc progA.c progB.o </b>
   <p>-Compila progA.c e linka com progB.o, gerando a.exe.</p>

<h3>3) Quais são os dois tipos de coment ́arios que podem ser escritos nos programas C?</h3>
   <p>Comentário de uma linha que começa com "//", depois disso tudo em sequência é ignorado pelo compilador. E o outro, é o comentário de múltiplas linhas que começam com "/*" e terminam com "*/"</p>

   <h3>18) Identifique e corrija os erros em cada uma das seguintes instruções:</h3>
   
   <b> a) printf("O valor  ́e %d", &numero); </b>
   <p> -printf("O valor  ́e %d", numero); </p>

   <b> b) scanf("%d%d", &numero1, numero2); </b>
   <p> -scanf("%d%d", &numero1, &numero2); </p>

   <b> c) printf("A soma  ́e %d \n,"x+y); </b>
   <p> -printf("A soma  ́e %d \n", x+y); </p> 
   
   <b> d) scanf("d", valor); </b>
   <p> -scanf("d", &valor); </p>
   
<h3>19) Que valores serão impressos pelo o programa a seguir?</h3>

#include <stdio.h>
  int main (void) {
  
  int a = 4;
  
  double b = 5.7;
  
  int c, d;
  

printf("%d %f\n", a, b);
c = 3;
d = a + 2;

printf("%d %d\n", c, d);
a = 2;
b = c + d;

printf("%d %f\n", a, b);

printf("%d %d\n", c, d);

return 0;
}


<p> -Os valores que serão exibidos: 
<b>4 5.700000
3 6       
2 9.000000
3 6</b>.  </p>

<h3>20) O que será impresso pelo o programa a seguir, se o usuário digitar o número 6? E o número -6?</h3>

#include <stdio.h>
  
  int main (void){
  
  int num;

printf("Digite um numero: ");

scanf("%d", &num);

if (num > 0) {
printf ("num. positivo\n");

}

if (num >= 10){
printf ("num. maior ou igual a 10\n");

} 

else {
printf ("num. menor que 10\n");

}

return 0;

}

<p> -Se o usuário digitar o número "6" o resultado vai ser: <b>num. positivo e num. menor que 10</b>. Agora, se for digitado "-6" aparecerá: <b>num. menor que 10</b>.</p>
