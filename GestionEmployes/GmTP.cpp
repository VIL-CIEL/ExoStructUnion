#include <iostream>
#include "GsTP.h"
using namespace std;

int main(){

	cout << "BIENVENUE DANS GESTION DES EMPLOYES\n";

	employe E1;
	strcpy_s(E1.nom, "Martinez");
	strcpy_s(E1.prenom, "David");

	E1.date_embauche.jour = 5;
	E1.date_embauche.mois = 7;
	E1.date_embauche.annee = 2005;

	E1.date_fonction.jour = 10;
	E1.date_fonction.mois = 8;
	E1.date_fonction.annee = 2005;

	cout << "Employe 1 : " << E1.prenom << " " << E1.nom << "\nDate d'embauche : " << E1.date_embauche.jour << "/" << E1.date_embauche.mois << "/" << E1.date_embauche.annee << "\nDate de prise de fonction : " << E1.date_fonction.jour << "/" << E1.date_fonction.mois << "/" << E1.date_fonction.annee;
	return 0;
}