#include <iostream>
#include "Componente.cpp"
#include "Atuador.cpp"
#include "Ventilador.cpp"
#include "Umidificador.cpp"
#include "Desumidificador.cpp"
#include "Lampada.cpp"
#include "Sensor.cpp"
#include "Temperatura.cpp"
#include "Luminosidade.cpp"
#include "Umidade.cpp"
#include "Sala.cpp" 
using namespace std;

int main(){

    //Colocar valores
    // Inicializando atuadores1
    Atuador* atuadores1[4];
    atuadores1[0] = new Lampada(/*bool ligado, bool conectado, int valor, string nome*/);
    atuadores1[1] = new Ventilador(/*bool ligado, bool conectado, int valor, string nome*/);
    atuadores1[2] = new Umidificador(/*bool ligado, bool conectado, int valor, string nome*/);
    atuadores1[3] = new Desumidificador(/*bool ligado, bool conectado, int valor, string nome*/);

    // Inicializando sensores1
    Sensor* sensores1[3];
    sensores1[0] = new Luminosidade(/*int limiarClaridade, bool ligado, bool conectado, int valor, string nome*/);
    sensores1[1] = new Temperatura(/*float TempC, bool ligado, bool conectado, int valor, string nome*/);
    sensores1[2] = new Umidade(/*bool ligado, bool conectado, int valor, string nome*/);

    // Inicializando atuadores2
    Atuador* atuadores2[4];
    atuadores2[0] = new Lampada(/*bool ligado, bool conectado, int valor, string nome*/);
    atuadores2[1] = new Ventilador(/*bool ligado, bool conectado, int valor, string nome*/);
    atuadores2[2] = new Umidificador(/*bool ligado, bool conectado, int valor, string nome*/);
    atuadores2[3] = new Desumidificador(/*bool ligado, bool conectado, int valor, string nome*/);

    // Inicializando sensores
    Sensor* sensores2[3];
    sensores2[0] = new Luminosidade(/*int limiarClaridade, bool ligado, bool conectado, int valor, string nome*/);
    sensores2[1] = new Temperatura(/*float TempC, bool ligado, bool conectado, int valor, string nome*/);
    sensores2[2] = new Umidade(/*bool ligado, bool conectado, int valor, string nome*/);

    // Inicializando atuadores3
    Atuador* atuadores3[4];
    atuadores3[0] = new Lampada(/*bool ligado, bool conectado, int valor, string nome*/);
    atuadores3[1] = new Ventilador(/*bool ligado, bool conectado, int valor, string nome*/);
    atuadores3[2] = new Umidificador(/*bool ligado, bool conectado, int valor, string nome*/);
    atuadores3[3] = new Desumidificador(/*bool ligado, bool conectado, int valor, string nome*/);

    // Inicializando sensores3
    Sensor* sensores3[3];
    sensores3[0] = new Luminosidade(/*int limiarClaridade, bool ligado, bool conectado, int valor, string nome*/);
    sensores3[1] = new Temperatura(/*float TempC, bool ligado, bool conectado, int valor, string nome*/);
    sensores3[2] = new Umidade(/*bool ligado, bool conectado, int valor, string nome*/);

    // Criando as salas
    Sala s1(atuadores1, sensores1); // Passa os arrays de atuadores e sensores
    Sala s2(atuadores2, sensores2);
    Sala s3(atuadores3, sensores3);


for (int i = 0; i < 10; i++){

}


}