#include <iostream>
using namespace std;
#pragma once

class Componente{
    private:
       

    public:
    
        bool ligado;
        bool conectado;
        string nome;

        int valor;
        
        Componente(bool ligado, bool conectado, int valor, string nome): 
        ligado(ligado), conectado(conectado), valor(valor), nome(nome){}

        Componente(bool ligado, bool conectado, string nome): 
        ligado(ligado), conectado(conectado), nome(nome){}

        void ligar(){
            ligado = true;
        
        }

        void desligar(){
            ligado = false;

        }

        bool conectar(){
            if(conectado == true){
                conectado = true;
                return true;
                }
                else{
                    return false;
                    }

        }

        void desconectar(){
            conectado = false;

        }

        int getValor(){
            return valor;
        }
};