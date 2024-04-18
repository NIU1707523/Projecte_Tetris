#include "Joc.h"

void inicialitza(const string& nomFitxer)
{
	ifstream fitxer;

	fitxer.open(nomFitxer);

	if (fitxer.is_open())
	{
		int fil, col, gir;
		TipusFigura tip
		fitxer >> tip >> fil >> col >> gir;
		m_Figura_a.Inicialitza_Figura_Tipus(tip, col, fil) 	//falta implementar gir; 

		//falta implementar totes funcions classe tauler;;
	}
}

bool giraFigura(DireccioGir direccio)
{

}
bool mouFigura(int dirX)
{

}
int baixaFigura()
{

}
void escriuTauler(const string& nomFitxer)
{

}