#ifndef SIMULATION_H
#define SIMULATION_H
#include <iostream>
using namespace std;
#include "ville.h"
class simulation
{
private:
    int cycleActuel;
    ville maVille;
    std::vector<std::string> evenements;

public:
    simulation(ville v);
    void demarrerCycle();
    void terminerCycle();
    void declencherEvenement();
};

#endif // SIMULATION_H
