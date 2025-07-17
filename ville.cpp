#include <iostream>
using namespace std;
#include "batiment.h"
#include <vector>
#include <cctype>
#include <string>
#include "ville.h"
float ville::getSatisfaction() const {
    return satisfaction;
}

void ville::setSatisfaction(float newSatisfaction) {
    satisfaction = newSatisfaction;
}

float ville::getBudget() const {
    return budget;
}

void ville::setBudget(float newBudget) {
    budget = newBudget;
}

int ville::getPopulation() const {
    return population;
}

void ville::setPopulation(int newPopulation) {
    population = newPopulation;
}

vector<batiment>& ville::getTab() {
    return tab;
}

void updateElectricityConsumption(ville& v) {
    for (std::vector<batiment>::iterator it = v.tab.begin(); it != v.tab.end(); ++it) {
        it->consommationElectricite += it->consommationElectricite * 0.5;
    }
}

ville::ville(string n,float b,int re,int rel){
    nom=n;
    budget=b;
    population=0;
    satisfaction=0;
    reau=re;
    relec=rel;


}

void ville::ajouterb(const batiment& batiment) {
    tab.push_back(batiment);
}

void ville::suppb(int id) {
    vector<batiment>::iterator it;
    for (it = tab.begin(); it != tab.end(); ++it) {
        if (it->id == id) {
            tab.erase(it);
            cout << "Batiment with ID " << id << " removed.\n";
            return;
        }
    }
    cout << "No batiment found with ID " << id << ".\n";
}

int ville::calculercont(){
    int cont=0;
    vector<batiment>::iterator deb,fin,it;
    deb=tab.begin();
    fin=tab.end();
    for(it=deb;it<fin;it++){
        cont=it->consommationEau+it->consommationElectricite;

    }
    return cont;


}

void ville::calculersatis(){
    vector<batiment>::iterator deb,fin,it;
    deb=tab.begin();
    fin=tab.end();
    for(it=deb;it<fin;it++){
        satisfaction=it->effetSatisfaction+satisfaction;

    }

}

string ville::getNom() const { return nom; }
int ville::getTotalRessources() const { return reau + relec; }
