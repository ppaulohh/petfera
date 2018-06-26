#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H


#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;


class Funcionario {
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
		Funcionario();
		Funcionario(int a, string b, string c, short d, char f, string g, string h, string i);
		virtual ~Funcionario() = 0;
		int getId();
		void setId(int a);
		string getNome();
		void setNome(string b);
		string getCpf();
		void setCpf(string c);
		short getIdade();
		void setIdade(short d);
		char getTipo_Sanguineo();
		void setTipo_Sanguineo(char e);
		string getFatorRH();
		void setFatorRH(string f);
		string getEspecialidade();
		void setEspecialidade(string g);
		string getTipoFunc();
		void setTipoFunc(string h);

		friend istream& operator>> (istream &is, Funcionario &officials);
		friend ostream& operator<< (ostream &os, Funcionario &officials);
};


class Veterinario : public Funcionario {
	public:
		Veterinario();
		~Veterinario();
};


class Tratador : public Funcionario {
	public:
		Tratador();
		~Tratador();
};

#endif