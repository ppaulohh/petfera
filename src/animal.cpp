/**
 * @file animal.cpp
 * @brief	implementação da classe Animal em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#include "animal.hpp"

/** 
 * @brief Construtor padrão da classe "Animal"
 * @detail Inicializa com valores nulos para que possam ser alterados posteriormente
 */
Animal::Animal()
{
	id = 0;
	classe = "";
	nome = "";
	cientifico = "";
	sexo = '\0';
	tamanho = 0.0;
	dieta = "";
	veterinario = new Veterinario;
	tratador = new Tratador;
	batismo = "";
}

/** 
 * @brief Construtor parametrizado da classe "Animal"
 * @detail Nesse contrutor é definido detalhes e caracteristicas de cada animal
 */
Animal::Animal(int a, string b, string c, string d, char e, float f, string g, Veterinario *v, Tratador *t, string h)
{
	setId(a);
	setNome(b);
	setCientifico(c);
	setClasse(d);
	setSexo(e);
	setTamanho(f);
	setDieta(g);
	setVeterinario(v);
	setTratador(t);
	setBatismo(h);
}

/** 
 * @brief Destrutor padrão da classe "Animal"
 * @detail
 */
Animal::~Animal()
{
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
int Animal::getId()
{
	return id;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setId(int a)
{
	id = a;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
string Animal::getClasse()
{
	return classe;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setClasse(string c)
{
	classe = c;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
string Animal::getNome()
{
	return nome;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setNome(string n)
{
	nome = n;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
string Animal::getCientifico()
{
	return cientifico;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setCientifico(string c)
{
	cientifico = c;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
char Animal::getSexo()
{
	return sexo;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setSexo(char s)
{
	sexo = s;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
float Animal::getTamanho()
{
	return tamanho;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setTamanho(float t)
{
	tamanho = t;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
string Animal::getDieta()
{
	return dieta;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setDieta(string d)
{
	dieta = d;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
Veterinario *Animal::getVeterinario()
{
	return veterinario;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setVeterinario(Veterinario *v)
{
	veterinario = v;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
Tratador *Animal::getTratador()
{
	return tratador;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setTratador(Tratador *t)
{
	tratador = t;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
string Animal::getBatismo()
{
	return batismo;
}

/** 
 * @brief Definir um valor com base no paramêtro
 */
void Animal::setBatismo(string b)
{
	batismo = b;
}

/** 
 * @brief Sobrecarga do operador de inserção (>>)
 * @detail Aramzena os parametros base de um animal e ao verificar que um animal x pertence
 * a uma classe específica, agrega suas caracteristicas inertes a si.
 * @param Um objeto da classe "Animal"
 * @return is => input stream
 */
istream &operator>>(istream &is, Animal &animals)
{
	string saida;
	getline(is, saida);
	istringstream iss(saida);

	iss >> animals.id;
	iss.ignore();
	getline(iss, animals.classe, ';');
	getline(iss, animals.nome, ';');
	getline(iss, animals.cientifico, ';');
	iss >> animals.sexo;
	iss.ignore();
	iss >> animals.tamanho;
	iss.ignore();
	getline(iss, animals.dieta, ';');

	getline(iss, animals.batismo, ';');

	if (animals.classe == "Amphibia")
	{
		Anfibio anfibio_copy;
		iss >> anfibio_copy.total_mudas;
		iss.ignore();
		getline(iss, anfibio_copy.ultima_muda, ';');
	}
	else if (animals.classe == "Mammalia")
	{
		Mamifero mamifero_copy;
		getline(iss, mamifero_copy.cor_pelo, ';');
	}
	else if (animals.classe == "Reptilia")
	{
		Reptil reptil_copy;
		iss >> reptil_copy.venenoso;
		iss.ignore();
		getline(iss, reptil_copy.tipo_veneno, ';');
	}
	else
	{
		Ave bird;
		iss >> bird.tamanho_bico;
		iss.ignore();
		iss >> bird.envergadura;
		iss.ignore();
	}

	return is;
}

/**
 * @details Sobrecarga do operador de impressão (<<)
 * @detail Imprime todas as informações do animal
 * @param Um objeto da classe "Animal"
 * @return os => Output stream
 */

ostream &operator<<(ostream &os, Animal &animals)
{
	os << "Identificador do animal: " << animals.id << endl;
	os << "Classe do animal: " << animals.classe << endl;
	os << "Nome do animal: " << animals.nome << endl;
	os << "Nome científico do animal: " << animals.cientifico << endl;
	os << "Sexo do animal: " << animals.sexo << endl;
	os << "Tamanho médio em metros: " << animals.tamanho << endl;
	os << "Dieta predominante: " << animals.dieta << endl;
	os << "Nome de batismo: " << animals.batismo << endl;
	os << endl;

	return os;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Anfibio::Anfibio()
{
	total_mudas = 0;
	ultima_muda = "";
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Anfibio::~Anfibio()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
int Anfibio::getTotalMudas()
{
	return total_mudas;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Anfibio::setTotalMUdas(int tm)
{
	total_mudas = tm;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Anfibio::getUltimaMuda()
{
	return ultima_muda;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Anfibio::setUltimaMuda(string um)
{
	ultima_muda = um;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Mamifero::Mamifero()
{
	cor_pelo = "";
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Mamifero::~Mamifero()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Mamifero::getCorPelo()
{
	return cor_pelo;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Mamifero::setCorPelo(string cp)
{
	cor_pelo = cp;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Reptil::Reptil()
{
	venenoso = false;
	tipo_veneno = "";
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Reptil::~Reptil()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
bool Reptil::getVenenoso()
{
	return venenoso;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Reptil::setVenenoso(bool v)
{
	venenoso = v;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Reptil::getTipoVeneno()
{
	return tipo_veneno;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Reptil::setTipoVeneno(string tv)
{
	tipo_veneno = tv;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Ave::Ave()
{
	tamanho_bico = 0;
	envergadura = 0;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Ave::~Ave()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
int Ave::getTamanhoBico()
{
	return tamanho_bico;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Ave::setTamanhoBico(int tb)
{
	tamanho_bico = tb;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
int Ave::getEnvergadura()
{
	return envergadura;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Ave::setEnvergadura(int e)
{
	envergadura = e;
}
