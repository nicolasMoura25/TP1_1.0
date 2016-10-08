#include "Veiculo.h"

Veiculo::Veiculo(){
	ID = 0;
	nome = linha = "vazio";
	tipo = 0;
}

Veiculo::Veiculo(int _ID, string _nome, string _linha, char _tipo){
	ID = _ID;
	nome = _nome;
	linha = _linha;
	tipo = _tipo;
}

void Veiculo::setId(int id){
	ID = id;
}

void Veiculo::setNome(string _nome){
	nome = _nome;
}

void Veiculo::setLinha(string _linha){
	linha = _linha;
}

void Veiculo::setTipo(char _tipo){
	tipo = _tipo;
}
	
int Veiculo::getId(){
	return ID;
}

string Veiculo::getNome(){
	return nome;
}

string Veiculo::getLinha(){
	return linha;
}
		
char Veiculo::getTipo(){
	return tipo;	
}

void Veiculo::imprime(){
	cout << " ID: \t" << getId() << endl;
	cout << " Nome: \t" << getNome() << endl;
	cout << " Linha: \t" << getLinha() << endl;
	cout << " Tipo: \t" << getTipo() << endl;
	
}
