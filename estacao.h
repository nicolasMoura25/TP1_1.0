#ifndef __estacao_h__ 
#define __estacao_h__

#include <iostream>
#include <string>

using namespace std;

class estacao{ 
	private:
		int ID;
    		string nome;
    		float latitude,longitude; 
   	public:
		// ponteiros
		estacao *prox;

        	// Construtores
		estacao();
		estacao( int id, string nome, float latitude, float longitude);      

        	// sets e gets para todos os atributos
		void setId( int _ID);
		void setNome( string _nome);
		void setLatitude( float _latitude);
		void setLongitude( float _longitude);
	
		int getId();
		string getNome();
		float getLatitude();
		float getLongitude();

};
#endif
