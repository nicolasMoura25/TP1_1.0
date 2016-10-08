#ifndef __ListaVeiculo_h__
#define __ListaVeiculo_h__

#include "Veiculo.h"
#include <iostream>

using namespace std;

class ListaVeiculo{
	Veiculo* Transporte;
	public:
		ListaVeiculo();

		void carregaVeiculos ();
		void ListaLinhasDeOnibus();
		void ListaParadasDaLinha(string linha);

};
#endif
		
