#ifndef BATIMENT_H
#define BATIMENT_H
#include <iostream>
#include <string>
using namespace std;
class batiment
{
public:
    static int nextId;
    int id;
    string nom;
    string type;
    int consommationEau;
    int consommationElectricite;
    float effetSatisfaction;
public:
    batiment();
    batiment(string,string,int,int,float);
    virtual void afficherDetails();
    void calculerImpactRessources(int,int);
    ~batiment();
};

#endif // BATIMENT_H
