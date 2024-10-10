#include <iostream>
#include "Sensor.cpp"
#include "Atuador.cpp"
#include "Temperatura.cpp"
#include "Ventilador.cpp"
using namespace std;
#pragma once

class Sala{
    private:
    Atuador* atuadores[10];
    Sensor* sensores[10];
    Temperatura*temp;
    int t_atual;
    Ventilador*vent;

public:
    // Construtor que recebe arrays de ponteiros
    Sala(Atuador* atuadores[], Sensor* sensores[]) {
        for (int i = 0; i < 10; ++i) {
            this->atuadores[i] = atuadores[i];
            this->sensores[i] = sensores[i];
        }
    
        temp = (Temperatura*)sensores[1];
        vent = (Ventilador*)atuadores[1];
    }

    void atualizaSensores(){
        t_atual = temp -> getTemperaturaEmC();   
    }

    void atualizaAtuadores(){
        int velocidade;
    cout << "temparatura lida = " << t_atual << endl;
    if (t_atual > 25 && t_atual < 30){
        atuadores[1]->setValor(1);
        velocidade = 1;
        cout << " Ventilador ligado velocidade 1 " << endl;
    } else if (t_atual > 30 && t_atual < 35){
        atuadores[1]->setValor(2);
        velocidade = 2;
        cout << " Ventilador ligado velocidade 2 " << endl;
    } else if (t_atual > 35){
        atuadores[1]->setValor(3);
        velocidade = 3;
        cout << " Ventilador ligado velocidade 3 " << endl;
    } else {
        atuadores[1]->setValor(0);
        velocidade = 0;
        cout << " Ventilador desligado " << endl;
    }
    
    if (velocidade == 0){
        temp -> setTemperaturaEmC(1.0f);
    }
    else { 
        temp -> setTemperaturaEmC(velocidade);
    }
    if (((Ventilador*)atuadores[1])->setValor(((Ventilador*)atuadores[1])->getVelocidade()) == false) {
        cout << "Ventilador não inicializado corretamente";
    } else {
        cout << "Ventilador inicializado corretamente";
    }
    
    }

};