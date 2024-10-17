#include "Sensor.cpp"
using namespace std;
#pragma once

class Luminosidade:public Sensor{
    private:
        int limiarClaridade;

    public:
        Luminosidade(int limiarClaridade, bool ligado, bool conectado, int valor, string nome) : 
        limiarClaridade(limiarClaridade), Sensor(ligado, conectado, valor, nome){
            this -> valor =  valor;
        }
        
        int getLuminosidade(){
            return valor;    
        }
        
        void setLimiarClaridade(int limiarClaridade){
            this -> limiarClaridade = limiarClaridade;
        }

        bool estaClaro(int limiarClaridade){
            if (limiarClaridade < 50){
                return false;
            } else if (limiarClaridade >= 50){
                return true;
            }
        }
};