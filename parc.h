#ifndef PARC_H
#define PARC_H
#include <iostream>
#include <string>
using namespace std;
#include "batiment.h"
class parc: public batiment{

    int surface;
    float effetBienEtre;
public:
    parc(string,string,int,int,float,int,float);
    void afficherDetails() override;
    float ameliorerBienEtre(float a);




};

#endif // PARC_H
