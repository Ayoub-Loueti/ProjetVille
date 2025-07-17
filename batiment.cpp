#include <iostream>
#include <string>
using namespace std;
#include "batiment.h"
int batiment::nextId = 1;
batiment::batiment(){
    id=nextId++;

}
batiment::batiment(string n,string t,int e,int el,float ef){
    id=nextId++;
    nom=n;
    type=t;
    consommationEau=e;
    consommationElectricite=el;
    effetSatisfaction=ef;
}

void batiment::afficherDetails(){
    cout << "ID: " << id << ", Nom: " << nom << ", Type: " << type << endl;
    cout << "Consommation d'eau: " << consommationEau << ", Consommation d'électricité: " << consommationElectricite << endl;
    cout << "Effet sur la satisfaction: " << effetSatisfaction << endl;


}

void batiment::calculerImpactRessources(int eau,int elec){
    eau=eau - consommationEau;
    elec=elec - consommationElectricite;


}

batiment::~batiment(){
    cout << "Appel Dest" << endl;

}
