#include "Atuador.cpp"
using namespace std;

class Umidificador:public Atuador{
    private:

    public:

        Umidificador(bool ligado, bool conectado, int valor, string nome) : 
        Atuador(ligado, conectado, valor, nome){}


        bool setConfiguracao(int){
            
        }

};