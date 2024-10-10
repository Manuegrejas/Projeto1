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


        float setTemperaturaEmC(int velocidade){
            cout << ligado << endl;
            cout << conectado << endl;
            cout << velocidade << endl;
            cout << TempC << endl;
            if (ligado == true && conectado == true){
                cout << TempC << endl;
                this -> TempC-=velocidade; 
                cout << TempC << endl;
                return this -> TempC; 

            } 
        
        }
        float setTemperaturaEmC(float TempC){
            int n = rand();
            cout << n << endl;
            if (n%2 == 0){
                this -> TempC ++;
        
            } 
            else {
                this -> TempC --;
            }
            cout << TempC << endl;
            return this ->TempC;
        }
        
        float setTemperaturaEmF(){
            TempF = (9*TempC/5) + 32;
            return TempF;
        }

        float setTemperaturaEmK(){
            TempK = TempC + 273.15;
            return TempK;
        }
        int getTemperaturaEmC(){
            return TempC;
        }
        int getTemperaturaEmF(){
            return TempF;
        }
        int getTemperaturaEmK(){
            return TempK;
        }
};