#include "Atuador.cpp"
using namespace std;
#pragma once

class Umidificador:public Atuador{
    private:

    public:

        Umidificador(bool ligado, bool conectado, int valor, string nome) : 
        Atuador(ligado, conectado, valor, nome){}

        bool setConfiguracao(int intensidade){
            if (intensidade > 3 || intensidade < 0){
                return false;
            } 
            else {
                this -> valor  = intensidade;
                return true;
            }
        }

        int getValor(){
            return valor;
        }
};