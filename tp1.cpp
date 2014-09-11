#include "librairie.h"
#include "mot.h"

int main()
{
	vector<string> vec_mots;								//Vecteur contenant les mots du scrabble
	vector<int> vec_choix_correspondant;					//Vecteur contenant les choix correspondants au nombre de lettre desiré
	map<mot,list<mot>> dictionnaire;						//Map contenant les objets de type mot et leur liste correspondante
	int int_nb_lettre;										//Variable contenant le nombre de lettre désiré par l'utilisateur
	int int_indice_mot_choisit;								//Variable contenant le mot choisi correspondant au critère
	string str_mot_cible;									//Le mot ciblé par le programme
	string str_lettre_disponible("ABCDEFGHIJKLMNOPQRVWXYZ");//Lettres disponibles au démarrage 
	string str_lettre_utilisee;								//Lettres utilisée par l'utilisateur
	string str_mot_cache;									//Le mot caché dans sont état actuel du jeu ( lettre dévcouvertes et non découvertes)

	vec_mots = lireFichier("ODS6.txt"); //Récupération de la liste de mot

	cout << "Nombre de lettres : "; cin>>int_nb_lettre;

	//Création d'un vecteur contant l'indice des mots correspondants à la taille demandé
	for(int i=0; i<vec_mots.size(); i++)	
	{
		if(vec_mots[i].size() == int_nb_lettre)
			vec_choix_correspondant.push_back(vec_mots[i].size());
	}

	//Initialisation de la source aléatoire
    srand (time(NULL));
	//Sélection au hasard de l'indice d'un mot de la liste correspondante à la taille demandé
	int_indice_mot_choisit = rand() % vec_choix_correspondant.size();

	//Récupération du mot ciblé par le programme
	str_mot_cible = vec_mots[int_indice_mot_choisit];

	//Initialisation du mot caché
	for(int i=0; i<str_mot_cible.size(); i++)
		str_mot_cache.push_back('-');

	system("cls");
	cout<<"--- Bonne chance ! ---"<<"\n\n";
	cout<<"Les lettres disponibles : "<<str_lettre_disponible<<endl;
	cout<<"Les lettres utilisees : "<<str_lettre_utilisee<<endl;

	cout<<"Le mot cache : "<<str_mot_cache<<endl;

	system("pause");
	return 0;
}

