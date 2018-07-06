/**
 * @file funcoes.hpp
 * @brief	Cabeçalho da classe Funções em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#ifndef FUNCOES_HPP
#define FUNCOES_HPP

#include <fstream>
#include <string>
#include <map>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <cctype>

#include "animal.hpp"
#include "validadores.hpp"

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
