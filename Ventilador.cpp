#include "Atuador.cpp"
using namespace std;

class Ventilador:public Atuador{
    private:
    
    public:

        Ventilador(bool ligado, bool conectado, int valor, string nome) : 
        Atuador(ligado, conectado, valor, nome){}

        bool setVelocidade(int){

        }
};