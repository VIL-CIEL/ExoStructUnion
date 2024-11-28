#include <iostream>
#include "GsTP.h"
using namespace std;

void Saisis_info(employe* E) {

	char nom[30];

	cout << "Entrez le nom de l'employe : ";
	cin >> nom;
	strcpy_s(E->nom, nom);
	cout << "Entrez le prenom de l'employe : ";
	cin >> nom;
	strcpy_s(E->prenom, nom);

	int date;
	cout << "Entrez le jour d'embauche : ";
	cin >> date;
	E->date_embauche.jour = date;

	cout << "Entrez le mois d'embauche : ";
	cin >> date;
	E->date_embauche.mois = date;

	cout << "Entrez l'annee d'embauche : ";
	cin >> date;
	E->date_embauche.annee = date;

	cout << "Entrez le jour de début de fonction : ";
	cin >> date;
	E->date_fonction.jour = date;

	cout << "Entrez le mois de début de fonction : ";
	cin >> date;
	E->date_fonction.mois = date;

	cout << "Entrez l'annee de début de fonction : ";
	cin >> date;
	E->date_fonction.annee = date;

}