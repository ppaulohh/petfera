## Pet Fera<br>
### Cadastro de Animais de um Pet Shop<br>
UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE - UFRN<br>
INSTITUTO METRÓPOLE DIGITAL - IMD<br>
Projeto final da disciplina IMD0030 – LÓGICA DE PROGRAMAÇÃO I <br>
Professor Silvio Sampaio<br>

### Objetivo
O objetivo deste trabalho é implementar um programa de cadastro de animais para a loja de animais silvestres Pet Fera.

### Um pouco sobre o funcionamento da Pet Fera
Pet Fera é uma loja que comercializa animais silvestres com os devidos cuidados e autorizações do Instituto Brasileiro do Meio Ambiente e dos Recursos Naturais Renováveis (IBAMA). Para garantir a saúde e o bem-estar dos animais sob sua tutela, a Pet Fera mantém uma equipe de profissionais capacitados, incluindo um grupo de veterinários e tratadores. Assim, para cada animal são atribuídos um veterinário e um tratador que juntos garantirão a saúde e o bem-estar dele.

### Atividades Comuns na Pet Fera
>1) Cadastro de um novo animal a ser comercializado;
>2) Remoção de um animal da lista após a sua comercialização;
>3) Alteração dos dados cadastrais de um animal;
>4) Consulta aos dados cadastrais de um determinado animal ou por uma classe de animais;
>5) Consulta de animais sob a responsabilidade de um determinado Veterinário ou Tratador;
>6) Todas as atividades relacionadas ao cadastro de Veterinários e Tratadores.

### Características dos Grupos Animais
Para a Biologia, o Reino Animal costuma ser definido segundo características comuns a todos os animais: organismos eucariotos, multicelulares, heterotróficos e que obtêm seus alimentos por ingestão de nutrientes do meio. Assim, a definição de animal assume um caráter genérico e inclui as características compartilhadas por todos os animais, que inclusive podem ser utilizados para classifica-los.

### Classificação comumente aceita e que é utilizada pela Pet Fera
- Anfíbios (Classe Amphibia)
Cerca de 3.000 espécies de anfíbios são encontradas no mundo hoje. São os sapos, rãs, cobras-cegas, pererecas e salamandras
- Répteis (Classe Reptilia)
Os répteis compreendem atualmente cerca de 6.000 espécies. Na Terra, já habitaram formas gigantescas destes animais, os dinossauros. Entre os répteis encontramos os crocodilos, jacarés, cobras, tartarugas, cágados, entre outros.
- Aves (Classe Aves)
As aves compreendem cerca de 8.700 espécies, distribuídas por todo mundo
- Mamíferos (Classe Mammalia)
Os mamíferos apresentam cerca de 4.000 espécies, que ocupam diversos tipos de hábitat na Terra, sendo encontrados nos oceanos, ao longo dos litorais, em lagos e rios, sobre a terra, em árvores e até mesmo no ar.

### Parte I
A tarefa central deste Projeto de Programação é desenvolver um programa em C++ para controlar o cadastro de animais silvestres da Pet Fera, segundo as características descritas anteriormente. Para resolver o problema, você deverá implementar um modelo de classes que reflita a situação descrita. Como ponto de partida, você poderá utilizar o Diagrama UML de Classes. Nesse diagrama, as classes são representadas por meio de retângulos com os nomes das classes, contendo os nomes e tipos dos seus respectivos atributos, além de sua visibilidade, simbolizada com + para atributos públicos, - para atributos privados e # para atributos protegidos.

### Parte II
A fim de permitir a reutilização de código em projetos futuros, organize o seu modelo de classes em uma biblioteca dinâmica de nome petfera.so (Linux) ou petfera.dll (Windows). Esta biblioteca deverá ser utilizada na construção dos programas que irão compor o sistema Pet Fera. Utilizando a biblioteca criada no item anterior, implemente um programa auxiliar para permitir exportar apenas dados de animais que satisfaçam a um determinado conjunto de critérios.

>./exportar -c <classe> -v <veterinario> -t <tratador> <arquivo_saida>

Na sintaxe acima, o arquivo executável exportar é invocado passando quatro possíveis argumentos via linha de comando:

- -c <classe>: este argumento opcional indica a classe de animais a serem exportados. Por razões de simplicidade, deverá ser indicada apenas uma classe;
- -v <veterinario>: este argumento opcional indica que apenas animais sob a responsabilidade do veterinário informado devem ser exportados. Por razões de simplicidade, deverá ser indicado apenas um nome de veterinário.
- -t <tratador>: este argumento opcional indica que apenas animais tratados pelo tratador informado devem ser exportados. Por razões de simplicidade, deverá ser indicado apenas um tratador.
- <arquivo_saida>: este argumento obrigatório indica o nome do arquivo de saída, ou seja, do arquivo onde serão guardados os dados a serem exportados. O formato do arquivo de exportação deve seguir o mesmo formato indicado na Tabela 1 do documento que descreve o Projeto de Programação II.

Realize o devido tratamento de exceções para as operações de manipulação de arquivos e para a entrada (leitura) de dados por meio da criação das classes de exceção necessárias e lançamento dos respectivos objetos quando for o caso

### Estrutura utilizada no projeto
- Modularização adequada
- Classes: atributos e métodos; construtores e destrutores; níveis de acesso e métodos de acesso.
- Sobrecarga de operadores
- Templates de classes
- Herança, polimorfismo e classes abstratas
- Uso correto de controle de versão com Git
- Uso consistente de alocação dinâmica de memória
- Uso do container map da STL
- Criação e utilização de biblioteca
- Programa para exportação de dados
- Tratamento de exceções
- Uso adequado de Makefile

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

### Autores
[Paulo Henrique](https://github.com/ppaulohh "Paulo Henrique")<br>
[Thiago Silva](https://github.com/silva-thiago "Thiago Silva")<br>
