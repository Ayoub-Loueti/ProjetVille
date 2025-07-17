#include <iostream>
#include <string>
using namespace std;
#include "batiment.h"
#include "parc.h"

parc::parc(string n,string t,int e,int el,float ef,int s,float eb):batiment(n,t,e,el,ef){
    surface=s;
    effetBienEtre=eb;

}

void parc::afficherDetails(){
    batiment::afficherDetails();
    cout<< "Surface: " << surface << ", Effet Bien Etre: " << effetBienEtre <<endl;

}

float parc::ameliorerBienEtre(float a){
    return a=a+effetBienEtre;



}
