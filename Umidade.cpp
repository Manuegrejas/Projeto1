#include "Sensor.cpp"
using namespace std;
#pragma once

class Umidade:public Sensor{
    private:
        

    public:
        Umidade(bool ligado, bool conectado, float valor, string nome) : 
        Sensor(ligado, conectado, valor, nome){}

        float setUmidade(int intensidade){;
            if (ligado == true && conectado == true){
                this -> valor+=intensidade*2; 
                return this -> valor; 
            } 
        
        }
        float setUmidade(float i){
            int n = rand();
            if (n%2 == 0){
                this -> valor++;
        
            } 
            else {
                this -> valor--;
            }
            return this ->valor;
        }

        float getUmidadeRelativa(){
            return valor;    
        }
};