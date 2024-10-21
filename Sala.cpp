#include <iostream>
#include "Sensor.cpp"
#include "Atuador.cpp"
#include "Temperatura.cpp"
#include "Ventilador.cpp"
#include "Umidade.cpp"
#include "Umidificador.cpp"
#include "Desumidificador.cpp"
#include "Luminosidade.cpp"
#include "Lampada.cpp"
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
    Luminosidade*lumi;
    int lumi_atual;
    Lampada*lamp;
    int potencia;


public:
    // Construtor que recebe arrays de ponteiros
    Sala(Atuador* atuadores[], Sensor* sensores[]) {
        for (int i = 0; i < 10; ++i) {
            this->atuadores[i] = atuadores[i];
            this->sensores[i] = sensores[i];
        }
    
        lumi = (Luminosidade*)sensores[0];
        lamp = (Lampada*)atuadores[0];
        tempC = (Temperatura*)sensores[1];
        vent = (Ventilador*)atuadores[1];
        umi = (Umidade*)sensores[2];
        umir = (Umidificador*)atuadores[2];
        desumir = (Desumidificador*)atuadores[3];
    }

    void atualizaSensoresLuminosidade(){
        lumi_atual = lumi->getLuminosidade();

    }
    
    void atualizaSensoresTemperatura(){
        t_atual = tempC -> getTemperaturaEmC(); 
        tk = tempC -> setTemperaturaEmK();
        tf = tempC -> setTemperaturaEmF();
        
    }

    void atualizaSensoresUmidade(){
        umi_atual = umi -> getUmidadeRelativa();
    }

    void atualizaAtuadoresLuminosidade(int i){
        if (i >= 0 && i <=  240){ //0:00 até as 4:00
            lumi_atual = 0; 
        } else if (i >= 241 && i <= 300){ //4:00 até as  5:00
            lumi_atual = 12;
        } else if (i >= 301 && i <= 360){  //5:00 até as 6:00
            lumi_atual = 25;
        } else if (i >= 361 && i <= 420){  //6:00 até as 7:00
            lumi_atual = 37;
        } else if (i >= 421 && i <= 480){  //7:00 até as 8:00
            lumi_atual = 50;
        } else if (i >= 481 && i <= 540){  //8:00 até as 9:00
            lumi_atual = 62;
        } else if (i >= 541 && i <= 600){  //9:00 até as 10:00
            lumi_atual =  75;
        } else if (i >= 601 && i <= 660){  //10:00 até as 11:00
            lumi_atual = 87;
        } else if (i >= 661 && i <= 720){  //11:00 até as 12:00
            lumi_atual = 100;
        } else if (i >= 721 && i <= 780){  //12:00 até as 13:00
            lumi_atual = 87;
        } else if (i >= 781 && i <= 840){  //13:00 até as 14:00
            lumi_atual = 75;
        } else if (i >= 841 && i <= 900){  //14:00 até as 15:00
            lumi_atual = 62;
        } else if (i >= 901 && i <= 960){  //15:00 até as  16:00
            lumi_atual =  50;
        } else if (i >= 961 && i <= 1020){  //16:00 até as 17:00
            lumi_atual = 37;
        } else if (i >= 1021 && i <= 1080){  //17:00 até as 18:00
            lumi_atual = 25;
        } else if (i >= 1081 && i <= 1140){  //18:00 até as 19:00
            lumi_atual = 12;
        } else if (i >= 1141 && i <= 1440){  //19:00 até as 00:00
            lumi_atual = 0;
        }

        if  (lumi_atual >= 0 && lumi_atual <= 20){
                lamp->setValor(5);
            }  else if (lumi_atual >= 21 && lumi_atual <= 40){
                lamp->setValor(4);
            } else if (lumi_atual >= 41 && lumi_atual <= 60){
                lamp->setValor(3);
            } else if (lumi_atual >= 61 && lumi_atual <= 80){
                lamp->setValor(2);
            } else if (lumi_atual >= 81 && lumi_atual <= 100){
                lamp->setValor(1);
            } else {
                lamp->setValor(0);
            }
            potencia = lamp ->getPotencia();

    }

    void atualizaAtuadoresTemperatura(){
        vent -> setValor(0);
    if (t_atual >= 25 && t_atual < 30){
        vent -> setValor(1);
    } else if (t_atual >= 30 && t_atual < 35){
        vent -> setValor(2);
    } else if (t_atual >= 35){
        vent ->setValor(3);
    } else if (t_atual < 25) {
        vent -> setValor(0);

    }
    
    velocidade = vent -> getVelocidade();

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
        
    if (umi_atual >= 47 && umi_atual <= 50){
        desumir -> setValor(-1);
        umir -> setValor(0);
        
    } else if (umi_atual >= 51 && umi_atual <= 69){
        desumir -> setValor(-2);
        umir -> setValor(0);
        
    } else if (umi_atual >= 70){
        desumir ->setValor(-3);
        umir -> setValor(0);
        
    } else if (umi_atual <= 43 && umi_atual >= 31){
        umir -> setValor(1);
        desumir -> setValor(0);
        
    } else if (umi_atual <= 30 && umi_atual >= 21){
        umir -> setValor(2);
        desumir -> setValor(0);
        
    } else if (umi_atual <= 20){
        umir ->setValor(3);
        desumir -> setValor(0);
        
    } else {
        umir -> setValor(0);
        desumir -> setValor(0);
        
    }

    intensidade =  umir -> getIntensidade() + desumir -> getIntensidade();

    if (intensidade == 0){
        umi -> setUmidade(1.0f);
    }
    else { 
        umi -> setUmidade(intensidade);
    }
    
    }

    void imprimeValores(int ns){
        cout << "-------------------SALA " << ns << "-----------------------" << endl;
        cout << "Luminosidade lida do lado de fora: " << lumi_atual << "%"  <<  endl;
        cout << "Lâmpada -> potência " << potencia << endl;
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