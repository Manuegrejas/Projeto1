#include <iostream>
#include "Sensor.cpp"
#include "Atuador.cpp"
using namespace std;

class Sala{
    private:
    Atuador* atuadores[10];
    Sensor* sensores[10];

public:
    // Construtor que recebe arrays de ponteiros
    Sala(Atuador* atuadores[], Sensor* sensores[]) {
        for (int i = 0; i < 10; ++i) {
            this->atuadores[i] = atuadores[i];
            this->sensores[i] = sensores[i];
        }
    }
};