#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>
#include <stdexcept>
#include <stdlib.h>

using namespace std;

class ErroNaSaida : public std::exception {
	public:
		const char* what() {
			return "Está entrada é inválida para essa opção";
		}
};


class IDinvalido : public std::invalid_argument {
	public:
		IDinvalido() : std::invalid_argument("Id não foi encontrado") {}
};

class EntradaInvalida : public std::exception {
	public:
		const char* what() {
			return "Está entrada é inválida";
		}
};

#endif