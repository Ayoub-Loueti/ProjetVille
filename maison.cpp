#include <iostream>
#include <string>
using namespace std;
#include "batiment.h"
#include "maison.h"

maison::maison(string n,string t,int e,int el,float ef,int ch,int ah):batiment(n,t,e,el,ef){
    capaciteHabitants=ch;
    habitantsActuels=ah;
}

void maison::afficherDetails(){
    batiment::afficherDetails();
    cout<< "Capacité: " << capaciteHabitants << ", Habitants actuels: " << habitantsActuels << endl;
}

void maison::ajouterHabitants(int nb){
    if (capaciteHabitants>=habitantsActuels+nb){
        habitantsActuels=habitantsActuels+nb;
    }
    else{
        cout<<"vous ne pouvez pas ajouter d'habitants qui dépasseront la capacité de cette maison!!!"<<endl;
    }
}

void maison::retirerHabitants(int nb){
    habitantsActuels =max(habitantsActuels - nb, 0);
}
