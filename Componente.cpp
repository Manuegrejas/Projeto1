#include <iostream>
using namespace std;

class Componente{
    private:
        bool ligado;
        bool conectado;
        int valor;
        string nome;

    public:

        Componente(bool ligado, bool conectado, int valor, string nome): 
        ligado(ligado), conectado(conectado), valor(valor), nome(nome){}

        Componente(bool ligado, bool conectado, string nome): 
        ligado(ligado), conectado(conectado), nome(nome){}

        void ligar(){

        }

        void desligar(){

        }

        bool conectar(){

        }

        void desconectar(){

        }

        int getValor(){
            return valor;
        }
};