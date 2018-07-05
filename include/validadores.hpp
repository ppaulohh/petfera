#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>
#include <stdexcept>
#include <stdlib.h>

using namespace std;

class ErroNaSaida : public std::exception
{
public:
	const char *what()
	{
		return "Está entrada é inválida para essa opção!";
		cout << endl;
	}
};

class IDinvalido : public std::invalid_argument
{
public:
	IDinvalido() : std::invalid_argument("Id não foi encontrado!") {}
};

class EntradaInvalida : public std::exception
{
public:
	const char *what()
	{
		return "Está entrada é inválida!";
		cout << endl;
	}
};

#endif
