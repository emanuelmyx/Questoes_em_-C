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

<h3>3) Quais s ̃ao os dois tipos de coment ́arios que podem ser escritos nos programas C?</h3>
   <p>Comentário de uma linha que começa com "//", depois disso tudo em sequência é ignorado pelo compilador. E o outro, é comentário de múltiplas linhas que começam com "/*" e terminam com "*/"</p>
