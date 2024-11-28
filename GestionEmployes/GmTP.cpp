#include <iostream>
#include "GsTP.h"
using namespace std;

int main(){

	cout << "BIENVENUE DANS GESTION DES EMPLOYES\n";

	employe E1;
	Saisis_info(&E1);

	cout << "Employe 1 : " << E1.prenom << " " << E1.nom << "\nDate d'embauche : " << E1.date_embauche.jour << "/" << E1.date_embauche.mois << "/" << E1.date_embauche.annee << "\nDate de prise de fonction : " << E1.date_fonction.jour << "/" << E1.date_fonction.mois << "/" << E1.date_fonction.annee;
	return 0;
}