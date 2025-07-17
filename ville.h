#ifndef VILLE_H
#define VILLE_H
#include <iostream>
using namespace std;
#include "batiment.h"
#include <vector>
#include <cctype>
#include <string>
class ville{
    string nom;
    float budget;
    int  population;
    float satisfaction;
    vector<batiment> tab;
    int reau;
    int relec;
public:
    ville(string,float,int,int);
    float getSatisfaction() const;
    string getNom() const;
    int getTotalRessources() const;
    void setSatisfaction(float newSatisfaction);
    float getBudget() const;
    void setBudget(float newBudget);
    int getPopulation() const;
    void setPopulation(int newPopulation);
    vector<batiment>& getTab();
    friend void updateElectricityConsumption(ville& v);
    void ajouterb(const batiment&);
    void suppb(int);
    int calculercont();
    void calculersatis();
};

#endif // VILLE_H
