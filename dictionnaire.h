#ifndef DICTIONNAIRE_H
#define DICTIONNAIRE_H

#include <map>
#include <set>

#include "mot.h"

class dictionnaire
{
  public:

    //Manipulateur: implémenté par le dictionnaire

  void ouvrir(string,uint32_t);  //Ouvrir le fichier indiqué par le string et récupérer les mots de longueur uint32_t

    dictionnaire();
    ~dictionnaire();

  private:

  map< uint32_t, mot > map_dictionnaire;      // ensemble des mots tirés du fichier ODS6
  map< mot, set < mot > > map_associative;    // ensemble des mots utilisés lors de la triche

};

#endif // DICTIONNAIRE_H
