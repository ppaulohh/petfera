/**
 * @file animalsilvestre.hpp
 * @brief	Cabeçalho da classe Animal Silvestre em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#ifndef ANIMALSILVESTRE_HPP
#define ANIMALSILVESTRE_HPP

#include <iostream>
#include <string>

using namespace std;

class AnimalSilvestre
{
protected:
	string ibama;

public:
	/** 
	 * @brief
	 * @return
	 * @return
	 */
	AnimalSilvestre();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	AnimalSilvestre(string i);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	virtual ~AnimalSilvestre() = 0;

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	string getIbama();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setIbama(string i);
};

class Nativo : public AnimalSilvestre
{
protected:
	string uf_origem;
	string autorizacao;

public:
	/** 
	 * @brief
	 * @return
	 * @return
	 */
	Nativo();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	Nativo(string uf, string a);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	~Nativo();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	string getUforigem();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setUforigem(string uf);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	string getAutorizacao();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setAutorizacao(string a);
};

class Exotico : public AnimalSilvestre
{
protected:
	string pais_origem;

public:
	/** 
	 * @brief
	 * @return
	 * @return
	 */
	Exotico();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	Exotico(string po);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	~Exotico();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	string getPaisOrigem();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setPaisOrigem(string po);
};

#endif
