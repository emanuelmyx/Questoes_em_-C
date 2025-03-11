# Questoes_em_-C
Resolução da revisão de algoritmos e lógica de programação, utilizando linguagem C.

1) Descreva as etapas da compilação.
   
  etapa 1 - Entrar na pasta pelo terminal com o comando: cd 'nome_da_pasta'.
  etapa 2 - Após entrar na pasta, digitar: gcc nome_do_arquivo.c.
  etapa 3 - logo em seguida será criado um executável com o nome "a.exe".
  etapa 4 - Digitar o nome do executável no terminal e dar um "Tab".
  etapa 5 - Você pode trocar o nome do executável com o comando "ren", desta forma: ren nome_do_arq_ant.c nome_do_arq_novo.c.

Assim você conseguirá compilar seu código e alterar o nome do arquivo executável se for de sua preferência.

2) Qual o efeito dos seguintes comandos de compilação?
   
   a) gcc prog.c -o prog
   - Compila o arquivo fonte prog.c e gera um executável com o nome prog.exe.

   b) gcc prog.c
   - Compila o arquivo fonte prog.c e gera um executável com o nome padrão a.exe.

   c) gcc prog.c -o aux.c entsai.c
   -
   
   d) gcc progA.c progB.o
   -Compila progA.c e linka com progB.o, gerando a.exe.

3) Quais s ̃ao os dois tipos de coment ́arios que podem ser escritos nos programas C?
   Comentário de uma linha que começa com "//", depois disso tudo em sequência é ignorado pelo compilador. O outro, é comentário de múltiplas linhas que começa com "/*" e termina com "*/"
