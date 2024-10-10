#include "Atuador.cpp"
using namespace std;
#pragma once

class Ventilador:public Atuador{
    private:
    
    public:

        Ventilador(bool ligado, bool conectado, int valor, string nome) : 
        Atuador(ligado, conectado, valor, nome){}

        int getVelocidade(){
            return getValor();
        }

        bool setValor(int velocidade){
            if (velocidade > 3 || velocidade < 0){
                return false;
            } 
            
            else {
                this -> valor  = velocidade;
                 return true;
            }
        }
};