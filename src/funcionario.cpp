/**
 * @file funcionario.cpp
 * @brief	implementação da classe Funcionário em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#include "funcionario.hpp"

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
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

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
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

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Funcionario::~Funcionario()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
int Funcionario::getId()
{
	return id;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Funcionario::setId(int i)
{
	id = i;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Funcionario::getTipoFunc()
{
	return tipofunc;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Funcionario::setTipoFunc(string t)
{
	tipofunc = t;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Funcionario::getNome()
{
	return nome;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Funcionario::setNome(string n)
{
	nome = n;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Funcionario::getCpf()
{
	return cpf;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Funcionario::setCpf(string c)
{
	cpf = c;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
short Funcionario::getIdade()
{
	return idade;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Funcionario::setIdade(short i)
{
	idade = i;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
char Funcionario::getTipo_Sanguineo()
{
	return tipo_sanguineo;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Funcionario::setTipo_Sanguineo(char ts)
{
	tipo_sanguineo = ts;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Funcionario::getFatorRH()
{
	return fatorRH;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Funcionario::setFatorRH(string rh)
{
	fatorRH = rh;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Funcionario::getEspecialidade()
{
	return especialidade;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Funcionario::setEspecialidade(string e)
{
	especialidade = e;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
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

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
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

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Veterinario::Veterinario()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Veterinario::~Veterinario()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Tratador::Tratador()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Tratador::~Tratador()
{
}
