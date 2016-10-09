#ifndef __ListaParada_h__
#define __ListaParada_h__

#include "Parada.h"

#include<iostream>
#include <string>

using namespace std;

class ListaParada{
	private:
		Parada *locais,*ultimo;
	public:
		ListaParada();
		ListaParada(int _ID, float _latitude, float _longitude);

		void setLocais(Parada* _locais);
        	void carregaParadas();
		void vinculaVeiculos();
		void ImprimeUsoDasParadas();

		Parada* getLocais();
		bool vazia();
		void ImprimirLista();
		Parada pesquisar();

		void incluir(int _ID, float _latitude, float _longitude);
		
};
#endif
