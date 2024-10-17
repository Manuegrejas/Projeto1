#include "Atuador.cpp"
using namespace std;
#pragma once

class Lampada:public Atuador{
    private:

    public:

        Lampada(bool ligado, bool conectado, int valor, string nome) : 
        Atuador(ligado, conectado, valor, nome){}

         int getPotencia(){
            return getValor();
        }
        
        bool setBrilho(int potencia){
           if (potencia > 5 || potencia < 0){
                return false;
            } 
            
            else {
                this -> valor  = potencia;
                 return true;
            }
        }
};