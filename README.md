## Pet Fera<br>
### Cadastro de Animais de um Pet Shop<br>
UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE - UFRN<br>
INSTITUTO METRÓPOLE DIGITAL - IMD<br>
Projeto final da disciplina IMD0030 – LÓGICA DE PROGRAMAÇÃO I | 2018.1<br>
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

#### Classificação comumente aceita e que é utilizada pela Pet Fera
- Anfíbios (Classe Amphibia)
Cerca de 3.000 espécies de anfíbios são encontradas no mundo hoje. São os sapos, rãs, cobras-cegas, pererecas e salamandras.
- Répteis (Classe Reptilia)
Os répteis compreendem atualmente cerca de 6.000 espécies. Na Terra, já habitaram formas gigantescas destes animais, os dinossauros. Entre os répteis encontramos os crocodilos, jacarés, cobras, tartarugas, cágados, entre outros.
- Aves (Classe Aves)
As aves compreendem cerca de 8.700 espécies, distribuídas por todo mundo.
- Mamíferos (Classe Mammalia)
Os mamíferos apresentam cerca de 4.000 espécies, que ocupam diversos tipos de hábitat na Terra, sendo encontrados nos oceanos, ao longo dos litorais, em lagos e rios, sobre a terra, em árvores e até mesmo no ar.

#### Princípios de Manejo de Animais Silvestres em Cativeiro
Para as finalidades de manejo, tanto em cativeiro como em vida livre, as diferentes espécies animais são classificadas pelos órgãos reguladores em:
- Animais silvestres (ou selvagens) nativos: são aqueles pertencentes às espécies nativas, migratórias e quaisquer outras, aquáticas ou terrestres, que tenham a sua vida ou parte dela ocorrendo naturalmente dentro dos limites do Território Brasileiro e suas águas. São exemplos mico, morcego, quati, onça, tamanduá, ema, papagaio, arara, canário-da-terra, ticotico, galo-da-campina, teiú, jiboia, jacaré, jabuti, tartaruga-da-Amazônia, abelha sem ferrão, vespa, borboleta, aranha e outros. O acesso, uso e comércio de animais silvestres são controlados pelo IBAMA.
- Animais silvestres (ou selvagens) exótico: são aqueles cuja distribuição geográfica não inclui o território brasileiro. Outras espécies consideradas exóticas são aquelas que tenham sido introduzidas fora das fronteiras brasileiras e suas águas e que tenham entrado espontaneamente em território brasileiro. São exemplos leão, zebra, elefante, urso, ferret, lebre-europeia, javali, crocodilo-do-Nilo, naja, tartaruga-de orelha-vermelha, cacatua, entre outros.
- Animais domésticos: são aquelas espécies que através de processos tradicionais de manejo e melhoramento zootécnico tornaram-se domésticas, possuindo características biológicas e comportamentais em estreita dependência do homem, podendo inclusive apresentar aparência diferente da espécie silvestre que os originou. São exemplos gato, cachorro, cavalo, vaca, búfalo, porco, galinha, pato, marreco, peru, avestruz, codorna-chinesa, canário-belga, periquito-australiano, abelha-europeia, calopsita, entre outros.

As permissões para manutenção e uso das diferentes espécies baseiam-se nesta classificação, existindo listas oficiais que as classificam. É importante conhecê-las para manejar os animais, pois, por exemplo, para transportar animais silvestres nativos é necessário solicitar uma licença de transporte junto ao IBAMA, enquanto para animais domésticos isto não é necessário.

Além desta classificação, as espécies também são divididas em ameaçadas de extinção ou não ameaçadas. Os animais ameaçados de extinção são aquelas espécies que podem desaparecer da natureza em um curto período de tempo. As principais causas que podem levar à extinção de espécies são:
- Destruição e fragmentação de habitat (desmatamento, retirada parcial ou total de vegetação nativa, queimadas);
- Degradação ambiental (a exemplo da poluição das águas e do ar);
- Tráfico (captura de animais silvestres para o comércio ilegal);
- Caça predatória.

Existem listas oficiais, nacionais e regionais que classificam as espécies segundo o grau de ameaça à sua sobrevivência, sendo que as espécies listadas têm um tratamento especial, tanto para questões de manejo quanto para as punições previstas pela legislação para aqueles que as mantiverem ilegalmente.

### Parte I
A tarefa central deste Projeto de Programação é desenvolver um programa em C++ para controlar o cadastro de animais silvestres da Pet Fera, segundo as características descritas anteriormente, implementando um modelo de classes que reflita a situação descrita. Como ponto de partida, um Diagrama UML de Classes foi desenvolvido. Nesse diagrama, as classes são representadas por meio de retângulos com os nomes das classes, contendo os nomes e tipos dos seus respectivos atributos, além de sua visibilidade, simbolizada com + para atributos públicos, - para atributos privados e # para atributos protegidos.

Durante a implementação do programa, foi utilizado os conceitos e boas práticas de Programação Orientação a Objetos aprendidas na disciplina. Também foi utilizado o Tipo Abstrato de Dados map para manter a lista de animais cadastrados, bem como possivelmente as listas de veterinários e tratadores.

Sempre que o programa inicia o mesmo carrega os dados (se existirem) presentes nos arquivos correspondentes. O programa utiliza como entrada dois arquivos no formato CSV (Comma-Separated Values), um com os dados básicos dos animais a serem cadastrados e outro com os dados dos funcionários (veterinários e tratadores) da Pet Fera.

A título de exemplo, uma linha do arquivo de entrada referente aos animais com os dados:

> 1;Mammalia;Leão;Panthera leo;M;2;Carne;0;1;Simba

Indica que esse animal, com código de identificação 1, é um mamífero (classe Mammalia), mais especificamente um leão cujo nome científico é Panthera leo. Esse leão é um macho com tamanho médio de 2 metros e sua dieta predominante é carne. Ele não possui um veterinário associado, porém o tratador responsável por ele possui código de identificação 1. Por fim, ele atende pelo nome de Simba.

De maneira similar, uma linha do arquivo de entrada referente aos funcionários da Pet Fera com os dados:

> 1;Tratador;Daniel Oscar;123.456.789-10;30;O;+;Felinos

Indica que esse funcionário, com código de identificação 1, é um tratador chamado Daniel Oscar, CPF/MF nº 123.456.789-10, 30 anos, sangue O+ e especializado em felinos. Seguindo a mesma lógica, antes de ser encerrado, o programa deverá salvar todo o conteúdo atualmente em memória para os arquivos em disco. Neste caso, por questões de simplicidade, podese proceder com a substituição completa do conteúdo dos arquivos já existentes.

### Parte II
A fim de permitir a reutilização de código em projetos futuros, o modelo de classes foi organizado em uma biblioteca dinâmica de nome petfera.so (Linux) e petfera.dll (Windows). Esta biblioteca deverá ser utilizada na construção dos programas que irão compor o sistema Pet Fera. Utilizando a biblioteca criada no item anterior, um programa auxiliar foi implementado para permitir exportar apenas dados de animais que satisfaçam a um determinado conjunto de critérios.

>./exportar -c <classe> -v <veterinario> -t <tratador> <arquivo_saida>

Na sintaxe acima, o arquivo executável exportar é invocado passando quatro possíveis argumentos via linha de comando:

- -c <classe>: este argumento opcional indica a classe de animais a serem exportados. Por razões de simplicidade, deverá ser indicada apenas uma classe;
- -v <veterinario>: este argumento opcional indica que apenas animais sob a responsabilidade do veterinário informado devem ser exportados. Por razões de simplicidade, deverá ser indicado apenas um nome de veterinário.
- -t <tratador>: este argumento opcional indica que apenas animais tratados pelo tratador informado devem ser exportados. Por razões de simplicidade, deverá ser indicado apenas um tratador.
- <arquivo_saida>: este argumento obrigatório indica o nome do arquivo de saída, ou seja, do arquivo onde serão guardados os dados a serem exportados. O formato do arquivo de exportação deve seguir o mesmo formato indicado na Tabela 1 do documento que descreve o Projeto de Programação II.

Realize o devido tratamento de exceções para as operações de manipulação de arquivos e para a entrada (leitura) de dados por meio da criação das classes de exceção necessárias e lançamento dos respectivos objetos quando for o caso.

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
