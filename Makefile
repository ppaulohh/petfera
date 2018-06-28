# Compiler
CC = g++

INC = ./include
SRC = ./src
OBJ = ./build
BIN = ./bin

CPPFLAGS = -O0 -Wall -pedantic -std=c++11 -I$(INC)
OBJECTS = $(OBJ)/animalsilvestre.o $(OBJ)/animal.o $(OBJ)/funcionario.o $(OBJ)/funcoes.o $(OBJ)/main.o
PROG = $(BIN)/petfera

all: $(OBJECTS) $(BIN)/petfera
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJECTS)

$(OBJ)/animal.o: $(INC)/animal.h
	$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp -o $@

$(OBJ)/animalsilvestre.o: $(INC)/animalsilvestre.h
	$(CC) $(CPPFLAGS) -c $(SRC)/animalsilvestre.cpp -o $@

$(OBJ)/funcionario.o: $(INC)/funcionario.h
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $@

$(OBJ)/funcoes.o: $(INC)/funcoes.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/funcoes.cpp -o $@

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@	

$(BIN)/petfera: $(OBJ)/main.o
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $@

clean:
	rm -f $(PROG) $(OBJECTS) 
