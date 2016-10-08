#include "ListaParada.h"

ListaParada::ListaParada(){
	locais = NULL;
}

void ListaParada::incluirInicio( int ID, float latitude, float longitude){
	Parada* novaParada = new Parada( ID, latitude, longitude);
	ListaParada = novaParada;
} 

void incluirFinal(int ID, float latitude, float longitude){
	aux = ListaParada;

	Parada* novaParada = new Parada(ID, latitude, longitude);
	
	while(aux->getprox() != NULL){
		aux = aux->getProx();
	}
		
	aux->setProx( novaParada);
}
