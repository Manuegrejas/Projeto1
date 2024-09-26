#include "Sensor.cpp"
using namespace std;

class Umidade:public Sensor{
    private:

    public:
        Umidade(bool ligado, bool conectado, int valor, string nome) : 
        Sensor(ligado, conectado, valor, nome){}

        float getUmidadeRelativa(){
            
        }
};