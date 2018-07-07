/**
 * @file funcionario.hpp
 * @brief	Cabeçalho da classe Funcionário em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

class Funcionario
{
protected:
	int id;
	string tipofunc;
	string nome;
	string cpf;
	short idade;
	char tipo_sanguineo;
	string fatorRH;
	string especialidade;

public:
	/** 
	 * @brief
	 * @return
	 * @return
	 */
	Funcionario();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	Funcionario(int a, string b, string c, short d, char f, string g, string h, string i);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	virtual ~Funcionario() = 0;

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	int getId();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setId(int a);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	string getNome();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setNome(string b);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	string getCpf();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setCpf(string c);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	short getIdade();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setIdade(short d);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	char getTipo_Sanguineo();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setTipo_Sanguineo(char e);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	string getFatorRH();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setFatorRH(string f);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	string getEspecialidade();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setEspecialidade(string g);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	string getTipoFunc();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	void setTipoFunc(string h);

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	friend istream &operator>>(istream &is, Funcionario &officials);
	friend ostream &operator<<(ostream &os, Funcionario &officials);
};

class Veterinario : public Funcionario
{
public:
	/** 
	 * @brief
	 * @return
	 * @return
	 */
	Veterinario();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	~Veterinario();
};

class Tratador : public Funcionario
{
public:
	/** 
	 * @brief
	 * @return
	 * @return
	 */
	Tratador();

	/** 
	 * @brief
	 * @return
	 * @return
	 */
	~Tratador();
};

#endif
