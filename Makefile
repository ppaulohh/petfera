# Makefile for "Petfera Project"
# Created by Paulo Henrique
# Updated by Thiago Silva
# Since: 28/06/2018
# Date: 04/07/2018
#
# Makefile completo separando os diferentes elementos da aplicacao como codigo (src),
# cabecalhos (include), executáveis (build), bibliotecas (lib), etc.
# Cada elemento é alocado em uma pasta especifica, organizando melhor o codigo fonte.
#
# Algumas variáveis são usadas com significado especial:
#
# $@ nome do alvo (target)
# $^ lista com os nomes de todos os pre-requisitos sem duplicatas
# $< nome do primeiro pré-requisito

# Comandos do sistema operacional
# Linux: rm -rf
RM = rm -rf 

# Compilador
CC = g++

# Gerador de blibliotecas estáticas
AR = ar

# Variáveis para os subdiretórios
BIN = ./bin
DAT = ./data
OBJ = ./build
DOC = ./doc
SRC = ./src
INC = ./include
LIB = ./lib
SRC = ./src

# Criando estruturas de diretórios
MKDIR_P = mkdir -p

# Todos os diretórios da aplicação
DIR_CRT = $(BIN) $(OBJ) $(DOC) $(LIB)

# Define o nome do binário/executavel final
PROG = $(BIN)/petfera

# Opções de compilação
CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I$(INC)

# Lista dos arquivos objeto (.o) que formam o binario/executavel final
OBJS = $(OBJ)/animalsilvestre.o $(OBJ)/animal.o $(OBJ)/funcionario.o $(OBJ)/funcoes.o $(OBJ)/main.o

all: diretorios $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

diretorios:
	$(MKDIR_P) $(DIR_CRT)

# Bibliotecas .a e .so para o Linux
linux: petfera.a petfera.so static-petfera dynamic-petfera

# Bibliotecas .lib e .dll para gerar bibliotecas para o Windows
#windows:

# LINUX

$(OBJ)/animal.o: $(INC)/animal.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp -o $@

$(OBJ)/animalsilvestre.o: $(INC)/animalsilvestre.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animalsilvestre.cpp -o $@

$(OBJ)/funcionario.o: $(INC)/funcionario.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $@

$(OBJ)/funcoes.o: $(INC)/funcoes.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/funcoes.cpp -o $@

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@

$(BIN)/petfera: $(OBJ)/main.o
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

#########

# Garante que os alvos desta lista não sejam confundidos com outros arquivos de mesmo nome
.PHONY: all clean debug doxy doc

# Alvo para a criação do arquivo Doxyfile.
doxy:
	doxygen -g

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doc:
	$(RM) $(DOC)/*
	doxygen ./Doxyfile

# Alvo para a compilação com informações de debug
# Altera a flag CPPFLAGS, incluindo as opções -g -O0 e recompila todo o projeto
debug: CPPFLAGS += -g -O0 
debug: all

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(OBJ)/* $(BIN)/*
	@echo "Removido arquivos objetos e executáveis contidos nas pastas ./build e ./bin, respectivamente."
