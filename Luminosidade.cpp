#include "Sensor.cpp"
using namespace std;

class Luminosidade:public Sensor{
    private:
        int limiarClaridade;

    public:
        Luminosidade(int limiarClaridade, bool ligado, bool conectado, string nome) : 
        limiarClaridade(limiarClaridade), Sensor(ligado, conectado, nome){}
        
        void setLimiarClaridade(int){

        }

        bool estaClaro(){

        }
};