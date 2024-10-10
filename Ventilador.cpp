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
            cout << velocidade << endl;
            if (velocidade > 3 || velocidade < 0){
                cout << "UM" << endl;
                return false;
            } 
            
            else {
                
                this -> valor  = velocidade;
                cout << "DOIS" << endl;
                 return true;

                  }

        }
};