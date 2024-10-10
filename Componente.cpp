#include <iostream>
using namespace std;
#pragma once

class Componente{
    private:
       

    public:
    
        bool ligado;
        bool conectado;
        string nome;

        float valor;
        
        Componente(bool ligado, bool conectado, float valor, string nome): 
        ligado(ligado), conectado(conectado), valor(valor), nome(nome){}

        Componente(bool ligado, bool conectado, string nome): 
        ligado(ligado), conectado(conectado), nome(nome){}

        void ligar(){

        }

        void desligar(){

        }

        bool conectar(){
            return true;

        }

        void desconectar(){

        }

        int getValor(){
            return valor;
        }
};