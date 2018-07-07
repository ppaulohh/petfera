/**
 * @file validadores.hpp
 * @brief	Cabeçalho da classe Validadores em C++
 * @author Paulo Henrique e Thiago Silva
 * @since	27/06/2018
 * @date	06/07/2018
 */

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>
#include <stdexcept>
#include <stdlib.h>

using namespace std;

/** 
 * @brief
 * @return
 * @return
 */
class ErroNaSaida : public std::exception
{
public:
	const char *what()
	{
		return " ";
		// cout << endl;
	}
};

/** 
 * @brief
 * @return
 * @return
 */
class IDinvalido : public std::invalid_argument
{
public:
	IDinvalido() : std::invalid_argument("Id não foi encontrado!") {}
};

/** 
 * @brief
 * @return
 * @return
 */
class EntradaInvalida : public std::exception
{
public:
	const char *what()
	{
		return "Está entrada é inválida!";
		// cout << endl;
	}
};

#endif
