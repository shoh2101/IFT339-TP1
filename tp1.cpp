#include "librairie.h"
#include "dictionnaire.h"
#include "manipulateur.h"
#include "mot.h"


int main()
{

  dictionnaire le_dictionnaire;
  uint32_t nb_lettres;
  string nom_fichier;

  //R�cup�ration de la liste de mot

    //R�cup�ration du nom du fichier
     cout << "Nom du fichier : ";
      cin>>nom_fichier;

    //R�cup�ration du nombre de lettres
      cout << "Nombre de lettres : ";
      cin>>nb_lettres;

    //Ouverture du dictionnaire
      le_dictionnaire.ouvrir(nom_fichier,nb_lettres);

  //Saisie du nombre de lettre du mot � rechercher


//  //Cr�ation d'un vecteur contant l'indice des mots correspondants � la taille demand�
//  for(size_t i=0; i<vec_mots.size(); i++)
//  {
//    if(vec_mots[i].size() == nb_lettre)
//      vec_choix_correspondant.push_back(vec_mots[i].size());
//  }
//
//  //Initialisation de la source al�atoire
//    srand (time(NULL));
//  //S�lection au hasard de l'indice d'un mot de la liste correspondante � la taille demand�
//  indice_mot_cible = rand() % vec_choix_correspondant.size();
//
//  //R�cup�ration du mot cibl� par le programme
//  str_mot_cible = vec_mots[indice_mot_cible];
//
//  //Initialisation du mot cach�
//  for(size_t i=0; i<str_mot_cible.size(); i++)
//    str_solution.push_back('-');
//
//  do
//  {
//    system("cls");
//    cout<<"--- Bonne chance ! ---"<<"\n\n";
//    cout<<"Les lettres disponibles : "<<str_lettre_disponible<<endl;
//    cout<<"Les lettres utilisees : "<<str_lettre_utilise<<endl;
//    cout<<"Le mot cache : "<<str_solution<<endl;
//    cout<<"Le mot cache : "<<str_mot_cible<<endl;
//
//    //Saise de la lettre
//    cout<<"Essaie : "; cin>>c_essaie;
//    c_essaie = (toupper(c_essaie));
//
//    //Mise � jour des lettres utilis�es
//    if(str_lettre_utilise.find(c_essaie) > str_lettre_utilise.size())
//      str_lettre_utilise.push_back(c_essaie);
//    //Mise � jour des lettres disponibles
//    if(str_lettre_disponible.find(c_essaie) <= str_lettre_disponible.size())
//      str_lettre_disponible.erase(str_lettre_disponible.find(c_essaie),1);
//
//    //Recherche des pr�sences de l'essaie dans le mot cible
//    vec_lettre_correpondant.clear();
//    for(size_t i=0; i<str_mot_cible.size();i++)
//      if(str_mot_cible[i] == c_essaie)
//        vec_lettre_correpondant.push_back(i);
//
//  }while(c_essaie != '#');

  system("pause");
  return 0;
}

