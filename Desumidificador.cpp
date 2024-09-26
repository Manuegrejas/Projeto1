#include "Atuador.cpp"
using namespace std;

class Desumidificador:public Atuador{
    private:

    public:

        Desumidificador(bool ligado, bool conectado, int valor, string nome) : 
        Atuador(ligado, conectado, valor, nome){}

        bool setConfiguracao(int){
            
        }
};