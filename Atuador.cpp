#include "Componente.cpp"
using namespace std;
#pragma once

class Atuador:public Componente{
    private:
    
    public:
        Atuador(bool ligado, bool conectado, int valor, string nome) :
         Componente(ligado, conectado, valor, nome){}

        bool setValor(int valor){
            return true;
            
        }
};