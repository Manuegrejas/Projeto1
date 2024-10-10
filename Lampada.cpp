#include "Atuador.cpp"
using namespace std;
#pragma once

class Lampada:public Atuador{
    private:

    public:

        Lampada(bool ligado, bool conectado, int valor, string nome) : 
        Atuador(ligado, conectado, valor, nome){}

        bool setBrilho(int){
            return true;
            
        }
};