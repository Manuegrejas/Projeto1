#include "Componente.cpp"
using namespace std;

class Sensor:public Componente{
    private:
        float valor;

    public: 
         Sensor(bool ligado, bool conectado, int valor, string nome) :
         Componente(ligado, conectado, valor, nome){}

         Sensor(bool ligado, bool conectado, string nome) :
         Componente(ligado, conectado, nome){}

        int getValor(){
            this->valor = rand()%40;
            return this->valor;
        }
};