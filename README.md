# cache-simulator
Cache Simulator Project

## Petfera<br>
### Identificador de Expressões Malformadas e Avaliador de Notações Julgadas Adequadas<br>

UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE - UFRN<br>
INSTITUTO METRÓPOLE DIGITAL - IMD<br>
Projeto final da disciplina IMD0030 – LÓGICA DE PROGRAMAÇÃO I <br>
Professor Silvio Sampaio<br>

### Objetivo
O objetivo desse projeto é verificar o domínio do conteúdo de pilhas, filas e deques por parte dos alunos da disciplina. Para isso, essas estruturas serão utilizadas na implementação de um identificador/avaliador de expressões matemáticas simples, o qual analisará expressões passadas, indicando se elas são válidas ou não e divulgando o resultado daquelas que forem consideradas corretas.

### Ações Realizadas
>1) Verificação de presença de caracteres inválidos;
>2) Verificação da formação dos números;
>3) Verificação do balanceamento de parênteses; 
>4) Verificação de validade do formato da expressão infixa.
>5) Conversão de notação (infixa para pós-fixa)
>6) Resultado do cálculo 

### Entrada dos dados
A entrada de dados consistirá de um arquivo de texto simples, o qual conterá diversas linhas. Em cada linha deverá ser colocada uma expressão para análise. O programa continuará a ler o arquivo de entrada até que tenha exaurido todas as suas linhas.

### Estruturas utilizadas
- Pilha 
- Fila
- Estrutura Fundamental: **Lista Simplesmente Encadeada** <br>
(forma de implementação das estruturas)

### Instruções de compilação
Ultilizando o utilitário make:<br>
#### make<br>
> compila e liga todos ficheiros necessário, gera lib e o executável<br>
#### make doc<br>
> gera uma documentação em HTML <br>
#### make clean<br>
> limpa residuos de compilação e o executável<br>
#### make debug<br>
> compila com a flag -g para debug<br>

### **Executando o programa**<br>
local do executável: <b>petfera/bin</b><br>

Parametros para executar:
1. nome do executavel
1. caminho absoluto para o arquivo de expressões

#### EXEMPLO
>./petfera /caminhodoarquivo.txt
>Compile com ```g++ -Wall -std=c++11 -Iinclude src/*```  
>Execute com ```./a.out```

### Autores
[Paulo Henrique](https://github.com/ppaulohh "Paulo Henrique")<br>
[Thiago Silva](https://github.com/silva-thiago "Thiago Silva")<br>
