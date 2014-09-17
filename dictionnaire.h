#ifndef DICTIONNAIRE_H
#define DICTIONNAIRE_H

#include <map>
#include <set>

#include "mot.h"

class dictionnaire
{
public:


    void ouvrir(string,uint32_t);  //Ouvrir le fichier indiqu� par le string et r�cup�rer les mots de longueur uint32_t

    dictionnaire();
    ~dictionnaire();

    void actualiser_lettres(char); // Retire la lettre des lettres disponibles et ajoute la lettre aux lettrres utilis�es
    bool lettre_presente(char);    // V�rifie si le char est pr�sent dans le mot cible




private:

    map< uint32_t, mot > map_dictionnaire;      // ensemble des mots tir�s du fichier ODS6
    map< mot, set < mot > > map_associative;    // ensemble des mots utilis�s lors de la triche


    string disponibles;         //lettres disponibles
    string utilisees;           //lettres utilis�es
    string etat_actuel;         //mot tel qu'affich�, tel que trouv� actuellement
    uint32_t indice_mot_cible;
    mot mot_aleatoire();        // G�n�re un indice al�atoire et en retourne le mot associ�
    void comparer(char);        // Compare le char avec le mot cible, v�rifie si la lettre est
    // pr�sente, met � jour l'affichage des lettres, etc

};



#endif // DICTIONNAIRE_H
