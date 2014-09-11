#pragma once
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "time.h"

using namespace std;

vector<string> lireFichier (string path)
{
	string ligne;
	ifstream fichier (path);
	vector<string> mots;

	if (fichier.is_open())
	{
		while ( getline (fichier,ligne) )
		{
			mots.push_back(ligne);
		}
		fichier.close();
	}
	else cout << "Unable to open file"; 

	return mots;
}


