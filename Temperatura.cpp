#include "Sensor.cpp"
using namespace std;

class Temperatura{
    private:
        float TempC;
        float TempF;
        float TempK;

    public:

        float getTemperaturaEmC(){
            //TempC = rand();
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