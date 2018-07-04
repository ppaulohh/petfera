#include "animal.h"
#ifndef FUNCOES_H
#define FUNCOES_H

#include <fstream>
#include <string>
#include <map>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <cctype>
#include "validadores.h"

using namespace std;

void CadastroAnimal(map<int, Animal *> &animals, string classe, ifstream &is, int posicao, int chave);

void CadastroFuncionario(map<int, Funcionario *> &funcinarios, string tipo_de_funcionarios, ifstream &is, int posicao, int chave);

void RemoveAnimal(map<int, Animal *> &animals, int id);

void RemoveFuncionario(map<int, Funcionario *> &funcinarios, int id);

void ConsultaAnimal(map<int, Animal *> &animals);

void ConsultaFuncionario(map<int, Funcionario *> &funcinarios);

void AlteraAnimal(map<int, Animal *> &animals);

void ChecarEntrada(string opcao);

#endif