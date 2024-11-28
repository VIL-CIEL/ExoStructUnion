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

void Affichage_info(employe* E) {
	cout << "Employe 1 : " << E->prenom << " " << E->nom << "\nDate d'embauche : " << E->date_embauche.jour << "/" << E->date_embauche.mois << "/" << E->date_embauche.annee << "\nDate de prise de fonction : " << E->date_fonction.jour << "/" << E->date_fonction.mois << "/" << E->date_fonction.annee;
}