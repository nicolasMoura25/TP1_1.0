#include "Parada.h"

Parada::Parada(){
	ID = 0;
	latitude = longitude = 0;
	prox = NULL;
}

Parada::Parada(int _ID, float _latitude, float _longitude){
	ID = _ID;
 	latitude = _latitude;
 	longitude = _longitude;
	prox = NULL;
}

void Parada::setId(int _ID){
	ID = _ID;
}
		
void Parada::setLatitude(float _latitude){
	latitude = _latitude;
}
		
void Parada::setLongitude(float _longitude){
	longitude = _longitude;
}

void Parada::setProx( Parada* _prox){
	prox = _prox;
}

int Parada::getId(){
	return ID;
}
		
float Parada::getLatitude(){
	return latitude;
}
		
float Parada::getLongitude(){
	return longitude;
}

Parada* Parada::getProx(){
	return prox;
}

void Parada::Imprimir(){
	cout << " ID: " << ID << endl;
	cout << " Latitude: " << latitude << endl;
	cout << " Longitude: " << longitude << endl;
	
}

