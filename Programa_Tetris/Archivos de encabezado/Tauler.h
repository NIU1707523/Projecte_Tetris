#ifndef TAULER_H
#define TAULER_H
#include "Figura.h"

const int MAX_FILA = 8;
const int MAX_COL = 8;

class Tauler
{
public:

    Tauler(int files, int columnes);

    void setfiles(const int files) { nFiles = files; }
    void setcolumnes(const int columnes) { nColumnes = columnes; }
    
    int getfiles() const { return nFiles; }
    int getColumnes() const { return nColumnes; }
    
    bool colocarFigura(const Figura& figura);

    bool movimentValid(const Figura& figura, int novaFila, int novaColumna);

    bool girValid(const Figura& figura);

    void eliminarFila(int fila);


private:

    int nFiles, nColumnes;
    int tauler[MAX_FILA][MAX_COL];

    bool filaCompleta(int fila) const;

};


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

#endif
