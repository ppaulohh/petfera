/**
 * @file main.cpp
 * @brief	implementação da classe Main em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>

#include "funcoes.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	map<int, Animal *> animals;
	map<int, Funcionario *> funcinarios;

	ifstream tipo_de_classe;
	ifstream petfera;
	ifstream funcionarios;
	ifstream tipo_de_funcionarios;

	funcionarios.open("data/funcionarios.txt");
	tipo_de_funcionarios.open("data/funcionarios.txt");
	tipo_de_classe.open("data/animais.txt");
	petfera.open("data/animais.txt");

	if (!funcionarios || !petfera)
	{
		cerr << "O arquivo não foi encontrado!" << endl;
		cerr << "O programa será encerrado." << endl;
		exit(1);
	}

	else
	{
		cout << "\n***************************\n";
		cout << "\n BEM VINDO AO PET FERA 2018 \n";
		cout << "\n***************************\n";
		while (1)
		{
			try
			{
				string opcao;
				int escolha;
				int op4;

				cout << "[1] Importar dados" << endl;
				cout << "[2] Consulta de Funcionarios" << endl;
				cout << "[3] Consulta de Animais" << endl;
				cout << "[4] Remoção de Animais" << endl;
				cout << "[5] Remoção de Funcionários" << endl;
				cout << "[6] finalizar o programa" << endl;

				cout << "Digite aqui sua opção: ";
				cin >> opcao;
				ChecarEntrada(opcao);
				escolha = stoi(opcao);
				cout << endl;

				//Funcionários
				switch (escolha)
				{
				case 1:
					for (int j = 0; j < 4; j++)
					{
						string linha, escolha_funcionario;
						int id;

						getline(tipo_de_funcionarios, linha);
						istringstream iss(linha);
						iss >> id;
						iss.ignore();
						getline(iss, escolha_funcionario, ';');

						CadastroFuncionario(funcinarios, escolha_funcionario, tipo_de_funcionarios, j, id);
					}

					//Animais
					for (int i = 0; i < 4; i++)
					{
						string classe, linha2;
						int id;

						tipo_de_classe >> id;
						tipo_de_classe.ignore();
						getline(tipo_de_classe, classe, ';');
						getline(tipo_de_classe, linha2);

						CadastroAnimal(animals, classe, tipo_de_classe, i, id);
					}
					tipo_de_funcionarios.close();
					tipo_de_classe.close();
					petfera.close();
					funcionarios.close();
					cout << "Os dados foram Cadastrados" << endl;
					break;

				case 2:
					ConsultaFuncionario(funcinarios);
					break;

				case 3:
					ConsultaAnimal(animals);
					break;

				case 4:
					cout << "Defina qual o id do animal que será removido: ";
					cin >> op4;
					RemoveAnimal(animals, op4);
					cout << endl;
					break;

				case 5:
					cout << "Defina qual o id do animal que será removido: ";
					cin >> op4;
					RemoveFuncionario(funcinarios, op4);
					cout << endl;
					break;

				case 6:
					exit(1);

				default:
					cout << "Operador Invalido!" << endl;
				}
			}
			catch (EntradaInvalida &ex)
			{
				cerr << ex.what() << endl;
			}
		}
	}
}
