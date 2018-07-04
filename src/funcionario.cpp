#include "funcionario.h"

Funcionario::Funcionario()
{
	id = 0;
	tipofunc = "";
	nome = "";
	cpf = "";
	idade = 0;
	tipo_sanguineo = '\0';
	fatorRH = '\0';
	especialidade = "";
}

Funcionario::Funcionario(int a, string b, string c, short d, char f, string g, string h, string i)
{

	setId(a);
	setNome(b);
	setCpf(c);
	setIdade(d);
	setTipo_Sanguineo(f);
	setFatorRH(g);
	setEspecialidade(h);
	setTipoFunc(i);
}

Funcionario::~Funcionario()
{
}

int Funcionario::getId()
{
	return id;
}

void Funcionario::setId(int i)
{
	id = i;
}

string Funcionario::getTipoFunc()
{
	return tipofunc;
}

void Funcionario::setTipoFunc(string t)
{
	tipofunc = t;
}

string Funcionario::getNome()
{
	return nome;
}

void Funcionario::setNome(string n)
{
	nome = n;
}

string Funcionario::getCpf()
{
	return cpf;
}

void Funcionario::setCpf(string c)
{
	cpf = c;
}

short Funcionario::getIdade()
{
	return idade;
}

void Funcionario::setIdade(short i)
{
	idade = i;
}

char Funcionario::getTipo_Sanguineo()
{
	return tipo_sanguineo;
}

void Funcionario::setTipo_Sanguineo(char ts)
{
	tipo_sanguineo = ts;
}

string Funcionario::getFatorRH()
{
	return fatorRH;
}

void Funcionario::setFatorRH(string rh)
{
	fatorRH = rh;
}

string Funcionario::getEspecialidade()
{
	return especialidade;
}

void Funcionario::setEspecialidade(string e)
{
	especialidade = e;
}

istream &operator>>(istream &is, Funcionario &officials)
{

	string linha, escolha_funcionario;
	int i;
	getline(is, linha);
	istringstream iss(linha);

	iss >> i;
	iss.ignore();
	getline(iss, escolha_funcionario, ';');

	officials.id = i;
	officials.tipofunc = escolha_funcionario;
	getline(iss, officials.nome, ';');
	getline(iss, officials.cpf, ';');
	iss >> officials.idade;
	iss.ignore();
	iss >> officials.tipo_sanguineo;
	iss.ignore();
	getline(iss, officials.fatorRH, ';');
	getline(iss, officials.especialidade, ';');

	return is;
}

ostream &operator<<(ostream &os, Funcionario &officials)
{

	os << "Identificador do funcionário: " << officials.id << endl;
	os << "Função: " << officials.tipofunc << endl;
	os << "Nome do funcionário: " << officials.nome << endl;
	os << "CPF do funcionário: " << officials.cpf << endl;
	os << "Idade do funcionário: " << officials.idade << endl;
	os << "Tipo Sanguíneo: " << officials.tipo_sanguineo << endl;
	os << "Fator RH: " << officials.fatorRH << endl;
	os << "Especialidade: " << officials.especialidade << endl;
	cout << endl;

	return os;
}

Veterinario::Veterinario()
{
}

Veterinario::~Veterinario()
{
}

Tratador::Tratador()
{
}

Tratador::~Tratador()
{
}