#ifndef MANIPULATEUR_H
#define MANIPULATEUR_H

#include <string>

#include "mot.h"

using namespace std;
class manipulateur
{
public:
    manipulateur();
    ~manipulateur();

    void actualiser_lettres(char); // Retire la lettre des lettres disponibles et ajoute la lettre aux lettrres utilisées
    bool lettre_presente(char);    // Vérifie si le char est présent dans le mot cible


private:

    string disponibles;         //lettres disponibles
    string utilisees;           //lettres utilisées
    string etat_actuel;         //mot tel qu'affiché, tel que trouvé actuellement
    uint32_t indice_mot_cible;
    mot mot_aleatoire();        // Génère un indice aléatoire et en retourne le mot associé
    void comparer(char);        // Compare le char avec le mot cible, vérifie si la lettre est
    // présente, met à jour l'affichage des lettres, etc

};


#endif // MANIPULATEUR_H
