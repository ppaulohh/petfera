/**
 * @file animalsilvestre.cpp
 * @brief	implementação da classe Animal Silvestre em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#include "animalsilvestre.hpp"

AnimalSilvestre::AnimalSilvestre()
{
	ibama = "";
}

AnimalSilvestre::AnimalSilvestre(string i) : ibama(i)
{
}

AnimalSilvestre::~AnimalSilvestre()
{
}

string AnimalSilvestre::getIbama()
{
	return ibama;
}

void AnimalSilvestre::setIbama(string i)
{
	ibama = i;
}

Nativo::Nativo()
{
	uf_origem = "";
	autorizacao = "";
}

Nativo::Nativo(string uf, string a) : uf_origem(uf), autorizacao(a)
{
}

Nativo::~Nativo()
{
}

string Nativo::getUforigem()
{
	return uf_origem;
}

void Nativo::setUforigem(string uf)
{
	uf_origem = uf;
}

string Nativo::getAutorizacao()
{
	return autorizacao;
}

void Nativo::setAutorizacao(string a)
{
	autorizacao = a;
}

Exotico::Exotico()
{
	pais_origem = "";
}

Exotico::Exotico(string po) : pais_origem(po)
{
}

Exotico::~Exotico()
{
}

string Exotico::getPaisOrigem()
{
	return pais_origem;
}

void Exotico::setPaisOrigem(string po)
{
	pais_origem = po;
}
