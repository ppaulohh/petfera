/**
 * @file animalsilvestre.cpp
 * @brief	implementação da classe Animal Silvestre em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#include "animalsilvestre.hpp"

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
AnimalSilvestre::AnimalSilvestre()
{
	ibama = "";
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
AnimalSilvestre::AnimalSilvestre(string i) : ibama(i)
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
AnimalSilvestre::~AnimalSilvestre()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string AnimalSilvestre::getIbama()
{
	return ibama;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void AnimalSilvestre::setIbama(string i)
{
	ibama = i;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Nativo::Nativo()
{
	uf_origem = "";
	autorizacao = "";
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Nativo::Nativo(string uf, string a) : uf_origem(uf), autorizacao(a)
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Nativo::~Nativo()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Nativo::getUforigem()
{
	return uf_origem;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Nativo::setUforigem(string uf)
{
	uf_origem = uf;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Nativo::getAutorizacao()
{
	return autorizacao;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Nativo::setAutorizacao(string a)
{
	autorizacao = a;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Exotico::Exotico()
{
	pais_origem = "";
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Exotico::Exotico(string po) : pais_origem(po)
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
Exotico::~Exotico()
{
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
string Exotico::getPaisOrigem()
{
	return pais_origem;
}

/** 
 * @brief
 * @detail
 * @param
 * @return
 */
void Exotico::setPaisOrigem(string po)
{
	pais_origem = po;
}
