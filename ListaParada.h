#ifndef __ListaParada_H__
#define __ListaParada_H__

#include<iostream>
#include <string>

using namespace std;

class ListaParada{
	private:
		Parada* locais;
	public:
		ListaParada();

        	void carregaParadas();
		void vinculaVeiculos();
		void ImprimeUsoDasParadas();

		void incluirInicio(int ID, float latitude, float longitude);
		void incluirFinal(int ID, float latitude, float longitude);
};
#endif
