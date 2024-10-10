#include "Sensor.cpp"
using namespace std;
#pragma once

class Temperatura:public Sensor{
    private:
        float TempC;
        float TempF;
        float TempK;
        int   Valor;
    

    public:

        Temperatura(float TempC, bool ligado, bool conectado, string nome) : 
        TempC(TempC), Sensor(ligado, conectado, nome){}

        float setTemperaturaEmC(int velocidade){;
            if (ligado == true && conectado == true){
                this -> TempC-=velocidade; 
                return this -> TempC; 
            } 
        
        }
        float setTemperaturaEmC(float TempC){
            int n = rand();
            if (n%2 == 0){
                this -> TempC ++;
        
            } 
            else {
                this -> TempC --;
            }
            return this ->TempC;
        }
        
        float setTemperaturaEmF(){
            TempF = (9*TempC/5) + 32;
            return TempF;
        }

        float setTemperaturaEmK(){
            TempK = TempC + 273;
            return TempK;
        }
        int getTemperaturaEmC(){
            return TempC;
        }
};