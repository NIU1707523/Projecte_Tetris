#include "Figura.h"

Figura::Inicialitza_Figura_Tipus(TipusFigura t, int col, const int &fil)
{
	m_TpusFigura = t;
	DireccioGir = 0;
	m_Posicio_actual[0] = fil; // [0] = posicio_fila, [1] = posicio_columne;
	m_Posicio_actual[1] = col; // [0] = posicio_fila, [1] = posicio_columne;
	Figura::Inicialitza_Figura(t);
}

Figura::Inicialitza_Figura(TipusFigura t)
{
	switch (t)
	{
	case FIGURA_O:
	{
		break;
	}
	case FIGURA_I:
	{
		break;
	}
	case FIGURA_T:
	{
		break;
	}
	case FIGURA_J:
	{
		break;
	}
	case FIGURA_L;
	{
		break;
	}
	case FIGURA_J:
	{
		break;
	}
	case FIGURA_Z:
	{
		break;
	}
	case FIGURA_S:
	{
		break;
	}
	default:
		break;
	}
}


//Falta funcio de gir;;
