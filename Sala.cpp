#include <iostream>
#include "Sensor.cpp"
#include "Atuador.cpp"
#include "Temperatura.cpp"
#include "Ventilador.cpp"
#include "Umidade.cpp"
#include "Umidificador.cpp"
#include "Desumidificador.cpp"
using namespace std;
#pragma once

class Sala{
    private:
    Atuador* atuadores[10];
    Sensor* sensores[10];
    Temperatura*tempC;
    Temperatura*tempK;
    Temperatura*tempF;
    int t_atual;
    int tk;
    int tf;
    Ventilador*vent;
    int velocidade;
    Umidade*umi;
    int umi_atual;
    Umidificador*umir;
    Desumidificador*desumir;
    int intensidade;

public:
    // Construtor que recebe arrays de ponteiros
    Sala(Atuador* atuadores[], Sensor* sensores[]) {
        for (int i = 0; i < 10; ++i) {
            this->atuadores[i] = atuadores[i];
            this->sensores[i] = sensores[i];
        }
    
        tempC = (Temperatura*)sensores[1];
        vent = (Ventilador*)atuadores[1];
        umi = (Umidade*)sensores[2];
        umir = (Umidificador*)atuadores[2];
        desumir = (Desumidificador*)atuadores[3];
    }

    void atualizaSensoresTemperatura(){
        t_atual = tempC -> getTemperaturaEmC(); 
        tk = tempC -> setTemperaturaEmK();
        tf = tempC -> setTemperaturaEmF();
        velocidade = vent -> getVelocidade();
    }

     void atualizaSensoresUmidade(){
        umi_atual = umi -> getUmidadeRelativa();
        intensidade =  umir -> getIntensidade();
        intensidade =  desumir -> getIntensidade();
    }

    void atualizaAtuadoresTemperatura(){
    if (t_atual > 25 && t_atual < 30){
        vent -> setValor(1);
    } else if (t_atual > 30 && t_atual < 35){
        vent -> setValor(2);
    } else if (t_atual > 35){
        vent ->setValor(3);
    } else {
        vent -> setValor(0);

    }
    
    if (velocidade == 0){
        tempC -> setTemperaturaEmC(1.0f);
    }
    else { 
        tempC -> setTemperaturaEmC(velocidade);
    }
    if (vent -> setValor(vent-> getVelocidade()) == false) {
        cout << "Ventilador não inicializado corretamente"<< endl;
    } 
    }

    void atualizaAtuadoresUmidade(){
    if (umi_atual > 47 && umi_atual < 50){
        desumir -> setValor(-1);
    } else if (umi_atual > 50 && umi_atual < 60){
        desumir -> setValor(-2);
    } else if (umi_atual > 70){
        desumir ->setValor(-3);
    } else if (umi_atual < 43 && umi_atual > 30){
        umir -> setValor(1);
    } else if (umi_atual < 30 && umi_atual > 20){
        umir -> setValor(2);
    } else if (umi_atual < 20){
        umir ->setValor(3);
    } else {
        umir -> setValor(0);
        desumir -> setValor(0);
    }
    
    if (intensidade == 0){
        umi -> setUmidade(1.0f);
    }
    else { 
        umi -> setUmidade(intensidade);
    }
    
    }

    void imprimeValores(){
        cout << "------------------------------------------------" << endl;
        cout << "Temparatura lida em Celsius: " << t_atual << "°C" << endl;
        cout << "Temparatura lida em Kelvins: " << tk << "K" <<endl;
        cout << "Temparatura lida em Fahrenheit: " << tf << "°F" << endl;
        cout << "Ventilador -> velocidade " << velocidade << endl;
        cout << "Umidade Relativa lida: " << umi_atual << "%" << endl;
        if (intensidade < 0) {
            cout << "Desumidificador -> intensidade " << intensidade*-1 << endl;
            cout << "Umidificador -> intensidade 0" << endl;
        } else if (intensidade > 0){
            cout << "Desumidificador -> intensidade 0" << endl;
            cout << "Umidificador -> intensidade " << intensidade << endl;
        } else {
            cout << "Desumidificador -> intensidade 0" << endl;
            cout << "Umidificador -> intensidade 0" << endl;
        }
        cout << "------------------------------------------------" << endl;
        
    }

};