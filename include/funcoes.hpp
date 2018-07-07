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

/** 
 * @brief
 * @return
 * @return
 */
void CadastroAnimal(map<int, Animal *> &animals, string classe, ifstream &is, int posicao, int chave);

/** 
 * @brief
 * @return
 * @return
 */
void CadastroFuncionario(map<int, Funcionario *> &funcinarios, string tipo_de_funcionarios, ifstream &is, int posicao, int chave);

/** 
 * @brief
 * @return
 * @return
 */
void RemoveAnimal(map<int, Animal *> &animals, int id);

/** 
 * @brief
 * @return
 * @return
 */
void RemoveFuncionario(map<int, Funcionario *> &funcinarios, int id);

/** 
 * @brief
 * @return
 * @return
 */
void ConsultaAnimal(map<int, Animal *> &animals);

/** 
 * @brief
 * @return
 * @return
 */
void ConsultaFuncionario(map<int, Funcionario *> &funcinarios);

/** 
 * @brief
 * @return
 * @return
 */
void AlteraAnimal(map<int, Animal *> &animals);

/** 
 * @brief
 * @return
 * @return
 */
void ChecarEntrada(string opcao);

#endif
