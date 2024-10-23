#include <iostream>
#include "Sala.cpp" 
using namespace std;

int main(){

    //Colocar valores
    // Inicializando atuadores1
    Atuador* atuadores1[4];
    atuadores1[0] = new Lampada(true, true, 5, "lamp1"); /*bool ligado, bool conectado, int valor, string nome*/
    atuadores1[1] = new Ventilador(true, true, 0, "vent1");/*bool ligado, bool conectado, int valor, string nome*/
    atuadores1[2] = new Umidificador(true, true, 0, "Um1");/*bool ligado, bool conectado, int valor, string nome*/
    atuadores1[3] = new Desumidificador(true, true, -3, "Desu1");/*bool ligado, bool conectado, int valor, string nome*/

    // Inicializando sensores1
    Sensor* sensores1[3];
    sensores1[0] = new Luminosidade(50, true, true, 5, "lumi1");/*int limiarClaridade, bool ligado, bool conectado, int valor, string nome*/
    sensores1[1] = new Temperatura(41, true, true, "temp1");/*float TempC, bool ligado, bool conectado, string nome*/
    sensores1[2] = new Umidade(true, true, 15, "Umi1");/*bool ligado, bool conectado, int valor, string nome*/

    // Inicializando atuadores2
    Atuador* atuadores2[4];
    atuadores2[0] = new Lampada(true, true, 0, "lamp2");
    atuadores2[1] = new Ventilador(true, true, 0, "vent2");
    atuadores2[2] = new Umidificador(true, true, 0, "Um2");
    atuadores2[3] = new Desumidificador(true, true, 0, "Desu2");

    // Inicializando sensores
    Sensor* sensores2[3];
    sensores2[0] = new Luminosidade(50, true, true, 5, "lumi2");
    sensores2[1] = new Temperatura(16, true, true, "temp2");
    sensores2[2] = new Umidade(true, true, 75, "Umi2");

    // Inicializando atuadores3
    Atuador* atuadores3[4];
    atuadores3[0] = new Lampada(true, true, 100, "lamp3");
    atuadores3[1] = new Ventilador(true, true, 0, "vent3");
    atuadores3[2] = new Umidificador(true, true, 0, "Um3");
    atuadores3[3] = new Desumidificador(true, true, 0, "Desu3");

    // Inicializando sensores3
    Sensor* sensores3[3];
    sensores3[0] = new Luminosidade(50, true, true, 20, "lumi3");
    sensores3[1] = new Temperatura(26, true, true, "temp3");
    sensores3[2] = new Umidade(true, true, 40,"Umi3");

    // Criando as salas
    Sala s1(atuadores1, sensores1); // Passa os arrays de atuadores e sensores
    Sala s2(atuadores2, sensores2);
    Sala s3(atuadores3, sensores3);


for (int i = 0; i < 1440; i++){

    s1.atualizaSensoresLuminosidade();
    s1.atualizaAtuadoresLuminosidade(i);
    s1.atualizaSensoresTemperatura();
    s1.atualizaAtuadoresTemperatura();
    s1.atualizaSensoresUmidade();
    s1.atualizaAtuadoresUmidade();
    s1.imprimeValores(1);

    s2.atualizaSensoresLuminosidade();
    s2.atualizaAtuadoresLuminosidade(i);
    s2.atualizaSensoresTemperatura();
    s2.atualizaAtuadoresTemperatura();
    s2.atualizaSensoresUmidade();
    s2.atualizaAtuadoresUmidade();
    s2.imprimeValores(2);

    s3.atualizaSensoresLuminosidade();
    s3.atualizaAtuadoresLuminosidade(i);
    s3.atualizaSensoresTemperatura();
    s3.atualizaAtuadoresTemperatura();
    s3.atualizaSensoresUmidade();
    s3.atualizaAtuadoresUmidade();
    s3.imprimeValores(3);
    
}
}