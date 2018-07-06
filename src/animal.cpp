/**
 * @file animal.cpp
 * @brief	implementação da classe Animal em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#include "animal.hpp"

/** contrutor padrão */
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

/** contrutor parametizado */
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

/** @brief Destrutor padrao */
Animal::~Animal()
{
}

int Animal::getId()
{
	return id;
}

void Animal::setId(int a)
{
	id = a;
}

string Animal::getClasse()
{
	return classe;
}

void Animal::setClasse(string c)
{
	classe = c;
}

string Animal::getNome()
{
	return nome;
}

void Animal::setNome(string n)
{
	nome = n;
}

string Animal::getCientifico()
{
	return cientifico;
}

void Animal::setCientifico(string c)
{
	cientifico = c;
}

char Animal::getSexo()
{
	return sexo;
}

void Animal::setSexo(char s)
{
	sexo = s;
}

float Animal::getTamanho()
{
	return tamanho;
}

void Animal::setTamanho(float t)
{
	tamanho = t;
}

string Animal::getDieta()
{
	return dieta;
}

void Animal::setDieta(string d)
{
	dieta = d;
}

Veterinario *Animal::getVeterinario()
{
	return veterinario;
}

void Animal::setVeterinario(Veterinario *v)
{
	veterinario = v;
}

Tratador *Animal::getTratador()
{
	return tratador;
}

void Animal::setTratador(Tratador *t)
{
	tratador = t;
}

string Animal::getBatismo()
{
	return batismo;
}

void Animal::setBatismo(string b)
{
	batismo = b;
}

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
 * @param os Output stream
 * @param a Objeto da classe "Animal"
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
 * @brief Implementação dos métodos definidos na classe Anfibio.
 * @author Paulo Henrique
 * @since 28/06/2018
 * @date  28/06/2018
 */

Anfibio::Anfibio()
{
	total_mudas = 0;
	ultima_muda = "";
}

Anfibio::~Anfibio()
{
}

int Anfibio::getTotalMudas()
{
	return total_mudas;
}

void Anfibio::setTotalMUdas(int tm)
{
	total_mudas = tm;
}

string Anfibio::getUltimaMuda()
{
	return ultima_muda;
}

void Anfibio::setUltimaMuda(string um)
{
	ultima_muda = um;
}

/**
 * @brief Implementação dos métodos definidos na classe Mamifero.
 * @author Paulo Henrique
 * @since 28/06/2018
 * @date  28/06/2018
 */

Mamifero::Mamifero()
{
	cor_pelo = "";
}

Mamifero::~Mamifero()
{
}

string Mamifero::getCorPelo()
{
	return cor_pelo;
}

void Mamifero::setCorPelo(string cp)
{
	cor_pelo = cp;
}

/**
 * @brief Implementação dos métodos definidos na classe Reptil.
 * @author Paulo Henrique
 * @since 28/06/2018
 * @date  28/06/2018
 */

Reptil::Reptil()
{
	venenoso = false;
	tipo_veneno = "";
}

Reptil::~Reptil()
{
}

bool Reptil::getVenenoso()
{
	return venenoso;
}

void Reptil::setVenenoso(bool v)
{
	venenoso = v;
}

string Reptil::getTipoVeneno()
{
	return tipo_veneno;
}

void Reptil::setTipoVeneno(string tv)
{
	tipo_veneno = tv;
}

/**
 * @brief Implementação dos métodos definidos na classe Ave.
 * @author Paulo Henrique
 * @since 28/06/2018
 * @date  28/06/2018
 */

Ave::Ave()
{
	tamanho_bico = 0;
	envergadura = 0;
}

Ave::~Ave()
{
}

int Ave::getTamanhoBico()
{
	return tamanho_bico;
}

void Ave::setTamanhoBico(int tb)
{
	tamanho_bico = tb;
}

int Ave::getEnvergadura()
{
	return envergadura;
}

void Ave::setEnvergadura(int e)
{
	envergadura = e;
}
