/**
 * @fileanimal.hpp
 * @brief	Cabeçalho da classe Animal em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <sstream>

#include "funcionario.hpp"
#include "animalsilvestre.hpp"

using namespace std;

class Animal
{
protected:
	int id;
	string classe;
	string nome;
	string cientifico;
	char sexo;
	float tamanho;
	string dieta;
	Veterinario *veterinario;
	Tratador *tratador;
	string batismo;

public:
	/**
	 * @brief
	 * @detail
	 * @return
	 */
	Animal();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	Animal(int a, string b, string c, string d, char e, float f, string g, Veterinario *v, Tratador *t, string h);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	virtual ~Animal() = 0;

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	int getId();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setId(int i);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	string getClasse();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setClasse(string c);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	string getNome();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setNome(string n);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	string getCientifico();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setCientifico(string c);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	char getSexo();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setSexo(char s);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	float getTamanho();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setTamanho(float t);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	string getDieta();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setDieta(string d);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	Veterinario *getVeterinario();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setVeterinario(Veterinario *v);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	Tratador *getTratador();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setTratador(Tratador *t);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	string getBatismo();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setBatismo(string b);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

class Anfibio : public Animal
{
protected:
	int total_mudas;
	string ultima_muda;

public:
	/**
	 * @brief
	 * @detail
	 * @return
	 */
	Anfibio();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	~Anfibio();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	int getTotalMudas();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setTotalMUdas(int tm);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	string getUltimaMuda();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setUltimaMuda(string um);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

class Mamifero : public Animal
{
protected:
	string cor_pelo;

public:
	/**
	 * @brief
	 * @detail
	 * @return
	 */
	Mamifero();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	~Mamifero();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	string getCorPelo();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setCorPelo(string cp);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

class Reptil : public Animal
{
protected:
	bool venenoso;
	string tipo_veneno;

public:
	/**
	 * @brief
	 * @detail
	 * @return
	 */
	Reptil();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	~Reptil();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	bool getVenenoso();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setVenenoso(bool v);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	string getTipoVeneno();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setTipoVeneno(string tv);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

class Ave : public Animal
{
protected:
	int tamanho_bico;
	int envergadura;

public:
	/**
	 * @brief
	 * @detail
	 * @return
	 */
	Ave();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	~Ave();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	int getTamanhoBico();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setTamanhoBico(int tb);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	int getEnvergadura();

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	void setEnvergadura(int e);

	/**
	 * @brief
	 * @detail
	 * @return
	 */
	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

#endif
