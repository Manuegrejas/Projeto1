#include "Sensor.cpp"
using namespace std;

class Luminosidade:public Sensor{
    private:
        int limiarClaridade;

    public:
        Luminosidade(int limiarClaridade, bool ligado, bool conectado, int valor, string nome) : 
        limiarClaridade(limiarClaridade), Sensor(ligado, conectado, valor, nome){}
        
        void setLimiarClaridade(int){

        }

        bool estaClaro(){

        }
};