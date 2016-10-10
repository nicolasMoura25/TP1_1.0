//#include "ListaVeiculo.h"
#include "ListaParada.h"
//#include "ListaEstacao.h"
#include <iostream>
	
using namespace std;

int main()
{

//	listaDeVeiculos transportePublico; 				// objeto que gerencia a lista de veículos
	ListaParada todasAsParadas;					// objeto que gerencia a lista de paradas
//	listaDeEstacoesDeBike bikePoa; 					// objeto que gerencia a lista de estacoes de bicicleta


// método que deve criar uma lista com  todas linhas de veiculos
	//transportePublico.carregaVeiculos("linhas.csv");
// método que deve criar uma lista com todas paradas
	todasAsParadas.carregaParadas("paradas.csv");
// método que deve vincular às paradas a lista de ônibus que passa na parada
	//todasAsParadas.vinculaVeiculos("paradalinha.csv");
// método que deve criar a lista de estacoes de bicicleta em poa
	//bikePoa.carregaEstacoes("estacoes-bikepoa.csv");

	int opcao;
	do {
		cout << endl << endl << "Escolha uma opção" << endl;
		cout << "  1. Listar as linhas de ônibus" << endl;
		cout << "  2. Listar as paradas de ônibus de uma linha específica" << endl;
		cout << "  3. Listar as paradas pelas quais circulam mais linhas de ônibus" << endl;
		cout << "  4. Listar as estações de bicicleta" << endl;
		cout << "  5. Listar a parada mais próxima de uma dada estação de bicicleta e as linhas de que passam por ali" << endl;
		cout << "  0. FINALIZAR" << endl <<endl;

		string linha, estacao;
		cin >> opcao;
		switch(opcao) {
			case 1: // Lista as linhas de ônibus
				//transportePublico.ListaLinhasDeOnibus();
				cout << " Imprirmir linhas de onibus" << endl;
				todasAsParadas.ImprimirLista();
				break;
			case 2: // Lista as paradas de ônibus de uma linha específica
				cout << "Informe a linha: " << endl;
			//	cin >> linha;
			//	transportePublico.ListaParadasDaLinha(linha);
				break;
			case 3: // Apresenta as paradas ordenadas pelo uso
			//	todasAsParadas.ImprimeUsoDasParadas();
				cout << " paradas" <<endl;
				break;
			case 4: // Lista as estações de bicicleta
			//	bikePoa.ListaEstacoesDeBike();
				cout << " lista bikes  " << endl;
				break;
			case 5:
				cout << "Informe a estacao de bicicleta: " << endl;
			//	cin >> estacao;
			//	bikePoa.ListaParadasProximasDaEstacao(estacao);
				break;
			case 0:
				return 0;
			default:
				cout << "OPÇÃO INVALIDA. ESCOLHA NOVAMENTE" << endl;
		}
		
	} while(opcao != 0);
	return 0;
}
