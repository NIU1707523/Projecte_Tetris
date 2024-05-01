#include "Tauler.h"

Tauler::Tauler(int files, int columnes)
{
    nFiles = files;
    nColumnes = columnes;

    for (int i = 0; i < nFiles; i++)
    {
        for (int j = 0; i < nColumnes; i++)
        {
            tauler[i][j] = -1;
        }
    }
}



bool Tauler::eliminarFila(int fila)
{
    for (int i = 0; i < nFiles; i++)
    {
        tauler[fila][i] = -1;

    }
}