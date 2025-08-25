# Strings

Um vetor de caracterer precisa tem n caracteres -1(menos), por que um vetor tem ser reservado para "/0", o que indica o fim de uma string.

## Entrada e saída
- scanf ()
  - Limitações: sintaxe rebuscada;
  - Especificador de formato: %s;
  - Sinxtaze geral:
    ``scanf("¨%s", <str>);``

  - Sintaxe aprimorada:
  ``scanf("¨%<tam.-1>[^\n]s", <str>);``

O scanf padrão ler o quanto digite de string (estourando a variável) e também quando digite o espaço para de ler.

O scanf aprimorado limita a quantidade de string e ler após o espaço.

- printf();
  - Especificação: %s


# Strings: outras funções de entrada e saída
- gets()
  - Limitações: estouro do limite do vetor;
  - Sintaxe:
    ``gets(<string>);``

- fgets()
  - Último caractere sempre fica reservado ao '\0'
  - Entrada padrão: stdin;
  - Sintaxe:
  ``fgets(<string>, <tam>, stdin);``

- puts(
   - Imprime uma string diretamente na tela;
   - Não admite variáveis de outros tipos
   - Sintaxe:
    ``puts(<string>);``

  - fflush(stdin): chamar sempre depois de uma entrada. -> Depois de uma leitura de dados ao digitar valores vou ocorrer lixo na memória que pode atrapalhar a leitura seguinte.