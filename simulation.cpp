#include <iostream>
using namespace std;
#include "ville.h"
#include <cstdlib>
#include <ctime>
#include "simulation.h"

simulation::simulation(ville v)
    : cycleActuel(0), maVille(v) {
    evenements.push_back("Pigeons géants envahissent la ville !");
    evenements.push_back("Panne de courant, consommation d'énergie +50% !");
    evenements.push_back("Grève des jardiniers, satisfaction -20%");
    evenements.push_back("Panne géante de transports publics, satisfaction chute !");
    evenements.push_back("Tempête de neige bloque les routes, production interrompue !");
}

void simulation::demarrerCycle() {
    cycleActuel++;
    cout << "Cycle " << cycleActuel << " démarré." << endl;
}

void simulation::terminerCycle() {
    cout << "Cycle " << cycleActuel << " terminé." << endl;
}

void simulation::declencherEvenement() {
    srand(time(0));
    int evenementIndex = rand() % evenements.size();
    cout << "Événement: " << evenements[evenementIndex] << endl;
    switch (evenementIndex) {
    case 0:
        maVille.setSatisfaction(maVille.getSatisfaction() * 0.85);
        cout << "La satisfaction des habitants a baissé de 15%." << endl;
        break;

    case 1:
    {
        float consommationElectriciteT = 0;

        for (vector<batiment>::iterator it = maVille.getTab().begin(); it != maVille.getTab().end(); ++it) {
            consommationElectriciteT += it->consommationElectricite;
        }

        consommationElectriciteT *= 1.5;
        updateElectricityConsumption(maVille);

        cout << "La consommation d'énergie a augmenté de 50%." <<  consommationElectriciteT << endl;
        break;
    }


    case 2:
        maVille.setSatisfaction(maVille.getSatisfaction() *0.80);
        cout << "La satisfaction a baissé de 20%." << endl;
        break;

    case 3:
        maVille.setSatisfaction(maVille.getSatisfaction() * 0.75);
        cout << "Les habitants sont mécontents du blocage des transports." << endl;
        break;

    case 4:
    {
        float budgetRequis = maVille.getBudget() * 0.1;

        if (maVille.getBudget() >= budgetRequis) {
            maVille.setBudget(maVille.getBudget() - budgetRequis);
            cout << "Vous avez dépensé 10% du budget pour déneiger les routes. La satisfaction reste inchangée." << endl;
        } else {
            maVille.setSatisfaction(maVille.getSatisfaction() * 0.90);
            cout << "La tempête de neige a affecté la production et la satisfaction." << endl;
        }
        break;
    }


    default:
        cout << "Événement inconnu." << endl;
        break;
    }
}
