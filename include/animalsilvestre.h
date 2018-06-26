#ifndef ANIMALSILVESTRE_H
#define ANIMALSILVESTRE_h

#include <iostream>
#include <string>
using namespace std;


class AnimalSilvestre {
	protected:
		string ibama;
	public:
		AnimalSilvestre();
		AnimalSilvestre(string i);
		virtual ~AnimalSilvestre() = 0;

		string getIbama();
		void setIbama(string i);

};


class Nativo : public AnimalSilvestre {
	protected:
		string uf_origem;
		string autorizacao;
	public:
		Nativo();
		Nativo(string uf, string a);
		~Nativo();

		string getUforigem();
		void setUforigem(string uf);
		string getAutorizacao();
		void setAutorizacao(string a);
};


class Exotico : public AnimalSilvestre {
	protected:
		string pais_origem;
	public:
		Exotico();
		Exotico(string po);
		~Exotico();

		string getPaisOrigem();
		void setPaisOrigem(string po);
};

#endif