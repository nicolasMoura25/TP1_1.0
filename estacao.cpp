#include "estacao.h"

estacao::estacao(){
	ID = 0;
	nome = "0";
	latitude = longitude = 0;
}

estacao::estacao( int _ID, string _nome, float _latitude, float _longitude){
	ID = _ID;
    	nome = _nome;
    	latitude = _latitude;
	longitude = _longitude;
}    

void estacao::setId( int _ID){
	ID = _ID;
}

void estacao::setNome( string _nome){
	nome = _nome;
}

void estacao::setLatitude( float _latitude){
	latitude = _latitude;
}

void estacao::setLongitude( float _longitude){
	longitude = _longitude;
}

int estacao::getId(){
	return ID;
}

string estacao::getNome(){
	return nome;
}

float estacao::getLatitude(){
	return latitude;
}

float estacao::getLongitude(){
	return longitude;
}
