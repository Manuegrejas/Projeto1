#include "Sensor.cpp"
using namespace std;

class Umidade:public Sensor{
    private:

    public:
        Umidade(bool ligado, bool conectado, string nome) : 
        Sensor(ligado, conectado, nome){}

        float getUmidadeRelativa(){
            
        }
};