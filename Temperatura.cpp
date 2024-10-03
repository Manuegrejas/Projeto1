#include "Sensor.cpp"
using namespace std;

class Temperatura:public Sensor{
    private:
        float TempC;
        float TempF;
        float TempK;
        int   Valor;
        bool ligado;
        bool conectado;

    public:

        Temperatura(float TempC, bool ligado, bool conectado, string nome) : 
        TempC(TempC), Sensor(ligado, conectado, nome){}


        float setTemperaturaEmC(int velocidade){
            if (ligado == true && conectado == true){
                this -> TempC-=velocidade; 
                return this -> TempC; 
            } 
        }
        float setTemperaturaEmC(float TempC){
            int n = rand();
            if (n%2 == 0){
                TempC ++;
            } 
            else {
                TempC --;
            }
            return TempC;
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