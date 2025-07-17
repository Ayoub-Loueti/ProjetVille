#ifndef USINE_H
#define USINE_H
#include <iostream>
#include <string>
using namespace std;
#include "batiment.h"
class usine:public batiment{
    int productionRessources;
    float pollution;
public:
    usine(string,string,int,int,float);
    void afficherDetails() override;
    void produireRessources();
    void  calculerPollution();



};

#endif // USINE_H
