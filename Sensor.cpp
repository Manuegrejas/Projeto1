#include "Componente.cpp"
using namespace std;

class Sensor:public Componente{
    private:

    public: 
         Sensor(bool ligado, bool conectado, int valor, string nome) :
         Componente(ligado, conectado, valor, nome){}

};