#include <iostream>
#include <string>
using namespace std;
#include "batiment.h"
#include "usine.h"

usine::usine(string n,string t,int e,int el,float ef):batiment(n,t,e,el,ef){
    productionRessources=0;
    pollution=0;


}

void usine::produireRessources(){
    int r;
    cout<<"Entrez le nombre de ressources:"<<endl;
    cin>>r;
    productionRessources=r;


}

void usine::calculerPollution(){
    pollution=productionRessources/10;

}

void usine::afficherDetails(){
    batiment::afficherDetails();
    cout<< "Production: " << productionRessources << ", Pollution: " << pollution <<endl;

}
