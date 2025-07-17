#ifndef MAISON_H
#define MAISON_H
#include <iostream>
#include <string>
using namespace std;
#include "batiment.h"

class maison: public batiment{
    int capaciteHabitants;
    int habitantsActuels;
public:
    maison(string,string,int,int,float,int,int);
    void afficherDetails() override;
    void ajouterHabitants(int);
    void retirerHabitants(int);


};

#endif // MAISON_H
