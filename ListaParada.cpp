#include "ListaParada.h"

ListaParada::ListaParada(){
	locais = NULL;
}

ListaParada::ListaParada(int _ID, float _latitude, float _longitude){
	locais =  new Parada (_ID,_latitude , _longitude);
}

void ListaParada::incluir(int _ID, float _latitude, float _longitude){
	Parada *aux, *novaParada;
	
	aux = locais;
	novaParada = new Parada(  _ID,  _latitude,  _longitude);	

	if ( locais == NULL){
		locais = novaParada;
		ultimo = novaParada;
	}
	else{
		ultimo->setProx( novaParada);
		ultimo = novaParada;
	}
		

} 

void ListaParada::setLocais(Parada* _locais){
	locais = _locais;	
}

Parada* ListaParada::getLocais(){
	return locais;
}

bool ListaParada::vazia(){
	return (locais == NULL);

}

void ListaParada::ImprimirLista(){
	Parada* aux;
	aux = locais;

	if(aux == NULL){
		cout << " Lista Vasia !" << endl;
	}
	else{
		cout << " -----Inicio da lista----- "  << endl;
		while (aux != NULL){
			aux->Imprimir();
			aux = aux->getProx();
			cout << endl;		
		}
	}
}

Parada ListaParada::pesquisar(){
	Parada *aux;
	aux = locais; 		
}
