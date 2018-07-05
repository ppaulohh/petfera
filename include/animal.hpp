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
	Animal();
	Animal(int a, string b, string c, string d, char e, float f, string g, Veterinario *v, Tratador *t, string h);
	virtual ~Animal() = 0;

	int getId();
	void setId(int i);
	string getClasse();
	void setClasse(string c);
	string getNome();
	void setNome(string n);
	string getCientifico();
	void setCientifico(string c);
	char getSexo();
	void setSexo(char s);
	float getTamanho();
	void setTamanho(float t);
	string getDieta();
	void setDieta(string d);
	Veterinario *getVeterinario();
	void setVeterinario(Veterinario *v);
	Tratador *getTratador();
	void setTratador(Tratador *t);
	string getBatismo();
	void setBatismo(string b);

	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

class Anfibio : public Animal
{
protected:
	int total_mudas;
	string ultima_muda;

public:
	Anfibio();
	~Anfibio();

	int getTotalMudas();
	void setTotalMUdas(int tm);
	string getUltimaMuda();
	void setUltimaMuda(string um);

	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

class Mamifero : public Animal
{
protected:
	string cor_pelo;

public:
	Mamifero();
	~Mamifero();

	string getCorPelo();
	void setCorPelo(string cp);

	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

class Reptil : public Animal
{
protected:
	bool venenoso;
	string tipo_veneno;

public:
	Reptil();
	~Reptil();

	bool getVenenoso();
	void setVenenoso(bool v);
	string getTipoVeneno();
	void setTipoVeneno(string tv);

	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

class Ave : public Animal
{
protected:
	int tamanho_bico;
	int envergadura;

public:
	Ave();
	~Ave();

	int getTamanhoBico();
	void setTamanhoBico(int tb);
	int getEnvergadura();
	void setEnvergadura(int e);

	friend istream &operator>>(istream &is, Animal &animals);
	friend ostream &operator<<(ostream &os, Animal &animals);
};

#endif
