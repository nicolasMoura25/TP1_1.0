#ifndef __Parada_h__
#define __Parada_h__

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Parada{
	private:
		int ID;
		float latitude,longitude;
		Parada *prox;
		//		listaVeiculo *lstVeiculo // para quue serve esse ponteiro ???
	public:
		// Construtores ...... 
		Parada();
		Parada(int id, float latitude, float longitude);

		// sets e gets para todos os atributos
		void setId(int _ID);
		void setLatitude(float _latitude);
		void setLongitude(float _longitude);
		void setProx( Parada* _prox);

		int getId();
		float getLatitude();
		float getLongitude(); 
		Parada* getProx();
		
		void Imprimir();

//		void RegistraVeiculoNaParada(Veiculo *v);
};   
#endif
