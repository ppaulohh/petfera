/**
 * @file funcoes.cpp
 * @brief	implementação da classe Funções em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#include "funcoes.hpp"

void CadastroAnimal(map<int, Animal *> &animals, string classe, ifstream &is, int posicao, int chave)
{
	Animal *animals_copia;

	try
	{
		if (classe == "Mammalia")
		{
			animals_copia = new Mamifero;
			is >> (*animals_copia);

			animals.insert(pair<int, Animal *>(chave, animals_copia));
		}
		else if (classe == "Amphibia")
		{
			animals_copia = new Anfibio;
			is >> (*animals_copia);

			animals.insert(pair<int, Animal *>(chave, animals_copia));
		}
		else if (classe == "Reptilia")
		{
			animals_copia = new Reptil;
			is >> (*animals_copia);

			animals.insert(pair<int, Animal *>(chave, animals_copia));
		}
		else if (classe == "Ave")
		{
			animals_copia = new Ave;
			is >> (*animals_copia);

			animals.insert(pair<int, Animal *>(chave, animals_copia));
		}
		else
		{
			throw ErroNaSaida();
		}
	}
	catch (ErroNaSaida &ex)
	{
		cerr << ex.what() << endl;
	}
}

void CadastroFuncionario(map<int, Funcionario *> &funcinarios, string tipo, ifstream &is, int posicao, int chave)
{
	Funcionario *officials;

	try
	{

		if (tipo == "Veterinario")
		{
			officials = new Veterinario;
			is >> (*officials);
			funcinarios.insert(pair<int, Funcionario *>(chave, officials));
		}
		else if (tipo == "Tratador")
		{
			officials = new Tratador;
			is >> (*officials);

			funcinarios.insert(pair<int, Funcionario *>(chave, officials));
		}
		else
		{
			cerr << " " << endl;
		}
	}
	catch (ErroNaSaida &ex)
	{
		cerr << ex.what() << endl;
	}
}

void RemoveAnimal(map<int, Animal *> &animals, int id)
{
	map<int, Animal *>::iterator busca = animals.find(id);

	try
	{
		if (busca != animals.end())
		{
			animals.erase(id);
			cout << "Animal foi removido com sucesso!" << endl;
		}
		else
		{
			throw IDinvalido();
		}
	}
	catch (IDinvalido &ex)
	{
		cerr << ex.what() << endl;
	}
}

void RemoveFuncionario(map<int, Funcionario *> &funcinarios, int id)
{
	map<int, Funcionario *>::iterator busca = funcinarios.find(id);

	try
	{
		if (busca != funcinarios.end())
		{
			funcinarios.erase(id);
			cout << "Funcionário foi removido com sucesso!" << endl;
		}
		else
		{
			throw IDinvalido();
		}
	}
	catch (IDinvalido &ex)
	{
		cerr << ex.what() << endl;
	}
}

void ConsultaAnimal(map<int, Animal *> &animals)
{
	int id;
	cout << "Defina qual o id do animal que está buscando: ";
	cin >> id;
	cout << endl;

	try
	{
		map<int, Animal *>::iterator busca = animals.find(id);
		if (busca != animals.end())
		{
			cout << (*animals[id]);
		}
		else
		{
			throw IDinvalido();
		}
	}
	catch (IDinvalido &ex)
	{
		cerr << ex.what() << endl;
	}
}

void ConsultaFuncionario(map<int, Funcionario *> &funcinarios)
{
	int id;

	cout << "Defina qual o id do funcionário que se busca: ";
	cin >> id;
	cout << endl;

	map<int, Funcionario *>::iterator busca = funcinarios.find(id);

	try
	{
		if (busca != funcinarios.end())
		{
			cout << (*funcinarios[id]);
		}
		else
		{
			throw IDinvalido();
		}
	}
	catch (IDinvalido &ex)
	{
		cerr << ex.what() << endl;
	}
}

void ChecarEntrada(string opcao)
{
	if (!std::isdigit(opcao[0]))
	{
		throw EntradaInvalida();
	}
}
