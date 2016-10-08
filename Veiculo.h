#ifndef __Veiculo_h__
#define __Veiculo_h__

#include <iostream>
#include <string>

using namespace std;

class Veiculo{
	private:
		int ID;
		string nome,linha;
		char tipo;		// L=lotação ou O=ônibus
	public:
		// ponteiros
		Veiculo *prox;
// 		Parada *listaParadas; 			ativar quando fizer a lista paradas 

		// construtores 
		Veiculo();
		Veiculo(int i, string n, string l, char t);

		// sets e gets para todos os atributos
		void setId(int id);
		void setNome(string);
		void setLinha(string);
		void setTipo(char tipo);
	
		int getId();
    	    	string getNome();
		string getLinha();
		char getTipo();
	
		void imprime();
//		void RegistraParadaNoVeiculo(Parada *p);

};
#endif


		
		
