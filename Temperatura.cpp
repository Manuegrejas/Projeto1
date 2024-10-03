#include "Sensor.cpp"
using namespace std;

class Temperatura:public Sensor{
    private:
        float TempC;
        float TempF;
        float TempK;

    public:

        Temperatura(float TempC, bool ligado, bool conectado, string nome) : 
        TempC(TempC), Sensor(ligado, conectado, nome){}

        float getTemperaturaEmC(float TempC){
            int n = rand();
            if (n%2 == 0){
                TempC ++;
            } 
            else {
                TempC --;
            }
            return TempC;
        }

        float getTemperaturaEmF(){
            TempF = (9*TempC/5) + 32;
            return TempF;
        }

        float getTemperaturaEmK(){
            TempK = TempC + 273.15;
            return TempK;
        }
};