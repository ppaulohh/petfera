#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include "funcoes.h"


using namespace std;


int main() {

    map<int, Animal*> animals;
    map<int, Funcionario*> funcinarios;



	ifstream tipo_de_classe;
	ifstream petfera;
	ifstream funcionarios;
	ifstream tipo_de_funcionarios;




	funcionarios.open("data/funcionarios.txt");
	tipo_de_funcionarios.open("data/funcionarios.txt");
	tipo_de_classe.open("data/animais.txt");
	petfera.open("data/animais.txt");

	

	if(!funcionarios || !petfera) {
		cerr << "O arquivo não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}

 	else {
 		
 		

 		
		cout << "\n***************************\n";
		cout << " \nBEM VINDO AO PET FERA 2.0 \n";
		cout << "\n***************************\n";
		while(1) {
			try{
		 		string opcao;
		 		int escolha;
		 		int op4;

				cout << "	Digite 1 para Cadastro \n" ;
				cout <<	"	Digite 2 para Consulta de Funcionarios   \n";
				cout << "	Digite 3 para Consulta de Animais  \n" ;
				cout << "	Digite 4 para Remoção de Animais  \n" ;
				cout << "	Digite 5 para Remoção de Funcionários  \n";
				cout << "	Digite 6 para finalizar o programa.\n\n";

				cout << "Digite aqui sua opção:\n";
				cin >> opcao;
				ChecarEntrada(opcao);
				escolha = stoi(opcao);

		 		//Funcionários
		 		switch(escolha){

		 			case 1:
		 		
		 				for (int j = 0; j < 4; j++) {
		 					string linha, escolha_funcionario;
		 					int id;

							getline(tipo_de_funcionarios, linha);
							istringstream iss(linha);
							iss >> id;	
							iss.ignore();
							getline(iss, escolha_funcionario, ';');


							CadastroFuncionario( funcinarios, escolha_funcionario, tipo_de_funcionarios, j, id);
		 			}

		 			//Animais
		 				for (int i = 0; i < 4; i++) {
		 					string classe,linha2;
		 					int id;

							tipo_de_classe >> id;
							tipo_de_classe.ignore();
							getline(tipo_de_classe, classe, ';');
							getline(tipo_de_classe, linha2);

							CadastroAnimal( animals,  classe,  tipo_de_classe,  i, id);

						
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

		 				break;

		 			case 5:
		 		

		 				cout << "Defina qual o id do animal que será removido: ";
			        	cin >> op4;	

		 				RemoveFuncionario(funcinarios, op4);
		 				break;

		 			case 6:

		 				exit(1);

		 			default:

		 			cout << "Operador Invalido \n";

	 			}
	 		} catch (EntradaInvalida &ex) {
				cerr << ex.what() << endl;
			}
	 	}
	}
}
	 		